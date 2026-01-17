#include <stdio.h>
 
int main() {      
    float pib_rj = 1.0;
    float area_rj = 1200.0;
    int populacao_rj = 6112;
    int numero_de_pontos_turisticos_rj = 100;
    char inicial_rj = 'R';
    char nome_rj[20] = "RiodeJaneiro";

    printf("nome_rj: %s\n", nome_rj);
    printf("inicial_rj: %c\n", inicial_rj);
    printf("PIB_rj: %.2f trilhoes\n", pib_rj);
    printf("área_rj: %.2f km²\n", area_rj);
    printf("número de pontos turísticos_rj: %d\n", numero_de_pontos_turisticos_rj);
    printf("população_rj: %d bilhoes\n", populacao_rj);



    float pib_sp = 1.0;
    float area_sp = 248.219;
    int populacao_sp = 45973194;
    int numero_de_pontos_turisticos_sp = 37;
    char inicial_sp = 'S';
    char nome_sp[20] = "SãoPaulo";

    printf("nome: %s\n", nome_sp);
    printf("inicial: %c\n", inicial_sp);
    printf("PIB: %.2f trilhoes\n", pib_sp);
    printf("área: %.2f km²\n", area_sp);
    printf("número de pontos turísticos: %d\n", numero_de_pontos_turisticos_sp);
    printf("população: %d\n", populacao_sp);
 
 
        return 0;
    }
