
#include <stdio.h>
#include <stdlib.h>
#include "header.h"


    int find(int a, uf *uf){
        uf->acesso++;
    return uf->vet[a];

    }


void unioon(int a, int b, uf *uf){
    

uf->acesso = 0;
    int aID = find(a, uf); 
    int bID = find(b, uf);
    

        if(aID == bID){
              uf->custo_i = uf->acesso;
          uf->total_i += uf->custo_i; 
          return ;
        }
        


        for (int i = 0; i < uf->tam; i++)
        {  
                 uf->acesso++;
            if (uf->vet[i] == aID)
            {  

               uf->vet[i] = bID;
               uf->acesso++;
              
            }
            
        }
          (*uf->countFind)--;

          uf->custo_i = uf->acesso;
          uf->total_i += uf->custo_i; 
    }


