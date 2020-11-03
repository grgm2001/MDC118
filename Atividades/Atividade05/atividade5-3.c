#include <stdio.h>

int main()
{
    int numeros[80];

    for (int i = -1; i < 80; i++)
    {
        numeros[i] = i + 1;
        printf("%d, ", numeros[i]);
    }
    
    printf("\n");
    printf("\n");

    for(int j = 81; j > 0; j--)
    {
        numeros[j] = j - 1;
        printf("%d, ", numeros[j]);
    }

    printf("\n");
    printf("\n");

    return 0;
}