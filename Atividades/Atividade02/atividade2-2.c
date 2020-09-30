#include <stdio.h>

int main()
{
    float valor = 150.00;

    if(valor <= 100.00){
        printf("%s\n", "desconto1");
    } 

    if(valor > 100.00 && valor <= 500.00){
        printf("%s\n", "desconto5");
    } 

    if(valor > 500.00){
        printf("%s\n", "desconto10");
    }

    return 0;

}