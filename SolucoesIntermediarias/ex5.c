#include <stdio.h>

#define MAX 10

int arrastar(int posicao, int vetor[], int tamanho, int valor){
    for(int i = tamanho; i > posicao; i--){
        vetor[i] = vetor[i - 1];
    }
    vetor[posicao] = valor;
    return tamanho + 1;
}

void mostrar(int vetor[], int tamanho){
    for(int j = 0; j < tamanho; j++){
        printf("%d", vetor[j]);
        if(j < tamanho - 1){
            printf(" ");
        }
    }
    printf("\n");
}

int main(){
    int vetor[MAX];
    int tamanho, posicao, valor;

    scanf("%d", &tamanho);
    if(tamanho < 0 || tamanho > MAX){
        printf("Erro\n");
        return 0;
    }

    scanf("%d", &posicao);
    scanf("%d", &valor);

    for(int i = 0; i < tamanho; i++){
        scanf("%d", &vetor[i]);
    }

    if(posicao < 0 || posicao > tamanho || tamanho == MAX){
        printf("Erro\n");
        return 0;
    }

    tamanho = arrastar(posicao, vetor, tamanho, valor);
    mostrar(vetor, tamanho);

    return 0;
}