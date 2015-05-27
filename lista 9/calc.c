#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pilha.h>
#include "calc.h"


Calc * cria_calc(char * formato){
   Calc * c= (Calc *)malloc(siezof(Calc));
   strcpy(c->f.formato);
   c->p=pilha_cria();
   return c;
}

void operando(Calc * c, float v){
	pilha_inserir(c->p,v);
	print(c->f,Valor); 
}

void operador(Calc * c, char op){
	float teste1, teste2, v;
	v=0;
        if(pilha_vazia(n->p)){ 
            teste1=0.0;}
	else
	    teste1=pilha_pega(c->p);
	if(pilha_vazia(n->p)){ 
            teste2=0.0;}
	else
	    teste2=pilha_pega(c->p);
	if(op=='+'){
           v=teste1+teste2;
        }
	else if(op=='-'){
           v=teste1-teste2;
        }
	else if(op=='/'){
           v=teste1/teste2;
        }
	else if(op=='*'){
	   v=teste1*teste2;	           
        }
	pilha_inserir(c->p,v);
	print(c->f,v);
 }

void libera_calc(Calc * c){
        pilha_libera(c->p);
	free(c);	
}
     


