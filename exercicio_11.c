# include <stdio.h>
# include <locale.h>

void Incremento(){
   static int x = 2;
   static int i = 0;
  
   i++;
   x++;
   
   printf("\nValor da variavel Estática na Chamada %d: %d ", i, x);

}

int main(){
        
    setlocale(LC_ALL,"Portuguese_Brazil");

    Incremento();
    Incremento();
    Incremento();
    Incremento();
    Incremento();


  return 0; 
}