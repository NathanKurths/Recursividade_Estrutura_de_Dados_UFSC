#include <stdio.h>

void vetor_reverso(int inicio, int tam, int *vetor);

int main()
{
    int t;
    // printf("Digite o tamanho do vetor:\n");
    scanf("%d", &t);
    int vetor[t];

    for (int i = 0; i < t; i++)
    {
        // printf("Digite o valor do vetor %d: \n", i);
        scanf("%d", &vetor[i]);
    }
    vetor_reverso(0, t - 1, vetor);

    return 0;
}

void vetor_reverso(int inicio, int tam, int *vetor)
{
    int aux;
    if (inicio < tam)
    {
        aux = vetor[inicio];
        vetor[inicio] = vetor[tam];
        vetor[tam] = aux;
        vetor_reverso(inicio + 1, tam - 1, vetor);
    }
}
