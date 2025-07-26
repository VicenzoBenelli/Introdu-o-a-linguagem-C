#include <stdio.h>
#include <locale.h>

int x;
int y;

void incremento_ao_quadrado(){

    printf("Digite o Valor de X: ");
    scanf("%d", &x);

    printf("Digite o Valor de Y: ");
    scanf("%d", &y);

     x = x*x;
     y = y*y;
}

void Print_dos_valores(){
   

    printf("\nValor de X: %d", x);
    printf("\nValor de Y: %d", y);
}

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    incremento_ao_quadrado();
    Print_dos_valores();
   
    return 0;
}
