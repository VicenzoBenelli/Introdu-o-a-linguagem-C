# include <stdio.h>
# include <locale.h>
int ImparOupar(int x);

int main(){
        
    setlocale(LC_ALL,"Portuguese_Brazil");

    int numero; 

    printf("Digiter um numero: ");
    scanf("%d", &numero);

    char resposta = ImparOupar(numero);

    printf("%c", resposta);

  return 0; 
}

int ImparOupar(int x){

    if (x % 2 == 0){
        printf("\nO Numero é par");
        return 0;
    }
    else{
        printf("\nO numero é impar");
        return 1;
    }
}