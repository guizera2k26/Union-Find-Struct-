#include <stdio.h>
#include <stdlib.h>
#include "header.h"



uf *prencherVetor(uf *uf){
    for (int i = 0; i < uf->tam; i++)
    {
        uf->vet[i] = i;

    }
    for (int i = 0; i < uf->tam; i++)
    {
        uf->size[i] = 1;
    }
    
    uf->custo_i = 0;
    uf->total_i = 0;
    // uf->acesso =0;
    
    return uf;
}


void imprmirVetor(uf *uf){   
    for (int i = 0; i < uf->tam; i++)
    {
       printf("Indice: %d - Valor: [%d]\n", i, uf->vet[i]);
    }
    
}
void imprmirVetorELimpar(uf *uf){
    for (int i = 0; i < uf->tam; i++)
    {
       printf("Indice: %d - Valor: [%d]\n", i, uf->vet[i]);
    }
    limparMemoria(uf);
    
}
void paresVetorUnionQuick(uf *uf){
    for (int i = 1; i < uf->tam; i++)
    {
       

        
        unionQuick(0, i, uf);
         uf->qtdPar++;

    }
}

void paresVetorQuickFind(uf *uf){
   
    for (int i = 1; i < uf->tam; i++)
    {
         
            unioon(0, i, uf);  
             uf->qtdPar++;
       
    }
}
void paresVetorUnionQuickPonde(uf *uf){

    for (int i = 1; i < uf->tam; i++)
    {
         
        unionQuickPon(0, i, uf);
         uf->qtdPar++;
  
       
    }
}

void imprimirPar(uf *uf){
    printf("\t\t\t-- Pares -- \n");
    for (int i = 0; i < uf->tam; i++)
    {
        for (int j = i + 1; j < uf->tam; j++)
        {
             printf("(%d, %d)   ", i, j); /* -> [%d, %d]\n  vet[i], vet[j]*/ /*Função obsoleta para mudnaças, nn usar*/
        }
    }
}


void limparMemoria(uf *uf){ 

    free(uf->vet);
    free(uf->size);
    free(uf->countFind);
    free(uf->countQUnion);
    free(uf->countPon);
    free(uf);

}


long calcularCustoMedio(uf *uf){

    return uf->total_i / uf->qtdPar;
}



