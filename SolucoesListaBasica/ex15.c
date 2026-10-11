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
void mostrar(Celula *primeiro){
   printf("%d",primeiro->elemento);
}


int main(){
    int valor;
    Celula *primeiro = NULL;
    Celula *ultimo = NULL;
    while(scanf("%d",&valor) == 1){
    Celula *nova = novaCelula(valor);

        if(primeiro == NULL){
            primeiro = nova;
            ultimo = nova;
        }else {
            ultimo->prox = nova;
            ultimo = nova;
        }

    }
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    
    printf("\n");

    mostrar(primeiro);

    Celula *atual = primeiro;
    while (atual != NULL) {
        Celula *proxima = atual->prox; 
        free(atual);                   
        atual = proxima;               
    }

    return 0;
}