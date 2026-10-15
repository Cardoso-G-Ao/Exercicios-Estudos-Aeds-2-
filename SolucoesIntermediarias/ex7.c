#include <stdio.h>
#include <stdlib.h>

int removerRepetidos(int *vetor, int cont){
    int novoTam = 0;

    for(int i = 0; i < cont; i++){
        int repetido = 0;

        for(int j = 0; j < novoTam; j++){
            if(vetor[j] == vetor[i]){
                repetido = 1;
                break;
            }
        }

        if(!repetido){
            vetor[novoTam] = vetor[i];
            novoTam++;
        }
    }
    return novoTam;
}

int main(){
    int *vetor = NULL;
    int valor;
    int cont = 0;

    while(scanf("%d", &valor) == 1){
        int *temp = (int*) realloc(vetor, (cont + 1) * sizeof(int));
        if(temp == NULL){
            free(vetor);
            return 1;
        }
        vetor = temp;
        vetor[cont] = valor;
        cont++;
    }

    cont = removerRepetidos(vetor, cont);

    if(cont > 0){
        int *temp = (int*) realloc(vetor, cont * sizeof(int));
        if(temp != NULL){
            vetor = temp;
        }
    }

    for(int i = 0; i < cont; i++){
        printf("%d", vetor[i]);
        if(i < cont - 1){
            printf(" ");
        }
    }
    printf("\n");

    free(vetor);
    return 0;
}