#include <stdio.h>
void selectionSort(int arr[], int n) {
    int i, j, min_idx, temp;
    for (i = 0; i < n - 1; i++) {
      
        min_idx = i;
       
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        
        if (min_idx != i) {
            temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
        printf("Passada i=%d: menor na posicao %d ->", i, min_idx);
        for (int k = 0; k < n; k++) {
            printf(" %d", arr[k]);
        }
        printf("\n");
    }
}
int main(){
    int vet[] = {5,2,4,1,3};
    int n = 5;
    selectionSort(vet,n) ;
    for(int i = 0; i < n;i++){
        printf(" %d",vet[i]);
    }
    return 0;
}