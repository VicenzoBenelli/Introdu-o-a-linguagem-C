# include <stdio.h>
# include <locale.h>

int main(){
        
    setlocale(LC_ALL,"Portuguese_Brazil");

    int x, incremento;
    char letra;

    printf("\nDigite o valor numero: ");
    scanf("%d", &x);

    printf("Digite o valor Caractere: ");
    scanf(" %c", &letra);

    printf("Digite o valor do incremento: ");
    scanf("%d", &incremento);

    int pos_incremento = incremento + x;
    char letra_pos_incremento = incremento + letra;

    printf("\nValor do Numero + o incremento: %d", pos_incremento);
    printf("\nIdentifica��o da Letra p�s incremento: %c", letra_pos_incremento);

  return 0; 
}