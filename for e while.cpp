#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <unistd.h>

/* numa empresa, no departamento de mecânica quero saber
a)acima de 40 anos
b) entre 20 e 39 anos
 */
int main(){
	int contador, cont40, idade, cont20; 
	cont40=0;
	cont20=0;
	for (contador=1; contador <=8; contador++){
		printf("Digite sua idade: ");
		scanf("%d", &idade);
		sleep (2);
		system("cls");
			if(idade >=40)cont40=cont40+1;
			else
			if((idade>=20) && (idade<40)) cont20=cont20+1;
			} 
	printf("Acima de 40: %d \nEntre 20 e 39 anos: %d", cont40,cont20);
	getch();
	return 0;
}
