#include <stdio.h>
#include <stdlib.h>

int main(){
    /**< Exerc�cio 4 da 2�lista */

    int NOTA;
        
    printf("Digite o sua nota: ");
    scanf("%d", &NOTA);
	
	if(NOTA >= 9){
		printf("Altamente recomendado!");
	}
	if(NOTA >= 8 && NOTA<9){
		printf("Fortemente recomendado!");
	}
	if(NOTA >= 7 && NOTA<8){
		printf("Recomendado!");
	}
	if(NOTA < 7){
		printf("N�o recomendado!");
	}
	return 0;
}
