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

int inserirPosicao(Celula *primeiro, int pos, int valor, int tamanho){
    if(pos < 0 || pos > tamanho){
        return 0;
    }

    
    Celula *anterior = primeiro;
    for(int i = 0; i < pos; i++){
        anterior = anterior->prox;
    }

    Celula *nova = novaCelula(valor);
    nova->prox = anterior->prox;
    anterior->prox = nova;
    return 1;
}

void mostrar(Celula *primeiro){
    for(Celula *i = primeiro->prox; i != NULL; i = i->prox){
        printf("%d", i->elemento);
        if(i->prox != NULL){
            printf(" ");
        }
    }
    printf("\n");
}

int main(){
    int pos, valor, x;
    int tamanho = 0;
    Celula *primeiro = novaCelula(-1);   
    Celula *ultimo = primeiro;

    scanf("%d", &pos);
    scanf("%d", &valor);

    while(scanf("%d", &x) == 1){
        Celula *nova = novaCelula(x);
        ultimo->prox = nova;
        ultimo = nova;
        tamanho++;
    }

    if(inserirPosicao(primeiro, pos, valor, tamanho)){
        mostrar(primeiro);
    } else {
        printf("Erro\n");
    }

    Celula *atual = primeiro;
    while(atual != NULL){
        Celula *proxima = atual->prox;
        free(atual);
        atual = proxima;
    }

    return 0;
}