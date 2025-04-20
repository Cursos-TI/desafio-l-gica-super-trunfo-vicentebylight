#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    printf("Desafio Super Trunfo - Países\n");
    
    // Cadastro das Cartas:
    // Carta 1 
     char estado1[20] = "SC";
     char codigo1[20] = "A01";
     char cidade1[30] = "Garopaba";
     unsigned long int populacao1 = 100000;
     float area1 = 100000.0;
     float PIB1 = 150000.0;
     int pontos1 = 25;
     float densidade1;
     float PIBpercapita1;
     float superpoder1;
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
    
    printf ("Carta 1\n");
    printf("População: \n");
    scanf("%lu", &populacao1);
    
    printf("Área: \n");
    scanf("%f", &area1);
    
    printf("PIB: \n");
    scanf("%f", &PIB1);
    
    printf("Pontos turísticos: \n");
    scanf("%d", &pontos1);
    
    //calculando a densidade, PIB per capita e o Super Poder
densidade1 = (float)populacao1 / area1;
PIBpercapita1 = (float)PIB1 / populacao1;
superpoder1 = (float) populacao1 + area1 + PIB1 + pontos1 + PIBpercapita1 + (1.0 / densidade1);

//Imprimindo os dados da Carta 1
printf("\nDados da Carta 01:\n");

printf("Estado: SC\nCódigo:A01\nCidade:Garopaba\nPopulação: %lu\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %d\nDensidade Populacional: %.2f\nPIB per capita: %.2f\nSuper Poder: %.2f\n",
populacao1, area1, PIB1, pontos1, densidade1, PIBpercapita1, superpoder1);


// Carta 02 - Declarando variáveis
printf("\nCarta_02\n");

char estado2[20] = "SC";
char codigo2[20] = "A02";
char cidade2[30] = "Floripa";
unsigned long int populacao2 = 200000;
float area2 = 200000.0;
float PIB2 = 2200000.0;
int pontos2 = 35;
float densidade2, PIBpercapita2, Superpoder2;

//Imprimindo a pergunta e armazenando cada variável
printf("População: \n");
scanf("%lu", &populacao2);

printf("Área: \n");
scanf("%f", &area2);

printf("PIB: \n");
scanf("%f", &PIB2);

printf("Pontos turísticos: \n");
scanf("%d", &pontos2);

//calculando a densidade, PIB per capita e o Super Poder
densidade2 = (float)populacao2 / area2;
PIBpercapita2 = (float)PIB2 / populacao2;
Superpoder2 = (float) populacao2 + area2 + PIB2 + pontos2 + PIBpercapita2 + (1.0 / densidade2);

//Imprimindo os dados da Carta 2
printf("\nDados da Carta 02:\n");
printf("Estado: SC\nCódigo:A02\nCidade:Florianópolis\nPopulação: %lu\n Área: %.2f\n PIB: %.2f\nPontos turísticos: %d\nDensidade Populacional: %.2f\nPIB per capita: %.2f\nSuper Poder: %.2f\n",
populacao2, area2, PIB2, pontos2,densidade2, PIBpercapita2, Superpoder2);


    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    //Imprimindo o resultado de qual carta vence comparando cada atributo 
printf ("\nResultado comparações das cartas:\n");

printf ("População:\nCarta 1 - Garopaba:100000\nCarta 2 - Florianópolis:200000\n");

if (populacao1 > populacao2)
{  

printf ("Carta 1 venceu!\n");
}

else
{
printf ("Carta 2 venceu!\n");
}

printf ("Área:\nCarta 1 - Garopaba:100000\nCarta 2 - Florianópolis:200000\n");

if (area1 > area2)
{
   
printf ("Carta 1 venceu!\n");
}

else
{
printf ("Carta 2 venceu!\n");
}

printf ("PIB:\nCarta 1 - Garopaba:150000\nCarta 2 - Florianópolis:220000\n");

if (PIB1 > PIB2)
{  
printf ("Carta 1 venceu!\n");
}

else
{
printf ("Carta 2 venceu!\n");
}

printf ("Pontos Turísticos:\nCarta 1 - Garopaba:25\nCarta 2 - Florianópolis:35\n");

if (pontos1 > pontos2)
{
printf ("Carta 1 venceu!\n");
}

else
{
printf ("Carta 2 venceu!\n");
}

printf ("Densidade populacional:\nCarta 1 - Garopaba:1.00\nCarta 2 - Florianópolis:1.00\n");

if (densidade1 < densidade2)
{
printf ("Carta 1 venceu!\n");
}

else
{
printf ("Carta 2 venceu!\n");
}

printf ("PIB per capita:\nCarta 1 - Garopaba:1.50\nCarta 2 - Florianópolis:11.00\n");

if (PIBpercapita1 > PIBpercapita2)
{
printf ("Carta 1 venceu!\n");
}

else
{
printf ("Carta 2 venceu!\n");
}

printf ("Super Poder:\nCarta 1 - Garopaba:350027.50\nCarta 2 - Florianópolis:2600047.00\n");

if (superpoder1 > Superpoder2)
{
printf ("Carta 1 venceu!\n");
}

else
{
printf ("Carta 2 venceu!\n");
}

    return 0;
}
