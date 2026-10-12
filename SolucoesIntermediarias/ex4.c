#include <stdio.h>
#include <stdlib.h>

typedef struct Celula{
    int elemento;
    struct Celula *prox;
}Celula;

Celula *novaCelula(int elemento)
{
    Celula *nova = (Celula *)malloc(sizeof(Celula));
    nova->elemento = elemento;
    nova->prox = NULL;
    return nova;
}

void mostrar(Celula *primeiro){
    Celula *i;
    for(i = primeiro; i != NULL; i = i->prox){
        printf("%d", i->elemento);
        if(i->prox != NULL){
            printf(" ");
        }
    }
    printf("\n");
}

Celula *inverter(Celula *primeiro){
    Celula *anterior = NULL;
    Celula *atual = primeiro;
    Celula *proxima;

    while(atual != NULL){
        proxima = atual->prox;
        atual->prox = anterior;
        anterior = atual;
        atual = proxima;
    }
    return anterior;
}

int main(){
    Celula *primeiro = NULL;
    Celula *ultimo = NULL;
    int valor;

    while(scanf("%d", &valor) == 1){
        Celula *nova = novaCelula(valor);
        if(primeiro == NULL){
            primeiro = nova;
            ultimo = nova;
        } else {
            ultimo->prox = nova;
            ultimo = nova;
        }
    }

    mostrar(primeiro);               
    primeiro = inverter(primeiro);   
    mostrar(primeiro);               

    Celula *atual = primeiro;
    while(atual != NULL){
        Celula *proxima = atual->prox;
        free(atual);
        atual = proxima;
    }

    return 0;
}