#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


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

void removerInicio(Celula **primeiro){
    if(primeiro == NULL){
        printf("erro");
        return;
    }
    Celula *tmp = *primeiro;
    *primeiro = tmp->prox;
    free(tmp);
}



int main(){
    int valor ;
    int cont = 0;
    Celula *primeiro = NULL;
    Celula *ultimo = NULL;
    while(scanf("%d",&valor)== 1){
        cont++;
        Celula *nova = novaCelula(valor);
        if(primeiro == NULL){
            primeiro = nova;
            ultimo = nova;
        }else{
            ultimo->prox = nova;
            ultimo = nova;
        }
    }

     Celula *atual = primeiro;
    while (atual != NULL) {
        printf("%d ", atual->elemento);
        atual = atual->prox; 
    }
    printf("\n");

    removerInicio(&primeiro);

    Celula *atualizado = primeiro;
    while (atualizado != NULL) {
        printf("%d ", atualizado->elemento);
        atualizado = atualizado->prox; 
    }

    atual = primeiro;
    while (atual != NULL) {
        Celula *proxima = atual->prox; 
        free(atual);                   
        atual = proxima;               
    }

    return 0;
}



