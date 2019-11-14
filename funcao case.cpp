#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int multiplica (int N1, int N2)
{
	int resultado;
	resultado = N1*N2;
	return (resultado);
}

int soma (int N1, int N2)
{
	int resultado;
	resultado = N1+N2;
	return (resultado);
}

int subtracao (int N1, int N2)
{
	int resultado;
	resultado = N1-N2;
	return (resultado);
}

int main(){
	int V1, V2, contador, X, opcao;
			
	printf("Digite um valor: ");
	scanf("%d", &V1);
	printf("Digite outro valor: ");
	scanf("%d", &V2);
	printf("Escolha uma operacao:\n 1- Multiplicacao\n 2- Soma\n 3- Subtracao: ");
	scanf("%d", &opcao);
	
	switch (opcao){
		case 1: X = multiplica(V1, V2);
		break;
		
		case 2: X = soma(V1, V2);
		break;
		
		case 3: X = subtracao(V1, V2);
		break;
	}
   	
	printf("Resultado: %d", X);
	return 0;
}
