#include <stdio.h>
int isPrime(int n) {
    if (n <= 1) return 0; 
    for (int i = 2; i * i <= n; i++) { 
        if (n % i == 0) return 0; 
    }
    return 1; 
}

void nhapMang(int n, int m, int arr[n][m]) {
    printf("Nhap gia tri cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void inMaTran(int n, int m, int arr[n][m]) {
    printf("Ma tran da nhap:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void inGoc(int n, int m, int arr[n][m]) {
    printf("Cac phan tu o goc cua ma tran: ");
    printf("%d ", arr[0][0]); 
    printf("%d ", arr[0][m-1]); 
    printf("%d ", arr[n-1][0]); 
    printf("%d\n", arr[n-1][m-1]); 
}

void inDuongBien(int n, int m, int arr[n][m]) {
    printf("Cac phan tu tren duong bien cua ma tran: ");
    for (int i = 0; i < m; i++) {
        printf("%d ", arr[0][i]); 
        printf("%d ", arr[n-1][i]); 
    }
    for (int i = 1; i < n-1; i++) {
        printf("%d ", arr[i][0]); 
        printf("%d ", arr[i][m-1]); 
    }
    printf("\n");
}

void inDuongCheo(int n, int m, int arr[n][m]) {
    printf("Cac phan tu tren duong cheo chinh va cheo phu: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i][i]); 
        if (i != m-i-1) { 
            printf("%d ", arr[i][m-i-1]); 
        }
    }
    printf("\n");
}

void inSoNguyenTo(int n, int m, int arr[n][m]) {
    printf("Cac phan tu la so nguyen to trong ma tran: ");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (isPrime(arr[i][j])) {
                printf("%d ", arr[i][j]);
            }
        }
    }
    printf("\n");
}

int main() {
    int n, m, choice;
    printf("Nhap so hang cua ma tran: ");
    scanf("%d", &n);
    printf("Nhap so cot cua ma tran: ");
    scanf("%d", &m);
    int arr[n][m];

    do {
        
        printf("\nMENU:\n");
        printf("1. Nhap gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In ra cac phan tu o goc theo ma tran\n");
        printf("4. In ra cac phan tu nam tren duong bien theo ma tran\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran\n");
        printf("6. In ra cac phan tu la so nguyen to theo ma tran\n");
        printf("7. Thoat\n");

        printf("Chon chuc nang: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                nhapMang(n, m, arr);
                break;
            case 2:
                inMaTran(n, m, arr);
                break;
            case 3:
                inGoc(n, m, arr);
                break;
            case 4:
                inDuongBien(n, m, arr);
                break;
            case 5:
                inDuongCheo(n, m, arr);
                break;
            case 6:
                inSoNguyenTo(n, m, arr);
                break;
            case 7:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (choice != 7); 

    return 0;
}
