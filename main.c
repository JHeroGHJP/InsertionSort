#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tamanho 10

int InsertionSort (int vetor[])
{
    int atual, j;
    
    for (int i = 1; i < tamanho; i++)
    {
        atual = vetor[i];
        
        for (j = i - 1; (j >= 0) && (atual < vetor[j]); j--)
        {
            vetor[j + 1] = vetor[j];
        }
        
        vetor[j + 1] = atual;
    }
}

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
    
    InsertionSort (vetor);
    
    mostrar (vetor);
}
