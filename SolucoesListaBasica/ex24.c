#include <stdio.h>
#include <stdlib.h>

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
        printf("Passada i=%d:", i);
        for (int k = 0; k < n; k++) {
            printf(" %d", arr[k]);
        }
        printf("\n");
    }
}

int main(){
    int vet[] = {5,2,4,1,3};
    int n = 5;
    insertionSort(vet,n);
    for(int i = 0 ; i < n; i++){
        printf(" %d",vet[i]);
    }
    return 0;
}