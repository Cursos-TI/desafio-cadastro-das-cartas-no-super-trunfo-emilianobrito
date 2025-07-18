// Super Trunfo em C - Países
// Tema 1 - Cadastro das Cartas
// Desafio: nível mestre

#include <stdio.h>

int main()
{
    // Declaração das variáveis da carta 1
    char estado_carta1; 
    char codigo_carta1[4];
    char cidade_carta1[50];
    unsigned long int populacao_carta1;
    float area_carta1;
    float pib_carta1;
    int pontos_turisticos_carta1;
    float densidade_populacional_carta1;
    float pib_per_capita_carta1;
    float super_poder_carta1;

    // Declaração das variáveis da carta 2
    char estado_carta2;
    char codigo_carta2[4];
    char cidade_carta2[50];
    unsigned long int populacao_carta2;
    float area_carta2;
    float pib_carta2;
    int pontos_turisticos_carta2;
    float densidade_populacional_carta2;
    float pib_per_capita_carta2;
    float super_poder_carta2;

    // Declaração das variáveis dos resultados
    int resultado_populacao;
    int resultado_area;
    int resultado_pib;
    int resultado_pontos_turisticos;
    int resultado_densidade_populacional;
    int resultado_pib_per_capita;
    int resultado_super_poder;

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
    scanf("%lu", &populacao_carta1); //O especificador de formato %lu é usado para exibir valores unsigned long int

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
    scanf("%lu", &populacao_carta2); //O especificador de formato %lu é usado para exibir valores unsigned long int

    printf("Digite a área em Km² da Carta 2: ");
    scanf("%f", &area_carta2);

    printf("Digite o PIB da Carta 2: ");
    scanf("%f", &pib_carta2);

    printf("Digite o número de pontos turísticos da Carta 2: ");
    scanf("%d", &pontos_turisticos_carta2);

    //Calcula a Densidade Populacional: Divide a população da cidade pela sua área.
    densidade_populacional_carta1 = (float) populacao_carta1/area_carta1;
    densidade_populacional_carta2 = (float) populacao_carta2/area_carta2;

    //Calcula o PIB per Capita: Divide o PIB da cidade pela sua população.
    pib_per_capita_carta1 = (float) pib_carta1*1000000000/populacao_carta1;
    pib_per_capita_carta2 = (float) pib_carta2*1000000000/populacao_carta2;

    //Calcula o Super Poder da Carta 1 
    super_poder_carta1 = (float)populacao_carta1+area_carta1+pib_carta1+
                         (float)pontos_turisticos_carta1+(1/densidade_populacional_carta1)+pib_per_capita_carta1;  
                         
    //Calcula o Super Poder da Carta 2 
    super_poder_carta2 = (float)populacao_carta2+area_carta2+pib_carta2+
                         (float)pontos_turisticos_carta2+(1/densidade_populacional_carta2)+pib_per_capita_carta2; 

    //Resultados das comparações
    resultado_populacao = populacao_carta1 > populacao_carta2;
    resultado_area = area_carta1 > area_carta2;
    resultado_pib = pib_carta1 > pib_carta2;
    resultado_pontos_turisticos = pontos_turisticos_carta1 > pontos_turisticos_carta2;
    resultado_densidade_populacional = densidade_populacional_carta1 < densidade_populacional_carta2;
    resultado_pib_per_capita = pib_per_capita_carta1 > pib_per_capita_carta2;
    resultado_super_poder = super_poder_carta1 > super_poder_carta2;

    // Impressão da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado_carta1);
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da cidade: %s\n", cidade_carta1);
    printf("População: %d\n", populacao_carta1);
    printf("Área: %.2f Km²\n", area_carta1);
    printf("PIB: %.2f bilhões de reais\n", pib_carta1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos_carta1);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade_populacional_carta1); //8.102,63
    printf("PIB per Capita: %.2f reais\n", pib_per_capita_carta1); //56.736,71
    printf("Super poder da carta 1: %.2f\n", super_poder_carta1);

    // Impressão da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado_carta2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da cidade: %s\n", cidade_carta2);
    printf("População: %d\n", populacao_carta2);
    printf("Área: %.2f Km²\n", area_carta2);
    printf("PIB: %.2f bilhões de reais\n", pib_carta2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos_carta2);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade_populacional_carta2); //5.622,16
    printf("PIB per Capita: %.2f reais\n", pib_per_capita_carta2); //44.531,71
    printf("Super poder da carta 2: %.2f\n", super_poder_carta2);

    //Impressão dos resultados
    printf("\nComparação de Cartas:\n");
    printf("População: %d\n", resultado_populacao);
    printf("Área: %d\n", resultado_area);
    printf("PIB: %d\n", resultado_pib);
    printf("Pontos Turísticos: %d\n", resultado_pontos_turisticos);
    printf("Densidade Populacional: %d\n", resultado_densidade_populacional);
    printf("PIB per Capita: %d\n", resultado_pib_per_capita);
    printf("Super Poder: %d\n", resultado_super_poder);

    return 0;
}