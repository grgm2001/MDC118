#include <stdio.h>

int main()
{
    int A;
    int B;

    scanf("%d", &A);
    scanf("%d", &B);

    if(A < B){
        printf("%d", A);
    }

    if(B < A){
        printf("%d", B);
    }

    return 0;

}