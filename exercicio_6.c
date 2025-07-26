# include <stdio.h>
# include <locale.h>

int main(){

    setlocale(LC_ALL,"Portuguese_Brazil");


    int x, y ,z;

    printf("Digite o primeiro valor: ");
    scanf("%d", &x);

    printf("Digite o primeiro valor: ");
    scanf("%d", &y);

    printf("Digite o primeiro valor: ");
    scanf("%d", &z);

    float media = (x+y+z)/3;

    printf("A média dos 3 valores são: %.1f",media);

  return 0; 
}