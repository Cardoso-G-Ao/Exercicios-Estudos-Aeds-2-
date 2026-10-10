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

void empilhar(Celula **topo, int x)
{
    Celula *nova = novaCelula(x);
    nova->prox = *topo;   
    *topo = nova;         
}

void inserir(Celula **topo)
{
    int x;
    for (int i = 0; i < 3; i++) {
        if (scanf("%d", &x) == 1) {
            empilhar(topo, x);
        }
    }
}

int main()
{
    int valor;
    Celula *topo = NULL;

    while (scanf("%d", &valor) == 1) {
        empilhar(&topo, valor);
    }
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    inserir(&topo);

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