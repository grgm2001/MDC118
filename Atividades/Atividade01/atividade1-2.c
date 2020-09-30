#include <stdio.h>

int main()
{
    float segundo = 3600;
    float minuto;
    float hora;

    segundo = segundo * 1;
    printf("%f\n", segundo);

    minuto = segundo * 0.016667;
    printf("%f\n", minuto);

    hora = segundo * 0.000278;
    printf("%f\n", hora);

    return 0;

}