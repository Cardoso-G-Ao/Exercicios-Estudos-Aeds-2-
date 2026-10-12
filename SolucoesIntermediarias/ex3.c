#include <stdio.h>
#include <stdlib.h>

typedef struct CelulaDupla
{
    int elemento;
    struct CelulaDupla *prox;
    struct CelulaDupla *ant;
} CelulaDupla;

CelulaDupla *novaCelula(int elemento)
{
    CelulaDupla *nova = (CelulaDupla *)malloc(sizeof(CelulaDupla));
    nova->elemento = elemento;
    nova->prox = nova->ant = NULL;
    return nova;
}
void mostrar(int valor , CelulaDupla *primeiro,CelulaDupla *ultimo){
    CelulaDupla *i;
    CelulaDupla *j;
    for(i = primeiro ; i != NULL; i = i->prox){
       printf(" %d",i->elemento);
    }
    printf("\n");
    for(j = ultimo; j != NULL; j =j->ant){
        printf(" %d",j->elemento);
    }
}
int main()
{
    int valor;
    int cont = 0 ;
    CelulaDupla *primeiro = NULL;
    CelulaDupla *ultimo = NULL;
    while(scanf("%d",&valor) == 1){
    cont++;
    CelulaDupla *nova = novaCelula(valor);
    if(primeiro == NULL){
        primeiro = nova;
        ultimo =nova;
    }else{
        ultimo->prox = nova;
        nova->ant = ultimo; 
        ultimo = nova;
    }
    }
    mostrar(valor,primeiro,ultimo);
   

    CelulaDupla *atual = primeiro;
    while (atual != NULL) {
        CelulaDupla *proxima = atual->prox; 
        free(atual);                   
        atual = proxima;               
    }

    return 0;

}
   