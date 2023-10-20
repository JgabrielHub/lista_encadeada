#include <stdio.h>
#include <stdlib.h>

//criar um nó
typedef struct no{
    int valor;
    struct no *proximo, *anterior;
}no_e;

//função para cirar um novo nó
struct no* criar(int valor){
    struct no* novo = (no_e *) malloc(sizeof(no_e));
    if(novo == NULL){
        printf("NADA %d", novo);
    }
    novo->valor = valor;
    novo->proximo = NULL;
}

void inserir(no_e **head,int valor){
    no_e* novo = criar(valor);
    novo->proximo = *head;
    *head = novo;
}
void imprime(no_e *head){
    no_e *atual = head;
    while (atual != NULL)
    {
        printf("%d -> ", atual->valor);
        atual = atual->proximo;
    }
    printf("NULL");
}
int main(){
    struct no *teste = NULL;
    
    inserir(&teste,3);
    inserir(&teste,36);
    inserir(&teste,9);
    inserir(&teste,15);
    imprime(teste);
    return 0;
}
