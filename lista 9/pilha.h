#include <stdio.h>
#include <stdlib.h>

struct pilha{
  int n;
  float vet[MAX];
  Pilha p;
}
typedef struct pilha Pilha;

Pilha * pilha_criar();
Pilha * pilha_inserir(Pilha *p, float d);
Pilha * pílha_libera(Pilha* p);
Pilha * pílha_vazia(Pilha* p);
float pilha_pega (Pilha* p);


