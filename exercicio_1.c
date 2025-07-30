#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    int x = 10;
    float y = 75.3;
    char saudacao[] = "Olá";
    double pi = 3.14159;
   
    printf("\nValor de X = %d\n", x);
    printf("Valor de y = %.2f\n", y);
    printf("Mensagem de Saudação:  %s\n", saudacao);
    printf("Valor de pi = %lf\n", pi);

    return 0;
}
