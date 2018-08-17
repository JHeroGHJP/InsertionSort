#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tamanho 7

void InsertionSort (int vetor[])
{
    int atual;
    int j;
    int trocas = 1;
    
    for (int i = 1; i < tamanho; i++)
    {
        atual = vetor[i];
        
        for (j = i - 1; (j >= 0) && (atual < vetor[j]); j--)
        {
            vetor[j + 1] = vetor[j];
            
            trocas++;
        }
        
        vetor[j + 1] = atual;
    }
    
    printf ("Vetor ordenado com %i trocas!\n", trocas);
}

void preencher (int vetor[])
{
    for (int i = 0; i < tamanho; i++)
    {
        vetor[i] = rand()%17;
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
    srand (7);
    
    int vetor[tamanho];
    
    preencher (vetor);
    
    mostrar (vetor);
    
    InsertionSort (vetor);
    
    mostrar (vetor);
}
