
#include <stdio.h>
#include <stdlib.h>
#include "header.h"

  
    int findUnion(int a, uf *uf){
    while (a != uf->vet[a])
     { uf->acesso++;
       
      a = uf->vet[a];
       uf->acesso++;

    }
    // uf->acesso++;

    return a;
  
}

void unionQuick(int a, int b, uf *uf){
    uf->acesso = 0;
    int aRoot = findUnion(a, uf);
    int bRoot = findUnion(b, uf);
   
        if (aRoot == bRoot){

                uf->custo_i = uf->acesso;
        uf->total_i += uf->custo_i;
        
        return ;
        }

        

        uf->vet[aRoot] = bRoot;
         uf->acesso++;
    
            (*uf->countQUnion)--;

              uf->custo_i = uf->acesso;
        uf->total_i += uf->custo_i;
}

