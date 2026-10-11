#include <stdio.h>
#include <stdlib.h>

typedef struct Celula
{
    int elemento;
    struct Celula *prox;
} Celula;

Celula *novaCelula(int elemento)
{
    Celula *nova = (Celula *)malloc(sizeof(Celula));
    nova->elemento = elemento;
    nova->prox = NULL;
    return nova;
}

void desempilhar(Celula **topo)
{
    if(*topo == NULL){
        printf("erro");
        return;
    }
    Celula *tmp = *topo;
    *topo = (*topo)->prox; 
    tmp->elemento;
    tmp->prox = NULL;
    free(tmp);
    tmp = NULL;
}

int main()
{
    int valor;
    Celula *topo = NULL;

    while (scanf("%d", &valor) == 1) {
    Celula *nova = novaCelula(valor);
    nova->prox = topo;   
    topo = nova;   
    }
    
    desempilhar(&topo);

    Celula *atual = topo;
    while (atual != NULL) {
        printf("%d ", atual->elemento);
        atual = atual->prox;
    }
    printf("\n");

    atual = topo;
    while (atual != NULL) {
        Celula *proxima = atual->prox;
        free(atual);
        atual = proxima;
    }

    return 0;
}