#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tamanho 10

void preencher (int vetor[])
{
    for (int i = 0; i < tamanho; i++)
    {
        vetor[i] = rand()%tamanho;
    }
}

void mostrar (int vetor[])
{
    printf ("[");
    
    for (int i = 0; i < tamanho; i++)
    {
        printf (" %i ", vetor[i]);
    }
    
    printf ("]\n");
}

void main()
{
    srand (time (NULL));
    
    int vetor[tamanho];
    
    preencher (vetor);
    
    mostrar (vetor);
}
