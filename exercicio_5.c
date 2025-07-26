
#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil");
        
    float base, altura;
    
    printf("\nDigite a base do Tri?ngulo: ");
    scanf("%f", &base);

    printf("\nDigite a altura do Tri?ngulo: ");
    scanf("%f", &altura);

    float area = (base*altura)/2;
     
    printf("\nA ?rea do Tri?ngulo ?: %.1f", area); 

    return 0;
}