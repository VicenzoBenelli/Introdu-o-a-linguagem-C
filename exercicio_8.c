#include <stdio.h>
#include <locale.h>
int SomaNumeros(int x, int y);


int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int num1, num2;

    printf("Digite o Primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o Segundo numero número: ");
    scanf("%d", &num2);

    
  int resposta = SomaNumeros(num1, num2);

  printf("Soma: %d", resposta);


 return 0;
}

int SomaNumeros(int x, int y){

    int soma = x + y;

    return soma;

}