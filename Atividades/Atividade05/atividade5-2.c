#include <stdio.h>
#include <stdlib.h>

int main()
{
    float funcionarios[7][2] = {{1, 3010}, {2, 3020}, {3, 3030}, {4, 3040}, {5, 3050}, {6, 3060}, {7, 3070}};
    int id;

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%5.1f ", funcionarios[i][j]);
        }
        printf("\n");
    }

    printf("digite um numero de 0 a 7: "); 
    scanf("%d", &id);
    id = id - 1;

    printf("\n");

    printf("%5.1f ", funcionarios[id][1]);

    return 0;
}