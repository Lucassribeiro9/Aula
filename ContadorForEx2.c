#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <unistd.h>

/* Estrutura contador*/

int main (){
	int cont, n1, n2;
	float MA, MG;
	int cont2 = 1; /* contador aluno*/
	
	for (cont=1; cont<=5; cont++){

		printf("Digite a primeira nota do aluno %d:\n", cont2); /* o "cont2" não está declarado no for, mas está dentro da estrutura de repetição*/
		scanf("%d", &n1);
		printf("Digite a segunda nota do aluno %d:\n", cont2);
		scanf("%d", &n2);
		
		MA = (n1+n2)/2;
		printf("A media do aluno %d e: %f", cont2,MA);
		sleep(2);
		system("cls");
		cont2++; /* cont++ = cont+1*/

		MG = MG+MA;
	}
	/* O cálculo da média é feito fora do for neste caso*/
	MG = MG/5;
	printf("A media total e: %f", MG);
	
	getch();
	return 0;
}
