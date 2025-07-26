
#include <stdio.h>
#include <locale.h>

void Estatica_var(){
    static int x = 1;
    x++;
    printf("\nComportamento da Váriavel Estática pós Incremento: %d", x);
}

void Automatica_var(){
    int y = 1;
    y++;
    printf("\nComportamento da Váriavel Automática pós Incremento: %d", y);
}


int main(){

    setlocale(LC_ALL, "Portuguese_Brazil");
        
    Estatica_var();
    Estatica_var();
    Estatica_var();

    printf("\n\n---------------------------------------------------------------------------\n");
    
    Automatica_var();
    Automatica_var();
    Automatica_var();


    return 0;
}