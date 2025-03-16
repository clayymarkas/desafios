#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // ClaytonMark: Aqui eu defini as variáveis separadas para cada atributo das cidades e iniciei elas!!
    char estado1[50] = "São Paulo";
    char carta1[4] = "A00";
    char cidade1[50] = "Itapevi";
    unsigned long int populacao1 = 50000;
    float area1 = 555555;
    double pib1 = 1516532;
    int num_pontos_tur1 = 6;
    char estado2[50] = "Santa Catarina";
    char carta2[4] = "A01";
    char cidade2[50] = "Lages";
    unsigned long int populacao2 = 55500;
    float area2 = 566555;
    double pib2 = 1664532;
    int num_pontos_tur2 = 7;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // ClaytonMark: Aqui eu utilizei o printf para se comunicar e pedir pro usuário digitar as informações da carta 1 
    // e utilizei o scanf pro usuário poder digitar as informações!! (também utilizei printf pra avisar ao fim que tudo foi registrado
    // com sucesso e avisei que as informações digitadas irão aparecer logo abaixo pro usuário conferir)
    printf("Esse é o jogo Super Trunfo com o tema países!! \nAqui você irá registrar as cartas das Cidades, preenchendo as informações pedidas abaixo: \n");
    
    printf("Digite o Estado onde fica a cidade 1: \n");
    scanf(" %[^\n]", &estado1);
    // ClaytonMark: Aqui e durante o resto do código eu utilizei o " %[^\n]" pois ele é utilizado para ler uma linha de texto, 
    // incluindo espaços, até que o usuário pressione Enter
    // ClaytonMark: isso ajudou a não ter problemas quando exibia com printf o nome dos estados ou cidades 
    // que continham espaço como "São Paulo" e "Santana de Parnaiba"

    printf("Digite o código da carta da cidade 1: (ex: A01 sendo A: Estado A ou seja, primeiro estado que esta sendo registrado ou B se for o segundo, e assim por diante \n01 sendo 01: Cidade 01 ou seja, primeira cidade que esta sendo registrada no estado A ou B e assim por diante \nCADA ESTADO PERMITE SEREM REGISTRADAS APENAS 4 CIDADES ou seja A01, A02, A03, A04 são válidas e A05 inválida!) \n");
    scanf("%s", &carta1);
    
    printf("Digite o nome da cidade 1: \n");
    scanf(" %[^\n]", &cidade1);

    printf("Digite a população da cidade 1: (Apenas números, ex: 150500200) \n");
    scanf("%lu", &populacao1);
    
    printf("Digite a área da cidade 1: (Apenas números, ex: 2500200) \n");
    scanf("%f", &area1);
    
    printf("Digite o PIB da cidade 1: (Apenas números, ex: 350500200) \n");
    scanf("%lf", &pib1);
    
    printf("Digite o número de pontos turísticos que a cidade 1 possui: (Apenas números, ex: 50) \n");
    scanf("%d", &num_pontos_tur1);
    
    printf("Parabéns você registrou todos os dados da cidade 1 na carta, confira-os logo abaixo: \n");
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // ClaytonMark: Aqui eu utilizei o printf pra formatar e mostrar na tela as informações digitadas pelo usuário anteriormente!!
    printf("Estado: %s \nCódigo da Carta: %s \nCidade: %s \nPopulação: %lu \nÁrea em km²: %.f km² \nPIB: R$%.lf \nNúmero de pontos turísticos: %d \n", estado1, carta1, cidade1, populacao1, area1, pib1, num_pontos_tur1);
    
    // ClaytonMark: Aqui eu criei duas variáveis para calcular a densidade populacional e pib per capita da cidade 1
    // ClaytonMark: Aqui eu utilizei o cast para converter como float as variáveis e dividi uma pela outra
    float densidade_pop1 = (float) populacao1 / area1;
    float pib_PC1 = (float) pib1 / populacao1;
    
    // ClaytonMark: Aqui eu usei o printf para mostrar na tela o resultado dos dois calculos anteriores, já formatados corretamente
    printf("E de acordo com a População, Área e PIB da Cidade 1, Calculamos as seguintes informações: \n");
    printf("Densidade Populacional: %.2f hab/km² \nPIB per Capita: R$%.2f \n", densidade_pop1, pib_PC1);

    // ClaytonMark: Aqui eu utilizei o printf para se comunicar e pedir pro usuário digitar as informações da carta 2 
    // e utilizei o scanf pro usuário poder digitar as informações!! (também utilizei printf pra avisar ao fim que tudo foi registrado
    // com sucesso e avisei que as informações digitadas irão aparecer logo abaixo pro usuário conferir)
    printf("Agora por favor, registre a carta da cidade 2, preenchendo as informações pedidas abaixo: \n");
    
    printf("Digite o Estado onde fica a cidade 2: \n");
    scanf(" %[^\n]", &estado2);
    
    printf("Digite o código da carta da cidade 2: (ex: A01 sendo A: Estado A ou seja, primeiro estado que esta sendo registrado ou B se for o segundo, e assim por diante \n01 sendo 01: Cidade 01 ou seja, primeira cidade que esta sendo registrada no estado A ou B e assim por diante \nCADA ESTADO PERMITE SEREM REGISTRADAS APENAS 4 CIDADES ou seja A01, A02, A03, A04 são válidas e A05 inválida!) \n");
    scanf("%s", &carta2);
    
    printf("Digite o nome da cidade 2: \n");
    scanf(" %[^\n]", &cidade2);
    
    printf("Digite a população da cidade 2: (Apenas números, ex: 150500200) \n");
    scanf("%lu", &populacao2);
    
    printf("Digite a área da cidade 2: (Apenas números, ex: 2500200) \n");
    scanf("%f", &area2);
    
    printf("Digite o PIB da cidade 2: (Apenas números, ex: 350500200) \n");
    scanf("%lf", &pib2);
    
    printf("Digite o número de pontos turísticos que a cidade 2 possui: (Apenas números, ex: 50) \n");
    scanf("%d", &num_pontos_tur2);
    
    printf("Parabéns você registrou todos os dados da cidade 2 na carta, confira-os logo abaixo: \n");

    // ClaytonMark: Aqui eu utilizei o printf pra formatar e mostrar na tela as informações digitadas pelo usuário anteriormente!!
    printf("Estado: %s \nCódigo da Carta: %s \nCidade: %s \nPopulação: %lu \nÁrea em km²: %.f km² \nPIB: R$%.lf \nNúmero de pontos turísticos: %d \n", estado2, carta2, cidade2, populacao2, area2, pib2, num_pontos_tur2);
    
    // ClaytonMark: Aqui eu criei duas variáveis para calcular a densidade populacional e pib per capita da cidade 2
    // ClaytonMark: Aqui eu utilizei o cast para converter como float as variáveis e dividi uma pela outra
    float densidade_pop2 = (float) populacao2 / area2;
    float pib_PC2 = (float) pib2 / populacao2;
    
    // ClaytonMark: Aqui eu usei o printf para mostrar na tela o resultado dos dois calculos anteriores, já formatados corretamente
    printf("E de acordo com a População, Área e PIB da Cidade 2, Calculamos as seguintes informações: \n");
    printf("Densidade Populacional: %.2f hab/km² \nPIB per Capita: R$%.2f \n", densidade_pop2, pib_PC2);

    // ClaytonMark: Aqui eu defini o super poder das 2 cartas como float calculando os atributos de cada uma, e logo após exibi ambos na tela
    float superPoderCarta1 = (float)(populacao1 + area1 + pib1 + num_pontos_tur1 + pib_PC1 - densidade_pop1), superPoderCarta2 = (float)(populacao2 + area2 + pib2 + num_pontos_tur2 + pib_PC2 - densidade_pop2);
    printf("Super Poder Carta 1: %.2f \nSuper Poder Carta 2: %.2f \n", superPoderCarta1, superPoderCarta2);

    // ClaytonMark: Aqui eu comparei as 2 cartas atributo por atributo e expliquei os resultados 1 e 0 são respectivamente 
    // carta 1 venceu e carta 2 venceu
    printf("Comparação de Cartas atributo por atributo: \n(ex: 1- Carta 1 venceu, 0- Carta 2 Venceu \n");
    
    printf("População: %d \n", populacao1 > populacao2);
    printf("Área: %d \n", area1 > area2);
    printf("PIB: %d \n", pib1 > pib2);
    printf("Número de Pontos Turísticos: %d \n", num_pontos_tur1 > num_pontos_tur2);
    printf("PIB per Capita: %d \n", pib_PC1 > pib_PC2);
    printf("Densidade Populacional: %d \n", densidade_pop1 < densidade_pop2);
    printf("Super Poder: %d \n", superPoderCarta1 > superPoderCarta2);

    // ClaytonMark: Aqui eu vou comparar as 2 cartas, apenas um atributo e exibir a carta que venceu usando lógica

    printf("Comparação de Cartas (Apenas um Atributo) usando lógica \nO Atributo escolhido é: PIB per Capita! \n");
    printf("Carta 1 - %s (%s): %.2f \n", cidade1, estado1, pib_PC1);
    printf("Carta 2 - %s (%s): %.2f \n", cidade2, estado2, pib_PC2);
        if(pib_PC1 > pib_PC2){
            printf("A Carta 1 %s venceu!", cidade1);
        }else{
            printf("A Carta 2 %s venceu!", cidade2);
        }
        
    return 0;
}
