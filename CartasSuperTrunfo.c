#include <stdio.h> // printf(), scanf()
#include<string.h>

// uma linha

/* sdf

sdfsdfjh
sdjsf
skjdffd

*/

// void, int ... -> tipo de retorno    main() -> nome da função 
int main() { // PRINCIPAL = MAIN

    char estado_carta1;
    char codigo_carta1[4];
    codigo_carta1[3] = '\0';
    char nome_cidade_carta1[30];
    int populacao_carta1;
    float area_carta1;
    float pib_carta1;
    int pontos_turisticos_carta1;

    char estado_carta2;
    char codigo_carta2[4];
    codigo_carta2[3] = '\0';
    char nome_cidade_carta2[30];
    int populacao_carta2;
    float area_carta2;
    float pib_carta2;
    int pontos_turisticos_carta2;

    // carta 1

    printf("informe o estado da carta 1:\n");
    fflush(stdin);
    scanf("%c", &estado_carta1);
    codigo_carta1[0] = estado_carta1;

    printf("informe o código da carta 1:\n");
    getchar();
    fflush(stdin);
    scanf("%s", &codigo_carta1[1]);

    printf("informe o nome da cidade da carta 1:\n");
    getchar();
    fflush(stdin);
    fgets(nome_cidade_carta1, 30, stdin);

    printf("informe a populacao da carta 1:\n");
    fflush(stdin);
    scanf("%d", &populacao_carta1);

    printf("informe a area da carta 1:\n");
    fflush(stdin);
    scanf("%f",&area_carta1);

    printf("informe o pib da carta 1:\n");
    fflush(stdin);
    scanf("%f",&pib_carta1);

    printf("informe as quantidades de pontos turisticos da carta 1:\n");
    fflush(stdin);
    scanf("%d",&pontos_turisticos_carta1);

    // carta 2printf

    printf("informe o estado da carta 2:\n");
    getchar();
    fflush(stdin);;
    scanf("%c", &estado_carta2);
    codigo_carta2[0] = estado_carta2;

    printf("informe o código da carta 2:\n");
    getchar();
    fflush(stdin);
    scanf("%s", &codigo_carta2[1]);

    printf("informe o nome da cidade da carta 2:\n");
    getchar();
    fflush(stdin);
    fgets(nome_cidade_carta2, 30, stdin);

    printf("informe a populacao da carta 2:\n");
    fflush(stdin);
    scanf("%d", &populacao_carta2);

    printf("informe a area da carta 2:\n");
    fflush(stdin);
    scanf("%f",&area_carta2);

    printf("informe o pib da carta 2:\n");
    fflush(stdin);
    scanf("%f",&pib_carta2);

    printf("informe as quantidades de pontos turisticos da carta 2:\n");
    fflush(stdin);;
    scanf("%d",&pontos_turisticos_carta2);

    // exibe as cartas
    
    printf("\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado_carta1);
    printf("Codigo: %s\n", codigo_carta1);
    printf("nome da cidade: %s", nome_cidade_carta1);
    printf("população: %d\n", populacao_carta1);
    printf("area: %f\n", area_carta1);
    printf("pib: %f\n",pib_carta1);
    printf("numero de pontos turisticos:%d\n",pontos_turisticos_carta1);
    printf("\n\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado_carta2);
    printf("Codigo: %s\n", codigo_carta2);
    printf("nome da cidade: %s", nome_cidade_carta2);
    printf("população: %d\n", populacao_carta2);
    printf("area: %f\n", area_carta2);
    printf("pib: %f\n",pib_carta2);
    printf("numero de pontos turisticos:%d\n",pontos_turisticos_carta2);
    printf("\n\n");

    return 0;


}






