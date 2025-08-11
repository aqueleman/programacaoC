int main() {
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10];
    int i, j;

    // Inicialização do tabuleiro com zeros
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }
        //Colocar um navio na horizontal de tamnho 3
            for (int k = 0; k < 3; k++){
                tabuleiro [3][2 + k] = 3;
            }
            // colocar um navio na vertical de tamanho 3
            for (int x = 0; x < 3; x++){
                tabuleiro [7 + x][5] = 3;
            }
       // Imprime cabeçalho com letras
        printf("  ");
            for (j=0; j < 10; j++) {
                printf(" %c ", linha[j]);
            }
        printf("\n");

    // Impressão do tabuleiro
    for (i = 0; i < 10; i++) {
        printf("%d", i + 1);
        for (j = 0; j < 10; j++) {
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}