#include <stdio.h>

int main() {
    char estado[30], estado2[30], carta[30], carta2[30],cidade[30], cidade2[30];
    int população, população2, pontost, pontost2;
    float area, PIB, area2, PIB2;


    // Parte de interação com usuaário, onde ele vai digitar os dados da carta.
    printf("DIGITE O ESTADO: \n");
    scanf("%s", estado);
    
    printf("DIGITE O CÓDIGO DA CARTA: \n");
    scanf("%s", &carta);
    
    printf("DIGITE A CIDADE: \n");
    scanf("%s", &cidade);
    
    printf("DIGITE A POPULAÇÃO: \n");
    scanf("%d", &população);

    printf("DIGITE O NÚMERO DE PONTOS TURISTICOS DA CIDADE:\n");
    scanf("%d", &pontost);

    printf("DIGITE A ÁREA DA CIDADE EM KM²: \n");
    scanf("%f", &area);

    printf("DIGITE O PIB DA CIDADE: \n");
    scanf("%f", &PIB);

   
    printf("\nCARTA 1: \nESTADO: %s\nCÓDIGO DA CARTA: %s\nCIDADE: %s\nPOPULAÇÃO: %d\nPONTOS TURISTICOS: %d\nAREA: %f\nPIB: %f\n \n", estado, carta, cidade, população, pontost, area, PIB);

     printf("DIGITE O ESTADO: \n");
    scanf("%s", estado2);

    printf("DIGITE O CÓDIGO DA CARTA: \n");
    scanf("%s", &carta2);

    printf("DIGITE A CIDADE: \n");
    scanf("%s", &cidade2);

    printf("DIGITE A POPULÇÃO: \n");
    scanf("%d", &população2);

    printf("DIGITE O NÚMERO DE PONTOS TURISTICOS DA CIDADE: \n");
    scanf("%d", &pontost2);

    printf("DIGITE A ÁREA DA CIDADE KM²: \n");
    scanf("%f", &area2);

    printf("DIGITE O PIB DA CIDADE: \n");
    scanf ("%f", &PIB2);

    printf("\nCARTA 2: \nESTADO: %s\nCÓDIGO DA CARTA: %s\nCIDADE: %s\nPOPULAÇÃO: %d\nPONTOS TURISTICOS: %d\nAREA: %f\nPIB: %f\n ", estado2, carta2, cidade2, população2, pontost2, area2, PIB2);
    
    
    return 0;  

} 
