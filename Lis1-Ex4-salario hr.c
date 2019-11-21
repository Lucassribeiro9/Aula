#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char NOME [50];
	float sl, sb, df, INSS, F;
	printf("Digite o nome do funcionario: ");
	scanf("%s", &NOME);
	printf("Digite o salario bruto: ");
	scanf("%f", &sb);
	printf("Digite o numero de faltas: ");
	scanf("%f", &F);	
	df = F*(sb/30);
	INSS = sb*0.1;
	sl = sb-df-INSS;
	printf("Seu salario e: %f", sl);
	
	return 0;
}
