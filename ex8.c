#include <stdio.h>

int imprime_reverso(int tam, int *vetor);

int main()
{
    int t;
    printf("Digite o tamanho do vetor:\n");
    scanf("%d", &t);
    int vetor[t];

    for (int i = 1; i <= t; i++)
    {
        printf("Digite o valor do vetor %d: \n", i);
        scanf("%d", &vetor[i]);
    }
    imprime_reverso(t, vetor);
    return 0;
}

int imprime_reverso(int tam, int *vetor)
{
    if (tam == 0)
    {
        return -1;
    }
    else
    {
        printf("[%d] ", vetor[tam]);
    }
    return imprime_reverso(tam - 1, vetor);
}
