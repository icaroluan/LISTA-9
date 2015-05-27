#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pilha.h>

struct{
 char f[21];
 Pilha *p;
};

typedef struct cal Calc;
Calc *cria_calc(char * f);
void operando(Calc * c, float v);
void operador(Calc * c, char op);
void libera_calc(Calc * c);





