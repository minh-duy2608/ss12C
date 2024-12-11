#include <stdio.h>
int ucln(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main() {
    int a, b;
    printf("Nhap vao so nguyen a: ");
    scanf("%d", &a);
    printf("Nhap vao so nguyen b: ");
    scanf("%d", &b);
    printf("Uoc chung lon nhat cua %d va %d la: %d\n", a, b, ucln(a, b));
    return 0;
}
