#include <stdio.h>

int main()
{
    char tecla;

    scanf("%c", &tecla);

    printf("%d\n", (int) tecla);

    if(tecla >= 48 && tecla <= 57)
    {
        printf("digito");
    }
    else if( (tecla >= 65 && tecla <= 90) || (tecla >= 97 && tecla <= 122) )
    {
        printf("letra");
    }
    else
    {
        printf("caractere_especial");
    }
    
    return 0;

}