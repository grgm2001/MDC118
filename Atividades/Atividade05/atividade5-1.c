#include <stdio.h>

int main()
{
    int numeros[10];

    for(int i = 0; i < 10; i++)
    {
        numeros[i] = i + 1;
    }

    for(int i = 0; i < 10; i++)
    {
        printf("%d, ", numeros[i]);
    }

    printf("\n");

    printf("%d\n", numeros[0]);
    printf("%d\n", numeros[9]);

    return 0;
}