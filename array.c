#include <stdio.h>
    int main (){

        char *nome[] = {"Gabriel", "Andre", "Alexandra", "Gustavo", "Rebeca"}; //arrray de nomes

            for (int i = 0; i < 5; i++) { //inicializa o for e tamanho do array

                printf("%s \n", nome[i]); // imprime os nomes do array
            }

        return 0;
    }