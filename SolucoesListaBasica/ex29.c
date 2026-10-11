#include <stdio.h>

void mostrar(char *titulo, int arr[], int n) {
    printf("%s [", titulo);
    for (int i = 0; i < n; i++) {
        printf(" %d", arr[i]);
    }
    printf(" ]\n");
}

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


int particionar(int arr[], int n) {
    int pivo = arr[n - 1];
    int i = -1;   

    printf("Pivo (ultimo elemento): %d\n\n", pivo);

    for (int j = 0; j < n - 1; j++) {
        if (arr[j] <= pivo) {
            i++;
            trocar(&arr[i], &arr[j]);
            printf("arr[%d]=%d <= %d: vai para a esquerda -> ", j, arr[i], pivo);
        } else {
            printf("arr[%d]=%d >  %d: fica na direita     -> ", j, arr[j], pivo);
        }
        mostrar("", arr, n);
    }

    trocar(&arr[i + 1], &arr[n - 1]);   
    return i + 1;
}

int main() {
    int vet[] = {3, 6, 1, 5, 2};
    int n = 5;

    mostrar("Vetor original:", vet, n);
    printf("\n");

    int pos = particionar(vet, n);

    printf("\n");
    mostrar("Apos a particao:", vet, n);
    printf("O pivo ficou na posicao %d\n", pos);

    printf("Menores que o pivo (esquerda):");
    for (int i = 0; i < pos; i++) printf(" %d", vet[i]);
    printf("\nMaiores que o pivo (direita):");
    for (int i = pos + 1; i < n; i++) printf(" %d", vet[i]);
    printf("\n");

    return 0;
}