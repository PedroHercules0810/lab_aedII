#include <stdio.h>

void print_Ascii(){
    int inicio = 0;
    int fim = 127;

    for (int valor_ascii = inicio; valor_ascii <= fim; valor_ascii++)
    {
        printf(" %c ",valor_ascii);

        if ((valor_ascii + 1) % 10 == 0)
        {
            printf("\n");
        }
           
    }
    
}

int main(){

    print_Ascii();

    return 0;
}