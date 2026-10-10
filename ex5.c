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
int maior(Celula *primeiro){
    int maior = 0;
    Celula *atual = primeiro;

    while(atual != NULL){
        if(atual->elemento > maior){
            maior = atual->elemento;
        }
        atual = atual->prox;
    }
    return maior;
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
    maior(primeiro);
     Celula *atual = primeiro;
    while (atual != NULL) {
        printf("%d ", atual->elemento);
        atual = atual->prox; 
    }
    printf("\n");
    
    printf("o Maior valor e : %d\n",maior(primeiro));

    atual = primeiro;
    while (atual != NULL) {
        Celula *proxima = atual->prox; 
        free(atual);                   
        atual = proxima;               
    }
   
    return 0;
}
