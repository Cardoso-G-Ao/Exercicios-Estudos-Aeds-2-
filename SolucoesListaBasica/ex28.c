#include <stdio.h>

void mostrar(int arr[], int ini, int fim) {
    printf("[");
    for (int i = ini; i <= fim; i++) {
        printf(" %d", arr[i]);
    }
    printf(" ]");
}

void espacos(int nivel) {
    for (int i = 0; i < nivel; i++) {
        printf("    ");
    }
}

void juntar(int arr[], int ini, int meio, int fim, int nivel) {
    int n1 = meio - ini + 1;
    int n2 = fim - meio;
    int esq[n1], dir[n2];

    for (int i = 0; i < n1; i++) esq[i] = arr[ini + i];
    for (int j = 0; j < n2; j++) dir[j] = arr[meio + 1 + j];

    int i = 0, j = 0, k = ini;
    while (i < n1 && j < n2) {
        if (esq[i] <= dir[j]) {
            arr[k++] = esq[i++];
        } else {
            arr[k++] = dir[j++];
        }
    }
    while (i < n1) arr[k++] = esq[i++];
    while (j < n2) arr[k++] = dir[j++];

    espacos(nivel);
    printf("Juntar: ");
    printf("[");
    for (int a = 0; a < n1; a++) printf(" %d", esq[a]);
    printf(" ] + [");
    for (int b = 0; b < n2; b++) printf(" %d", dir[b]);
    printf(" ] -> ");
    mostrar(arr, ini, fim);
    printf("\n");
}

void mergeSort(int arr[], int ini, int fim, int nivel) {
    espacos(nivel);
    printf("Dividir: ");
    mostrar(arr, ini, fim);
    printf("\n");

    if (ini >= fim) {
        return;  
    }

    int meio = (ini + fim) / 2;
    mergeSort(arr, ini, meio, nivel + 1);
    mergeSort(arr, meio + 1, fim, nivel + 1);
    juntar(arr, ini, meio, fim, nivel);
}

int main() {
    int vet[] = {4, 1, 3, 2};
    int n = 4;

    mergeSort(vet, 0, n - 1, 0);

    for (int i = 0; i < n; i++) {
        printf(" %d", vet[i]);
    }
    printf("\n");

    return 0;
}