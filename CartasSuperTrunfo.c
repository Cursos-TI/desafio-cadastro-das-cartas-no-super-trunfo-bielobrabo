#include <stdio.h>
#include <string.h>
int main() {  
    printf("Desafio SuperTriunfo!\n");

    char estado[50];
    char codigo_da_carta[50];
    char nome_da_cidade[50];
    int populacao;
    float area_em_km2;
    float pib;
    int numeros_de_pontos_turisticos;
    
    printf("Digite seu estado: \n");
    fgets(estado, sizeof(estado), stdin);
    estado[strcspn(estado, "\n")] = '\0';  

    printf("Digite o código da carta: \n");
    fgets(codigo_da_carta, sizeof(codigo_da_carta), stdin);
    codigo_da_carta[strcspn(codigo_da_carta, "\n")] = '\0';  
   
    printf("Digite o nome da cidade: \n");
    fgets(nome_da_cidade, sizeof(nome_da_cidade), stdin);
    nome_da_cidade[strcspn(nome_da_cidade, "\n")] = '\0';  

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a área em km2: \n");
    scanf("%f", &area_em_km2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numeros_de_pontos_turisticos);

    return 0;
}