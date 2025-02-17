#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado[50] = "São Paulo";
    char carta[4] = "A00";
    char cidade[50] = "Itapevi";
    int populacao = 50000;
    float area = 555555;
    double pib = 1516532;
    int num_pontos_tur = 6;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Esse é o jogo Super Trunfo com o tema países!! \nAqui você irá registrar as cartas das Cidades, preenchendo as informações pedidas abaixo: \n");
    
    printf("Digite o Estado onde fica a cidade: \n");
    scanf(" %[^\n]", &estado);
    
    printf("Digite o código da carta da cidade: (ex: A01 sendo A: Estado A ou seja, primeiro estado que esta sendo registrado ou B se for o segundo, e assim por diante \n01 sendo 01: Cidade 01 ou seja, primeira cidade que esta sendo registrada no estado A ou B e assim por diante \nCADA ESTADO PERMITE SEREM REGISTRADAS APENAS 4 CIDADES ou seja A01, A02, A03, A04 são válidas e A05 inválida!) \n");
    scanf("%s", &carta);
    
    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", &cidade);
    
    printf("Digite a população da cidade: (Apenas números, ex: 150500200) \n");
    scanf("%d", &populacao);
    
    printf("Digite a área da cidade: (Apenas números, ex: 2500200) \n");
    scanf("%f", &area);
    
    printf("Digite o PIB da cidade: (Apenas números, ex: 350500200) \n");
    scanf("%lf", &pib);
    
    printf("Digite o número de pontos turísticos que a cidade possui: (Apenas números, ex: 50) \n");
    scanf("%d", &num_pontos_tur);
    
    printf("Parabéns você registrou todos os dados da cidade na carta, confira-os logo abaixo: \n");
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Estado: %s \nCódigo da Carta: %s \nCidade: %s \nPopulação: %d \nÁrea em km²: %.f km² \nPIB: R$%.lf \nNúmero de pontos turísticos: %d \n", estado, carta, cidade, populacao, area, pib, num_pontos_tur);

    return 0;
}
