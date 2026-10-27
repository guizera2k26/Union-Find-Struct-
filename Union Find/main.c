#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "header.h"



int main(){
  clock_t inicio, fim;
  double tempo;
  clock_t inicio2, fim2;
  double tempo2;
  clock_t inicio3, fim3;
  double tempo3;
 
    uf *uf1 = (uf*)malloc(sizeof(uf)); /*teste quickFind*/
    uf *uf2 = (uf*)malloc(sizeof(uf)); /*teste quickUnion comum*/
    uf *uf3 = (uf*)malloc(sizeof(uf)); /*teste quickUnion ponderado*/
    

    int actionStruct;
    printf("\tEscolha qual estrutura deve ser executada.\n 1 - Quick Find. 2 - Quick Union. 3 - Quick Union Ponderado.\n");
    scanf("%d", &actionStruct);
    
  switch (actionStruct)
  {
  case 1:
      
        printf("\t--------------------------------------------\n");
        printf("<Digite o tamanho do seu vetor>\n");
        scanf("%d",  &uf1->tam);

        uf1->vet = malloc(uf1->tam * sizeof(int));
        uf1->size = malloc(uf1->tam * sizeof(int));
        uf1->countFind = malloc(sizeof(int));
         uf1->qtdPar = 0;
       

inicio = clock();

          prencherVetor(uf1);
      //  imprmirVetor(uf1);
      paresVetorQuickFind(uf1);
    
fim = clock();
tempo = ((double) fim - inicio) / CLOCKS_PER_SEC;
      // imprimirPar(uf1);
      // printf("\n\t-----Vetor apos ser ordenado.-----\n\n");
      //   imprmirVetor(uf1);
        printf("\tAcessos TOTAIS ao vetor. %lld.\n", uf1->total_i);
          printf("\tQuantidade de ACESSO a UMA OPERACAO eh: %d\n", uf1->acesso);
            // printf("\to CUSTO por OPERACAO: %d\n", uf1->custo_i);
  printf("\tQuantidade de PARES criados: %d \n", uf1->qtdPar);
printf("\tQuantidade de acessos MEDIO ao vetor: %ld \n", calcularCustoMedio(uf1) );
printf("\tTempo de EXECUCAO da funcao selecionada: %.3f segundos - (Aproximado).\n", tempo);
printf("\n");
limparMemoria(uf1);

      
    break;
  case 2:
        
        printf("\t--------------------------------------------\n");
        printf("<Digite o tamanho do seu vetor>\n");
        scanf("%d",  &uf2->tam);
  
          
        uf2->vet = malloc(uf2->tam * sizeof(int));
        uf2->size = malloc(uf2->tam * sizeof(int));
        uf2->countQUnion = malloc(sizeof(int));
        uf2->qtdPar = 0;
        // long custo_medio = calcularCustoMedio(uf2);
      

        /*QuickUnion*/
inicio2 = clock();
        prencherVetor(uf2);
        //  imprmirVetor(uf2);
          paresVetorUnionQuick(uf2);
         
fim2 = clock();
tempo2 = ((double)fim2 - inicio2) / CLOCKS_PER_SEC;
        // imprimirPar(uf2);
        // printf("\n\t-----Vetor apos ser ordenado.-----\n\n");
        //  imprmirVetor(uf2);
         printf("\tAcessos TOTAIS ao vetor. %lld.\n", uf2->total_i);
         printf("\tQuantidade de ACESSO a UMA OPERACAO eh: %d\n", uf2->acesso);
          // printf("\to CUSTO por OPERACAO: %d\n", uf2->custo_i);


  printf("\tQuantidade de PARES criados: %d.\n", uf2->qtdPar);
printf("\tQuantidade de acessos MEDIO ao vetor: %ld.\n", calcularCustoMedio(uf2) );
printf("\tTempo de EXECUCAO da funcao selecionada: %.3f segundos - (Aproximado).\n", tempo2);
printf("\n");
limparMemoria(uf2);


    break;
  
  case 3: 
       
        printf("\t--------------------------------------------\n");
        printf("<Digite o tamanho do seu vetor>\n");
        scanf("%d",  &uf3->tam);

        
uf3->vet = malloc(uf3->tam * sizeof(int));
uf3->size = malloc(uf3->tam * sizeof(int));
uf3->countPon = malloc(sizeof(int));
 uf3->qtdPar = 0;



/*QuickUnionPonde*/
inicio3 = clock();
 prencherVetor(uf3);
//  imprmirVetor(uf3);
 paresVetorUnionQuickPonde(uf3);

fim3 = clock();
tempo3 =((double) fim3 - inicio3) / CLOCKS_PER_SEC;

//  imprimirPar(uf3);
//  printf("\n\t-----Vetor apos ser ordenado.-----\n\n");
// imprmirVetor(uf3);
printf("\tAcessos TOTAIS ao vetor. %lld.\n", uf3->total_i);
printf("\tQuantidade de ACESSOS TODA OPERACAO eh: %d.\n", uf3->acesso);
  // printf("\to CUSTO por OPERACAO: %d\n", uf3->custo_i);
  printf("\tQuantidade de PARES criados: %d.\n", uf3->qtdPar);
printf("\tQuantidade de acessos MEDIO ao vetor: %ld. \n", calcularCustoMedio(uf3) );
printf("\tTempo de EXECUCAO da funcao selecionada: %.3f segundos - (Aproximado).\n", tempo3);
printf("\n");
limparMemoria(uf3);


break;

default:
printf("Opçao invalida. Tente novamente.\n");
return 1;

  }

  return 0;

}
