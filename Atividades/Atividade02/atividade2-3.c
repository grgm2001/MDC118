#include <stdio.h>

int main()
{

    int nota= 3;

    switch (nota)
    {

        case 1:
        printf("%s\n", "ruim");
        break;

        case 2:
        printf("%s\n", "insuficiente");
        break;

        case 3:
        printf("%s\n", "suficiente");
        break;

        case 4:
        printf("%s\n", "bom");
        break;

        case 5:
        printf("%s\n", "otimo");
        break;

        default:
        printf("%s\n", "erro");

    }

    return 0;

}