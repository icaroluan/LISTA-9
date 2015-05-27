#include <stdio.h>
#include "calc.h"

int main(){
	float valor;
	float valor2;
	char sinal;

	Calc * calc;
	calc = calc_cria("%.2f");
	scanf("%f\n", &valor);
	pilha_inserir(calc,valor);
	scanf("%c\n", &sinal);
	scanf("%f\n", &valor2);
	pilha_inserir(calc,valor2);
	operando(calc,valor);	
	operador(calc,sinal);
	calc_libera(calc);

	return 0;
}
