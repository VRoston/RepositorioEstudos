#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>




int main()
{
    char frase [100];
    char *ponteiro;
    int NumLetras = 0;
   
    printf("Digite uma frase:");
    scanf("%[^\n]", frase);
    
    *frase = toupper(*frase);

    for(int i=0; i < *ponteiro; i++)
    {
        if (isalpha(*ponteiro))
            NumLetras = NumLetras + 1;
        else NumLetras = 0;
    }
    printf("Numero de Letras: %d", NumLetras);

    return 0;
}