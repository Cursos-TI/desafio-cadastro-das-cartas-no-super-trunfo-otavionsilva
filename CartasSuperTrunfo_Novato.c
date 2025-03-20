#include <stdio.h>

int main() {
    
    printf("***Super Trunfo!!***\n");

    char codigo_cidade[3], nome_cidade[50];
    int populacao, pontos_turisticos;
    float area, pib, densidade_populacional, pib_per_capita;

    char codigo_cidade1[3], nome_cidade1[50];
    int populacao1, pontos_turisticos1;
    float area1, pib1, densidade_populacional1, pib_per_capita1;


    // Cidade 1
    printf("Digite o nome da Cidade 1 (a inicial do estado): ");
    scanf("%s", nome_cidade);
    
    printf("Digite o codigo da cidade: ");
    scanf("%s", codigo_cidade);
    
    printf("Digite o a população da cidade %s: ",codigo_cidade);
    scanf("%d", &populacao);

    printf("Digite a quantidade de pontos turísticos dessa cidade: ");
    scanf("%d", &pontos_turisticos);

    printf("Digite a area da cidade: ");
    scanf("%f", &area);
    
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    // Cidade 2

    printf("\n\nDigite o nome da Cidade 2 (a inicial do estado): ");
    scanf("%s", nome_cidade1);
    
    printf("Digite o codigo da cidade: ");
    scanf("%s", codigo_cidade1);
    
    printf("Digite o a população da cidade %s: ",codigo_cidade1);
    scanf("%d", &populacao1);

    printf("Digite a quantidade de pontos turísticos dessa cidade: ");
    scanf("%d", &pontos_turisticos1);

    printf("Digite a area da cidade: ");
    scanf("%f", &area1);
    
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);
    
    // Calculo da densidade populacional e PIB Per Capita carta 0
    
    densidade_populacional = (float) populacao / area;
    pib_per_capita = pib / populacao;
    
        
    //  Calculo da densidade populacional e PIB Per Capita carta 1
    
    densidade_populacional1 = (float) populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    
    
    // Imprime as cartas e seus valores
    printf("\n\n\n***Cidade 1***");
    printf("Dados da Carta 1 cadastrada \n");
    printf("O Nome da cidade É: %s\n", nome_cidade);
    printf("O Código da cidade: %s\n", codigo_cidade);
    printf("A quantidade de pontos turísticos é: %d\n", pontos_turisticos);
    printf("A população da cidade é: %d\n", populacao);
    printf("A área da cidade é: %.2f\n", area);
    printf("O PIB da cidade é: %.2f\n", pib);
    printf("A densidade populacional é: %.2f\n", densidade_populacional);
    printf("O PIB Per Capita da cidade é: %.2f\n", pib_per_capita);

    printf("\n\n\n***Cidade 2***");
    printf("Dados da Carta 2 cadastrada\n");
    printf("O Nome da cidade É: %s\n", nome_cidade1);
    printf("O Código da cidade: %s\n", codigo_cidade1);
    printf("A quantidade de pontos turísticos é: %d\n", pontos_turisticos1);
    printf("A população da cidade é: %d\n", populacao1);
    printf("A área da cidade é: %.2f\n", area1);
    printf("O PIB da cidade é: %.2f\n", pib1);
    printf("A densidade populacional é: %.2f\n", densidade_populacional1);
    printf("O PIB Per Capita da cidade é: %.2f\n", pib_per_capita1); 
    
   
    return 0;
}
