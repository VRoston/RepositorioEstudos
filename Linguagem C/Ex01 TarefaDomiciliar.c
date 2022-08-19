#include <stdio.h>
#include <stdlib.h>


int main(){

int NumElementos;
float *vet;
float *Pmaior = 0, *Pmenor = 0;
int i;

    printf("\n\n");

    printf("Numero de elementos do vetor:");
    scanf("%d", &NumElementos);

    vet = (float*)calloc(NumElementos,sizeof(float));

    if (vet == NULL)
    {
        printf("\nErro de alocacao na memoria");
        exit(1);
    }

    printf("\nDigite os elementos reais\n");

    for(i=0; i<NumElementos; i++)
    {
        printf("Elemento [%d] :", i + 1);
        scanf("%f", &vet[i]);
        
        if(*vet>*Pmaior && *vet<*Pmenor)
        {
            *Pmaior = *vet;
            *Pmenor = *vet;
        }

        if(*vet<*Pmenor & *vet!=0)
        {
            *Pmenor = *vet;
        }

        if(*vet>*Pmaior && *vet!=0)
        {
            *Pmaior = *vet;
        }

        printf("\n");
    }


    printf("\nMaior Elemento: %f", *Pmaior);
    printf("\nMenor Elemento: %f", *Pmenor);
    
    return 0;










}