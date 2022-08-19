#include <stdio.h>
#include <stdlib.h>
#define TAM 20

int main(){

int i, j; //controladores
int N, M; //dimensoes
int Matriz [TAM] [TAM];
int MatrizT [TAM] [TAM];

printf("\n\n");
printf("Digite as dimensoes da Matriz (max 20 x 20)\n");

do{
    printf("Linhas:");
    scanf("%d", &N);
    printf("\nColunas:");
    scanf("%d", &M);
}while(N<0 || N>20 || M<0 || M>20);

printf("<<<Digite os elementos da Matriz>>>\n\n");

for(i = 0; i<N ; i++){
    for(j = 0; j<M; j++){
        printf("Elemento a [ %d ] [ %d ]: ", i + 1 , j + 1);
        scanf("%d", &Matriz[i][j]);
    }
}

printf("\n<<<Matriz Lida>>>");

for(i = 0; i<N; i++)
{
    printf("\n");
    
    for(j = 0; j<M; j++)
    {
        printf(" %d  ", Matriz[i][j]);
    }
}

printf("\n<<<Matriz Transposta>>>");

for(i = 0; i<N; i++)
{
    printf("\n");

    for(j = 0; j<M; j++)
    {
        printf(" %d  ", Matriz[j][i]);
    }
} 



    printf("\n\n");

return 0;
}