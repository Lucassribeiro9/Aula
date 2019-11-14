#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <unistd.h>

/* Estrutura contador
1. Entrar com 10 números (usando o for) e:
a)Calcular a soma
b)Calcular a média aritmética
*/

int main (){
	int soma, contador;
	float media, numero;
	
	for (contador=1; contador<=10; contador++){
		printf("Digite um numero: ");
		scanf("%f", &numero);
		soma = soma + numero;
	}
	/* O cálculo da média é feito fora do for neste caso*/
	media = soma/10;
	printf("A media total e: %2.f", media);
	
	getch();
	return 0;
}
