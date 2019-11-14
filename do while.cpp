#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <unistd.h>

/* Digite n números e calcule:
a)somatória
b)média aritmética */
int main(){
	float  num1, num2, MA, soma;
	int cont;
	
	do {
		printf("Digite o primeiro numero: \n");
		scanf("%f", &num1);
		printf("Digite o segundo numero: \n");
		scanf("%f", &num2);
		MA=(num1+num2)/2;
		printf("A media e: %f \n", MA);
		printf("Digite \n 1-Continuar \n 2-Sair: ");
		scanf("%d", &cont);
	}
	while (cont==1);
	getch();
	return 0;
}
