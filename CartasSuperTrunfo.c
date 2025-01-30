#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Agrimar

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    printf ("Bem vindo ao Jogo de Cartas Super Trunfo!");
    int CEP = 50750370, população = 300000, pontos = 5;
    char nome [150] = "Varzea";
    float PIB;
        
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Digite o CEP da sua Ciddade: \n");
    scanf("%d", &CEP);

    printf("Digite a total da população da sua cidade: \n");
    scanf("%d", &população);

    printf("Informe quantos pontos turisticos a sua cidade tem: \n");
    scanf("%d", &pontos);

    printf("Informe o nome da sua cidade: \n");
    scanf("%s", nome);

    printf("Por fim, informe o PIB total da sua cidade: \n");
    scanf("%f", PIB);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
