#include <stdio.h>
#include <stdlib.h>

float Maior(float * num, int n)///função que recolhe o vetor e o número de elementos para encontrar o maior numero
{

    float maior = num[0];
    for(int i = 0; i < n; i++)
    {
        if(num[i]>maior)
        {
            maior = num[i];
        }
    }
    return maior;
}

float Menor(float * num, int n) ///função que recolhe o vetor e o número de elementos para encontrar o menor numero
{
    float menor = num[0];
    for(int i = 0; i< n; i++)
    {
        if(num[i]<menor)
        {
            menor = num[i];
        }
    }
    return menor;
}


int main ()
{
    float * X;
    int n;
    int i;
    float Pmaior;
    float Pmenor;
    printf("\nQuantidade de elementos do vetor: ");
    scanf("%d", &n);
    X = (float *)calloc(n, sizeof(int));
    if (X == NULL)
    {
        printf("\nErro de alocacao!");
        exit(0);
    }
    printf("\nElementos do vetor: %d", n);
    for (i = 0; i < n; i++)
    {
        printf("\nElemento %d: ", i+1);
        scanf("%f", &X[i]);
    }
    Pmaior = Maior(X, n); ///chamando função maior
    Pmenor = Menor(X, n); ///chamando função menor
    system("cls");// apagar tela
    printf("Maior = %.3f\n", Pmaior);
    printf("Menor = %.3f\n", Pmenor);
    return 0;
}
