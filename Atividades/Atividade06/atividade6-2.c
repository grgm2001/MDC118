#include <stdio.h>
#include <string.h>

struct contato_t{
    char nome[30];
    int telefone;
};

int main()
{

    struct contato_t lista_contatos[10];
    
    // nome
    for(int i = 0; i < 10; i++ )
    {
        printf("nome %d: ", i);
        scanf("%[^\n]s", lista_contatos[i].nome);
        getchar();
    }

    printf("\n");

    // telefone 
    for(int i = 0; i < 10; i++ )
    {
        printf("telefone %d: ", i);
        scanf("%d", &lista_contatos[i].telefone);
        getchar();
    }

    printf("\n");

    for(int i = 0; i < 10; i++ )
    {
        printf("%s - ", lista_contatos[i].nome);
        printf("%d", lista_contatos[i].telefone);
        printf("\n");
    }

    return 0;
    
}
