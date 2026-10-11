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

void inversao(Celula *topo){
    Celula *i;
    for( i = topo ; i != NULL ; i = i->prox){
            printf(" %d",i->elemento);
    }
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

    inversao(topo); 
    printf("\n");

  
    Celula *atual = topo;
    while (atual != NULL) {
        Celula *proxima = atual->prox;
        free(atual);
        atual = proxima;
    }

    return 0;
}