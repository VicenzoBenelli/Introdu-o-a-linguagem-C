# include <stdio.h>
# include <locale.h>

int valor_global;

void Modficar_global(){
    printf("Digite a numeração da variavel: ");
    scanf("%d", &valor_global);
}

int main(){
        
    setlocale(LC_ALL,"Portuguese_Brazil");

    Modficar_global();

    printf("\nValor da variavel Global: %d",valor_global);


  return 0; 
}