#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 4. Escreva um programa que calcule o sal�rio semanal de um trabalhador.
As entradas s�o o n�mero de horas trabalhadas na semana e o valor da hora.
At� 40/h semana n�o se acrescenta nenhum adicional. Acima de 40h e at� 60h h� um b�nus de 50% para essas horas.
Acima de 60h h� um b�nus de 100% para essas horas. */

int main() {
	char NOME [50];
	float sal, hrextra, saltotal;
	int hr;
	printf("Digite o nome do funcionario: ");
	scanf("%s", &NOME);
	printf("Digite o salario: ");
	scanf("%f", &sal);
	printf("Digite o numero de horas trabalhadas: ");
	scanf("%d", &hr);	
	
	if(hr>40 && hr<=60){
		hrextra= sal*0.5;
	}
	if(hr>60){
		hrextra= sal*0.8;
	}
	saltotal=sal+hrextra; 
	printf("Seu salario e: %f", saltotal);
	
	return 0;
}

