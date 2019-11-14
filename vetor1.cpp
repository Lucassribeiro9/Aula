#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<unistid.lib>
/* vetor guarda o número em determinada posição*/

int main(){
	int contador;
	float N1[5], N2[5], M[5], S, MG;

	for (contador=0; contador<=4; contador++){
		printf("Nota 1: ");
		scanf("%f", &N1[contador]);
		printf("Nota 2: ");
		scanf("%f", &N2[contador]);
		
		M[contador] = (N1[contador]+N2[contador])/2;
		S = S+M[contador];
	}
	MG = S/5;
	printf("Media geral: %f", MG);
	
	getch();
	return 0;
}


