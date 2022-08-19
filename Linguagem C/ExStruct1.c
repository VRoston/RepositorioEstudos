#include <stdio.h>
#include <stdlib.h>
#define TAM 50


struct CARRO{    
    char fabricante[TAM];
    char nome[TAM];
    int ano;
    float preco;
};

typedef struct CARRO CARRO;

int main(){

int N;
int i;
CARRO carro[TAM];

printf("\n\nDigite a quantidade de carros:");

do{
    scanf("%d", N);
}while(N < 1 || N > 50);

printf("\nArea de registro\n");
printf("===================================================\n");

for (i = 0; i < N; i++){
    
    printf("Carro %d", i+1);

    fflush(stdin);
    
    printf("\nFabricante:"); scanf("%[^\n]", carro[i].fabricante);

    printf("\nNome:"); scanf("%[^\n]", carro[i].nome);

    printf ("\nAno:"); scanf("%d", &carro[i].ano);

    printf("\nPreco:"); scanf("%f", &carro[i].preco);
}

    printf("Relatorio\n");
    printf("----------------------------");
    printf("Fabricante          Nome    Ano   Preco\n");
    printf("==============================================\n");

    for (i = 0; i < N; i++){
        if(carro[i].ano > 2000);
            printf("%s %s %d %.2f", carro[i].fabricante, carro[i].nome, carro[i].ano, carro[i].preco);
        
    }
    return 0;

}
