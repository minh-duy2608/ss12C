#include <stdio.h>


void nhapMaTran(int m, int n, int arr[m][n]){
    printf("Nhap cac phan tu cua ma tran (%d x %d):\n", m, n);
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void inMaTran(int m, int n, int arr[m][n]){
    printf("Ma tran vua nhap la:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int m, n;
    printf("Nhap so hang cua ma tran: ");
    scanf("%d", &m);
    printf("Nhap so cot cua ma tran: ");
    scanf("%d", &n);
    int arr[m][n];
    nhapMaTran(m, n, arr);
    inMaTran(m, n, arr);
    return 0;
}
