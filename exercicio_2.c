#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil");

    char letra;

    printf("Digite um a letra: ");
    scanf("%c", &letra);

    printf("A numeração de %c na tabela ASCII é %d ", letra, letra);


    return 0;
}