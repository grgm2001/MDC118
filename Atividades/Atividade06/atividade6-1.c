#include <stdio.h>
#include <string.h>

struct data_t
{
    int dia; 
    int mes;
    int ano;
};


int main()
{
    struct data_t calendario;

    printf("Dia (de 1 a 30): ");
    scanf("%d", &calendario.dia);
    printf("\n");

    printf("Mes (de 1 a 12): ");
    scanf("%d", &calendario.mes);
    printf("\n");

    printf("Ano: ");
    scanf("%d", &calendario.ano);
    printf("\n");

    printf("formato BR: ");
    printf("%d, %d, %d ", 
    calendario.dia, 
    calendario.mes, 
    calendario.ano);
    printf("\n");

    printf("formato US: ");
    printf("%d, %d, %d ", 
    calendario.mes, 
    calendario.dia, 
    calendario.ano);
    printf("\n");

    return 0;

}