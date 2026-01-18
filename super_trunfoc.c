#include <stdio.h>

// Exercício Super Trunfo

int main() {

    int populacao1, populacao2;
    int pontoturistico1, pontoturistico2;
    float pib1, pib2, area1, area2;
    float densidade1, densidade2;
    float percapta1, percapta2;

    char estado1[3], estado2[3];
    char codigodacarta1[4], codigodacarta2[4];
    char nomecidade1[30], nomecidade2[30];

    // ===== CARTA 01 =====
    printf(">>>>> ** Digite a carta 01 ** <<<<<\n\n");

    printf("Digite o estado da Carta 01:\n");
    scanf("%s", estado1);

    printf("Digite o codigo da Carta 01:\n");
    scanf("%s", codigodacarta1);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", nomecidade1);

    printf("Qual a populacao do estado:\n");
    scanf("%d", &populacao1);

    printf("Digite a area do estado:\n");
    scanf("%f", &area1);

    printf("Digite o PIB do estado:\n");
    scanf("%f", &pib1);

    printf("Quantos pontos turisticos existem:\n");
    scanf("%d", &pontoturistico1);

    // cálculo  da densidade
    densidade1 = populacao1 / area1;
    // cálculo renda percapta
    percapta1 = pib1 / populacao1;

    // ===== EXIBIÇÃO CARTA 01 =====
    printf("\n--- Dados da Carta 01 ---\n");
    printf("ESTADO: %s\n", estado1);
    printf("CODIGO: %s\n", codigodacarta1);
    printf("CIDADE: %s\n", nomecidade1);
    printf("POPULACAO: %d\n", populacao1);
    printf("AREA: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("PONTOS TURISTICOS: %d\n", pontoturistico1);
    printf("DENSIDADE POPULACIONAL: %.2f hab/km²\n", densidade1);
	printf("RENDA PERCAPTA: %.2f REAIS\n", percapta1);

    printf("\n-----------------------------\n\n");

    // ===== CARTA 02 =====
    printf(">>>>> ** Digite a carta 02 ** <<<<<\n\n");

    printf("Digite o estado da Carta 02:\n");
    scanf("%s", estado2);

    printf("Digite o codigo da Carta 02:\n");
    scanf("%s", codigodacarta2);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", nomecidade2);

    printf("Qual a populacao do estado:\n");
    scanf("%d", &populacao2);

    printf("Digite a area do estado:\n");
    scanf("%f", &area2);

    printf("Digite o PIB do estado:\n");
    scanf("%f", &pib2);

    printf("Quantos pontos turisticos existem:\n");
    scanf("%d", &pontoturistico2);

    // cálculo correto da densidade
    densidade2 = populacao2 / area2;
	// cálculo renda percapta
    percapta2 = pib2 / populacao2;
    
	
	// ===== EXIBIÇÃO CARTA 02 =====
    
	printf("\n--- Dados da Carta 02 ---\n");
    printf("ESTADO: %s\n", estado2);
    printf("CODIGO: %s\n", codigodacarta2);
    printf("CIDADE: %s\n", nomecidade2);
    printf("POPULACAO: %d\n", populacao2);
    printf("AREA: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("PONTOS TURISTICOS: %d\n", pontoturistico2);
    printf("DENSIDADE POPULACIONAL: %.2f hab/km²\n", densidade2);
	printf("RENDA PERCAPTA: %.2f REAIS\n", percapta2);
    return 0;
}

