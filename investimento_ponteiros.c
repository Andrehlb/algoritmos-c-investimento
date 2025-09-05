#include <stdio.h>
#include <string.h>

// Definição de constantes
#define TAXA_JUROS 0.05     // 5% ao ano
#define MAX_STRING 50

int main() {
    // Variáveis primárias
    float valorInicial, valorFinal;
    int anos;
    char nome[MAX_STRING];

    // Variáveis compostas
    int vetor[3] = {10, 20, 30};
    int matriz[2][2] = {{1, 2}, {3, 4}};

    // Ponteiro
    int *ptr;

    // Entrada do usuário
    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite o valor inicial do investimento: ");
    scanf("%f", &valorInicial);

    printf("Digite o número de anos: ");
    scanf("%d", &anos);

    // Cálculo do valor final (juros simples)
    valorFinal = valorInicial * (1 + (TAXA_JUROS * anos));

    // Exibição do resultado do investimento
    printf("\n--- RESULTADOS ---\n");
    printf("Investidor: %s\n", nome);
    printf("Valor inicial: %.2f\n", valorInicial);
    printf("Tempo (anos): %d\n", anos);
    printf("Valor final (com juros simples): %.2f\n", valorFinal);

    // Uso de ponteiro: modificar o primeiro elemento do vetor
    ptr = &vetor[0];
    *ptr = 99; // altera o primeiro valor do vetor

    // Exibição dos elementos do vetor
    printf("\nVetor atualizado: %d, %d, %d\n", vetor[0], vetor[1], vetor[2]);

    // Exibição dos elementos da matriz
    printf("Matriz:\n");
    printf("%d %d\n", matriz[0][0], matriz[0][1]);
    printf("%d %d\n", matriz[1][0], matriz[1][1]);

    // Exibição de endereços de memória
    printf("\nEndereço do primeiro elemento do vetor: %p\n", (void*)&vetor[0]);
    printf("Endereço do primeiro elemento da matriz: %p\n", (void*)&matriz[0][0]);

    return 0;
}
