#include <stdio.h>

enum meses { jan=1, fev=2, mar=3, abr=4, mai=5, jun=6,
 jul=7, ago=8, set=9, out=10, nov=11, dez=12};

int main()
{
    int mes;

    printf("Em qual mes estamos(1 a 12): ");
    scanf("%d", &mes);
    printf("\n");

    if(mes == jan){
    printf("janeiro");
    }else if(mes == fev){
    printf("feveiro");
    }else if(mes == mar){
    printf("março");
    }
    
    else if(mes == abr){
    printf("abril");
    }else if(mes == mai){
    printf("maio");
    }else if(mes == jun){
    printf("junho");
    }

    else if(mes == jul){
    printf("julho");
    }else if(mes == ago){
    printf("agosto");
    }else if(mes == set){
    printf("setembro");
    }
    
    else if(mes == out){
    printf("outubro");
    }else if(mes == nov){
    printf("novembro");
    }else if(mes == dez){
    printf("dezembro");
    }

    else
    {
        printf("ERRO");
    }
    
    printf("\n");
    printf("\n");

    return 0; 

}