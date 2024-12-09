#include <stdio.h>
void printArray(int arr[], int size) {
    for (int i = 0; i<size; i++) {
        printf("%d ", arr[i]); 
    }
    printf("\n"); 
}

int main() {
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]); 
    printf("Cac phan tu trong mang la: ");
    printArray(arr, size); 
    return 0;
}
