#ifndef HEADER_H
#define HEADER_H

 typedef struct UF{

    int tam;
    int *vet;
    int *size;
    int *countFind;
    int *countPon;
    int* countQUnion;

    long long custo_i;
    long long total_i;
    int acesso;
    long long custo_medio;
    int qtdPar;

} uf;


  int find(int a, uf *uf);
  void unioon(int a, int b, uf *uf);

  int findUnion(int a, uf *uf);
  void unionQuick(int a, int b, uf *uf);

     int findUnionPon(int a, uf *uf); 
  void unionQuickPon(int a, int b, uf *uf);


  uf *prencherVetor(uf *uf);
  void imprmirVetor(uf *uf);
  void paresVetorUnionQuick(uf *uf);
  void paresVetorQuickFind(uf *uf);
  void paresVetorUnionQuickPonde(uf *uf);
  void imprimirPar(uf *uf);
 

  void limparMemoria(uf *uf);
 void imprmirVetorELimpar(uf *uf);
  long calcularCustoMedio(uf *uf);

/* O findUnion e o FindUnionPon são os mesmos, mas atualmente eu dispensei o uso de estruturas
e optei por fazer separadamente e passando paramêtro separados, e como preciso entender qual eu vou 
chamar a cada tempo eu deixei só o nome diferente. Caso dê certo eu vou deixar assim mesmo. =D */


#endif