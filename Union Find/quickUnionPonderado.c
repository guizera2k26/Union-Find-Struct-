
#include <stdio.h>
#include <stdlib.h>
#include "header.h"

   
    int findUnionPon(int a, uf *uf){ 
    while (a != uf->vet[a])
    {  uf->acesso++;
       
      a = uf->vet[a];
       uf->acesso++;
    }
    return a;
  
}

void unionQuickPon(int a, int b, uf *uf){
   uf->acesso = 0;
   

    int aRoot = findUnionPon(a, uf);
    int bRoot = findUnionPon(b, uf);

    if (aRoot == bRoot)
    {
           uf->custo_i = uf->acesso;
            uf->total_i += uf->custo_i;
       return ;
    }

    if(uf->size[aRoot] < uf->size[bRoot]){
        uf->acesso++;
         uf->acesso++;

        uf->vet[aRoot] = bRoot;
       uf->acesso++;

        uf->size[bRoot] += uf->size[aRoot];
       uf->acesso++;
        uf->acesso++;
         uf->acesso++;
        


    } else {
        uf->vet[bRoot] = aRoot;
        uf->acesso++;

        uf->size[aRoot] += uf->size[bRoot];
         uf->acesso++;
          uf->acesso++;
           uf->acesso++;
         


    }

     (*uf->countPon)--;
      uf->custo_i = uf->acesso;
    uf->total_i += uf->custo_i;
            
}

