#include<stdio.h>
#include<stdlib.h>

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

int soma(Celula *primeiro){
    int totalSoma = 0;
    Celula *atual = primeiro;

    while(atual != NULL){
        totalSoma = totalSoma + atual->elemento;
        atual = atual->prox;
    }
    return totalSoma;
}



int main(){
    int valor ;
    int cont = 0;
    Celula *primeiro = NULL;
    Celula *ultimo = NULL;
    while(scanf("%d",&valor)== 1){
        Celula *nova = novaCelula(valor);
        if(primeiro == NULL){
            primeiro = nova;
            ultimo = nova;
        }else{
            ultimo->prox = nova;
            ultimo = nova;
        }
        cont++;
    }
    soma(primeiro);

     Celula *atual = primeiro;
    while (atual != NULL) {
        printf("%d ", atual->elemento);
        atual = atual->prox; 
    }
    printf("\n");

    atual = primeiro;
    while (atual != NULL) {
        Celula *proxima = atual->prox; 
        free(atual);                   
        atual = proxima;               
    }
    printf("valor total : %d\n",soma(primeiro));
    return 0;
}
