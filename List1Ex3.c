#include <stdio.h>
#include <stdlib.h>

int main(){
    /**< Exerc�cio 3 da 1�lista */
    char NOME;
    int IDADE, DNASC, NASCPAI, NASCMAE;
    printf("Digite o seu nome: ");
    scanf("%s", &NOME);
    printf("Digite a sua idade: ");
    scanf("%d", &IDADE);
    DNASC = 2019-IDADE;
    NASCPAI = DNASC-32;
    NASCMAE = NASCPAI-5;
    printf("%s, voce tem %d anos e nasceu em %d \n", NOME, IDADE, DNASC);
    printf("Seu pai nasceu em %d \n", NASCPAI);
    printf("Sua mae nasceu em %d \n", NASCMAE);
    return 0;
}

