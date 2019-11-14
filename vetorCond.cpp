#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
/* vetor guarda o número em determinada posição*/

float MediaGeral(float N1, float N2){
	float MG;
	MG = N1/5;
	return(MG); 
}

int main(){
	int contador, CM, CH, continua, sexo;
	float N1[5], N2[5], M[5], S, MG;

	do{
		printf("Digite a primeira nota: ");
		scanf("%f", &N1);
		printf("Digite a segunda nota: ");
		scanf("%f", &N2);
		printf("Voce e:\n 1- Mulher\n 2- Homem: ");
		scanf("%f", &N1);
	
	
		if ((N1>10)||(N1<0)||(N2>10)||(N2<0)){
			while ((N1>10)||(N1<0)||(N2>10)||(N2<0))
			printf("Digite uma nota: ");
			scanf("%d",&N1);	
		}
	
		for (contador=0; contador<=4; contador++){
		printf("Nota 1: ");
		scanf("%f", &N1[contador]);
		printf("Nota 2: ");
		scanf("%f", &N2[contador]);
		
		M[contador] = (N1[contador]+N2[contador])/2;
		S = S+M[contador];
	}
	/* Fim da repetição*/
    }
	MG = S/5;
	printf("Media geral: %f", MG);
	
	getch();
	return 0;
}


