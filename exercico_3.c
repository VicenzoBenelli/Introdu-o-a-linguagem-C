#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil");
    
   int x, y;

   printf("\nDigite o valor do primeiro numero: ");
   scanf("%d", &x);

   printf("\nDigite o valor do segundo numero: ");
   scanf("%d", &y);

   printf("\nSoma: %d + %d = %d", x, y, x+y);
   printf("\nSoma: %d - %d = %d", x, y, x-y);
   printf("\nSoma: %d X %d = %d", x, y, x*y);
   printf("\nSoma: %d / %d = %d", x, y, x/y);
    

    return 0;
}