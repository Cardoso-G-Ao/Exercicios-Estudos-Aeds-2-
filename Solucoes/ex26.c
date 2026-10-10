#include <stdio.h>
#include <stdlib.h>

#include <stdlib.h>

void countingSort(int arr[], int n) {
    int i, max = arr[0];

    for (i = 1; i < n; i++)
        if (arr[i] > max) max = arr[i];

    int *count  = calloc(max + 1, sizeof(int));
    int *output = malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
        count[arr[i]]++;


    for (i = 1; i <= max; i++)
        printf(" %d",count[i]);
    printf("\n");

    for (i = 1; i <= max; i++)
        count[i] += count[i - 1];
    
    for (i = n - 1; i >= 0; i--) {
        output[--count[arr[i]]] = arr[i];
    }

    
    for (i = 0; i < n; i++)
        arr[i] = output[i];

    free(count);
    free(output);
}




int main(){
    int vetor[] =  {2, 5, 3, 2, 1};
    int n = 5;
    countingSort(vetor,n);
    return 0;
}