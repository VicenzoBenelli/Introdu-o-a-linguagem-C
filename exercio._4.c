
#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil");
        
    int x; 

    printf("Digite a numeração da tabuada: ");
    scanf("%d", &x);

    for(int i = 1; i <= 10; i++ ){

        int mult = x*i;
        printf("\n%d X %d = %d", x, i, mult);
    }

    

    return 0;
}