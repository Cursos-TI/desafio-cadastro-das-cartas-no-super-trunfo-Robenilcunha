// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

#include <stdio.h>

int main() {
    char carta = 1;
    char estado[20] = "RJ";
    char código[20] = "RJ01";
    char cidade[20] = "Rio de Janeiro";
    int população = 6.211223;
    float área = 1200.0;
    float pib = 359600000000;
    int pontos_turísticos = 58;

    printf("carta: %d\n", carta);
    printf("estado: %s\n", estado);
    printf("código: %s\n", código);
    printf("cidade: %s\n", cidade);
    printf("população: %d\n", população);
    printf("area: %.2f km²\n", área);
    printf("pib: %.2f\n", pib);
    printf("pontos turísticos: %d\n", pontos_turísticos);

    printf("\n");

    char carta2 = 2;
    char estado2[20] = "RJ";
    char código2[20] = "RJ02";
    char cidade2[20] = "Niterói";
    int população2 = 481.749;
    float área2 = 133757;
    float pib2 = 66345730.0;
    int pontos_turísticos2 = 21;

    printf("carta: %d\n", carta2);
    printf("estado: %s\n", estado2);
    printf("código: %s\n", código2);
    printf("cidade: %s\n", cidade2);
    printf("população: %d\n", população2);
    printf("area: %.2f km²\n", área2);
    printf("pib: %.2f\n", pib2);
    printf("pontos turísticos: %d\n", pontos_turísticos2);


    return 0;
}


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
