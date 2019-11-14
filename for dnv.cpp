#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <unistd.h>

/* Outro contador */
int main(){
	int contador, conth, contm, sexo;
	conth=0;
	contm=0; 
	for (contador=1; contador <=8; contador++){
		printf("Digite \n 1-Homem \n 2-Mulher: ");
		scanf("%d", &sexo);
		sleep (2);
		system("cls");
			if(sexo ==1)conth=conth+1;
			else
			if(sexo==2) contm=contm+1;
			} 
	printf("%d Homem %d  Mulher", conth,contm);
	getch();
	return 0;
}
