#include <stdio.h>
int main (){

    int index;

    char * nomesAlunos [3][3] = {
        {"Aluno 1", "Pt: 30", "Mat: 90"},
        {"Aluno 2", "Pt: 60", "Mat: 60"},
        {"Aluno 3", "Pt: 90", "Mat: 30"}

    };

    printf("Digite o numero do aluno que queira ver a nota: \n ");
    printf("Para o aluno 1, digite o 0 \n");
    printf("Para o aluno 2, digite o 1 \n");
    printf("Para o aluno 3, digite o 2 \n");

    scanf("%d", &index);

    printf("A nota do %s são: %s e %s \n", nomesAlunos[index][0], nomesAlunos[index][1], nomesAlunos[index][2]);

    return 0;
}