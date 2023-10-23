/*#include <stdio.h>

void mergeSortedArrays(int arr1[], int m, int arr2[], int n, int result[]) {
    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            result[k] = arr1[i];
            i++;
        } else {
            result[k] = arr2[j];
            j++;
        }
        k++;
    }

    // Eğer bir dizi diğerinden daha uzunsa, kalan elemanları sonuç dizisine ekleyin
    while (i < m) {
        result[k] = arr1[i];
        i++;
        k++;
    }

    while (j < n) {
        result[k] = arr2[j];
        j++;
        k++;
    }
}

int main() {
    int arr1[] = {1, 3, 8, 10};
    int m = 4;
    int arr2[] = {2, 9 };
    int n = 2;

    int result[m + n];

    mergeSortedArrays(arr1, m, arr2, n, result);

    printf("Merged and sorted array: ");
    for (int i = 0; i < m + n; i++) {                                
        printf("%d ", result[i]);
    }

    return 0;
}
*/

#include <stdio.h>

void merge2sortedarr(int arr1[], int m, int arr2[], int n, int result[]){
    int i=0, j=0, k=0;
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            result[k]=arr1[i];
            i++;
        }else{
            result[k]=arr2[j];
            j++; 
        }
        k++;
    }
    if(i!=m){
        while(i<=m){
            result[k]=arr1[i];
            i++;
            k++;
        }
    }else{
        while(j<=n){
            result[k]=arr2[j];
            j++;
            k++;
        }
    }
}

int main(){
    int arr1[]={1,3,6,7};
    int m=4;
    int arr2[]={2,4,5};
    int n=3;
    int result[m+n];
    merge2sortedarr(arr1, m, arr2, n, result);

    printf("Sorted and merged array : ");
    for(int i=0; i<m+n; i++){
        printf(" %i ",result[i]);
    }
}




















