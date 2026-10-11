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

void mostrar (Celula *topo){
    printf("%d",topo->elemento);
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
    
    printf("\n");
    mostrar(topo);
    Celula *atual = topo;
    while (atual != NULL) {
        Celula *proxima = atual->prox;
        free(atual);
        atual = proxima;
    }

    return 0;
}