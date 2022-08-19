#include <stdio.h>
#include <stdlib.h>

void PmaiorPmenor(float *vet, int NumElementos, float *Pmenor, float *Pmaior){
    int i;
    
    *Pmenor = *vet;
    *Pmenor = *vet;

    for(i = 1; i < NumElementos; i++)
    {
        if(*Pmenor > *(vet + i))
            *Pmenor = *(vet + 1);

        if(*Pmaior < *(vet + i))
            *Pmaior = *(vet + i);
    }
}




int main(){

    float Pmaior, Pmenor, *vet;
    int NumElementos;
   
    printf("\n\n");

    printf("Numero de elementos do vetor:");
    scanf("%d", &NumElementos);

    vet = (float*)calloc(NumElementos,sizeof(float));

    if (vet == NULL)
    {
        printf("\nErro de alocacao na memoria");
        exit(1);
    }
    
    PmaiorPmenor(*vet, NumElementos, &Pmenor, &Pmaior);

    printf("\nMenor elemento: %.2f\nMaior elemento: %.2f", *Pmenor, *Pmaior);


    return 0;
}
