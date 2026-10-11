#include <stdio.h>

void imprimirArvore(int arr[], int n, int i, int nivel) {
    if (i >= n) {
        return;
    }

    for (int k = 0; k < nivel; k++) {
        printf("    ");
    }
    printf("%d\n", arr[i]);

    imprimirArvore(arr, n, 2 * i + 1, nivel + 1);
    imprimirArvore(arr, n, 2 * i + 2, nivel + 1);
}

void imprimirFilhos(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int esq = 2 * i + 1;
        int dir = 2 * i + 2;

        printf("indice %d, valor %d:", i, arr[i]);
        if (esq < n) {
            printf(" esquerdo = %d", arr[esq]);
        }
        if (dir < n) {
            printf(", direito = %d", arr[dir]);
        }
        if (esq >= n) {
            printf(" folha");
        }
        printf("\n");
    }
}

int main() {
    int arr[] = {4, 10, 3, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Vetor:");
    for (int i = 0; i < n; i++) {
        printf(" %d", arr[i]);
    }
    printf("\n\n");

    printf("Arvore (raiz no topo, filhos recuados):\n");
    imprimirArvore(arr, n, 0, 0);

    printf("\nFilhos de cada no:\n");
    imprimirFilhos(arr, n);

    return 0;
}