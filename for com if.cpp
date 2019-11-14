#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <unistd.h>

/* Numa sala de 10 alunos, quero saber
a)Quantos possuem carro
b)Quantos não possuem */
int main(){
	int contador, contC, contS, carro;
	contC=0;
	contS=0; 
	for (contador=1; contador <=8; contador++){
		printf("Digite \n 1-Se possui carro \n 2-Se não possui: ");
		scanf("%d", &carro);
		sleep (2);
		system("cls");
			if(carro ==1)contC=contC+1;
			else
			if(carro==2) contS=contS+1;
			} 
	printf("%d tem carro \n%d  nao possuem", contC,contS);
	getch();
	return 0;
}
