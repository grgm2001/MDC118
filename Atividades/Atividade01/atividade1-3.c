#include <stdio.h>

int main()
{
    float Gigabytes = 1;
    float bytes;
    int potencia = 1024 * 1024 * 1024; 

    bytes = Gigabytes * potencia;
    printf("%f\n", bytes);

    return 0;

}
