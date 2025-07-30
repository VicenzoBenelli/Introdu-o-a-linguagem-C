
#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil");
        
    float base, altura;
    
    printf("\nDigite a base do Triângulo: ");
    scanf("%f", &base);

    printf("\nDigite a altura do Triângulo: ");
    scanf("%f", &altura);

    float area = (base*altura)/2;
     
    printf("\nA Àrea do Triângulo é: %.1f", area); 

    return 0;
}