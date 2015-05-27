#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#define MAX 50


Pilha * pilha_criar(){
   Pilha* p= (Pilha)malloc(siezof(Pilha));
   p->n =0;
   return p;
}

Pilha * pilha_inserir(Pilha *p, float d){
 if(p->n==MAX){
   exit(1);
 }
 p->vet[p->n]=d;
 p->n++;
}

Pilha * pilha_libera(Pilha* p){
  if(p==NULL){
     exit(1);
  }
  free(p);
}

float pilha_pega (Pilha* p){
 	float t;
 	if (pilha_vazia(p)) {
 		exit(1);
 	}
 	t = p->vet[p->n-1];
 	p->n--;
 	return t;
}

Pilha * pilha_vazia(Pilha* p){
	if(p==NULL){
           return 1;
	else 
	   return 0;
}
