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
void procurar(Celula *primeiro,Celula *ultimo){
    int x;
    scanf("%d",&x);
    Celula *i;
    for(i = primeiro; i != NULL ; i = i->prox){
        if(x == i->elemento){
            printf("sim");
            return;
        }
    }
    printf("nao");
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
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

     Celula *atual = primeiro;
    while (atual != NULL) {
        printf("%d ", atual->elemento);
        atual = atual->prox; 
    }
    printf("\n");

    procurar(primeiro,ultimo);

    atual = primeiro;
    while (atual != NULL) {
        Celula *proxima = atual->prox; 
        free(atual);                   
        atual = proxima;               
    }

    return 0;
}
