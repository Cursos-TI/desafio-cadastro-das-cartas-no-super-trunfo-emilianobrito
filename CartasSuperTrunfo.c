// Super Trunfo em C - Países
// Tema 1 - Cadastro das Cartas
// Desafio: nível novato

#include <stdio.h>

int main()
{
    // Declaração das variáveis da carta 1
    char estado_carta1; 
    char codigo_carta1[4];
    char cidade_carta1[50];
    int populacao_carta1;
    float area_carta1;
    float pib_carta1;
    int pontos_turisticos_carta1;

    // Declaração das variáveis da carta 2
    char estado_carta2;
    char codigo_carta2[4];
    char cidade_carta2[50];
    int populacao_carta2;
    float area_carta2;
    float pib_carta2;
    int pontos_turisticos_carta2;

    // leitura de dados da Carta 1
    printf("Digite o estado da Carta 1 (escolha uma letra de 'A' a 'H' para representa-lo): ");
    scanf("%c", &estado_carta1);

    printf("Digite o código da Carta 1 (A letra do estado seguida de um número de 01 a 04): ");
    scanf("%s", codigo_carta1);
    getchar(); // remove o último caractere lido (\n) do buffer e evita o erro com o fgets

    printf("Digite a cidade da Carta 1: ");
    fgets(cidade_carta1, 50, stdin); // A função fgets é usada para ler strings com espaços
    cidade_carta1[strcspn(cidade_carta1, "\n")] = 0; /* remove o caractere de nova linha (\n) que fgets pode incluir na variavel de tipo string 
    evitando erro de impressão de nova linha */

    printf("Digite o numero da populacão da Carta 1: ");
    scanf("%d", &populacao_carta1);

    printf("Digite a área em Km² da Carta 1: ");
    scanf("%f", &area_carta1);

    printf("Digite o PIB da Carta 1: ");
    scanf("%f", &pib_carta1);

    printf("Digite o número de pontos turísticos da Carta 1: ");
    scanf("%d", &pontos_turisticos_carta1);
    getchar(); // remove o último caractere lido (\n)

    // leitura de dados da Carta 2
    printf("\nDigite o estado da Carta 2 (escolha uma letra de 'A' a 'H' para representa-lo): ");
    scanf("%c", &estado_carta2);

    printf("Digite o código da Carta 2 (A letra do estado seguida de um número de 01 a 04): ");
    scanf("%s", codigo_carta2);
    getchar(); // remove o último caractere lido (\n) e evita o erro com o fgets

    printf("Digite o nome da cidade da Carta 2: ");
    fgets(cidade_carta2, 50, stdin); // A função fgets é usada para ler strings com espaços
    cidade_carta2[strcspn(cidade_carta2, "\n")] = 0;
    
    printf("Digite o numero da populacão da Carta 2: ");
    scanf("%d", &populacao_carta2);

    printf("Digite a área em Km² da Carta 2: ");
    scanf("%f", &area_carta2);

    printf("Digite o PIB da Carta 2: ");
    scanf("%f", &pib_carta2);

    printf("Digite o número de pontos turísticos da Carta 2: ");
    scanf("%d", &pontos_turisticos_carta2);

    // Impressão da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado_carta1);
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da cidade: %s\n", cidade_carta1);
    printf("População: %d\n", populacao_carta1);
    printf("Área: %.2f Km²\n", area_carta1);
    printf("PIB: %.2f bilhões de reais\n", pib_carta1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos_carta1);

    // Impressão da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado_carta2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da cidade: %s\n", cidade_carta2);
    printf("População: %d\n", populacao_carta2);
    printf("Área: %.2f Km²\n", area_carta2);
    printf("PIB: %.2f bilhões de reais\n", pib_carta2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos_carta2);

    return 0;
}