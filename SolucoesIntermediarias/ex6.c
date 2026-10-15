#include <stdio.h>
#include <stdlib.h>

int removerFinal(int **vetor, int *cont){
    if(*cont <= 0){
        return 0;
    }
    (*cont)--;
    if(*cont > 0){
        int *temp = (int*) realloc(*vetor, (*cont) * sizeof(int));
        if(temp != NULL){
            *vetor = temp;
        }
    } else {
        free(*vetor);
        *vetor = NULL;
    }
    return 1;
}

int main(){
    int *vetor = NULL;
    int valor, remocoes;
    int cont = 0;

    scanf("%d", &remocoes);  

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

    for(int i = 0; i < remocoes; i++){
        if(removerFinal(&vetor, &cont)){
            printf("%d\n", cont);
        } else {
            printf("Erro\n");
        }
    }

    free(vetor);   
    return 0;
}