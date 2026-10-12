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

void Valores(int valor,int cont,Celula *primeiro){
    if(primeiro == NULL){
        printf("erro");
        return;
    }
    Celula *i;
    int maior = primeiro->elemento;
    int menor = primeiro->elemento;
    int soma = 0;
    float media;
     for(i = primeiro; i != NULL;i = i->prox){
        if(maior < i->elemento){
            maior = i->elemento;
        }
        if(menor > i->elemento){
            menor = i->elemento;
        }
        soma = soma + i->elemento;
     }
     media = soma / cont;
     printf("Quantidade de elementos : %d , Soma : %d , Maior : %d , Menor :%d  , Media : %.2f",cont,soma,maior,menor,media);
}


int main()
{
    int valor ;
    int cont = 0;
    Celula *primeiro = NULL;
    Celula *ultimo = NULL;

    while(scanf("%d",&valor) == 1){
        cont++;
        Celula *nova = novaCelula(valor);

        if(primeiro == NULL){
            primeiro = nova;
            ultimo = nova;
        }else {
            ultimo->prox = nova;
            ultimo = nova;
        }
    }
    Valores(valor,cont,primeiro);

    Celula *atual = primeiro;
    while (atual != NULL) {
        Celula *proxima = atual->prox; 
        free(atual);                   
        atual = proxima;               
    }

    return 0;
}
   