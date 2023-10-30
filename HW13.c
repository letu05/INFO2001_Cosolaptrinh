#include <stdio.h>

int calculate_sum_of_squares(int n) {
    if (n <= 0) {
        return -1;
    }
    
    int sum = 0;
    int i;
    for (i = 1; i <= n; i++) {
        sum += i * i;
    }
    
    return sum;
}

int main() {
    int n;
    printf("Nhap gia tri cua n: ");
    scanf("%d", &n);
    
    int sum = calculate_sum_of_squares(n);
    
    if (sum == -1) {
        printf("INVALID\n");
    } else {
        printf("Tong S = %d\n", sum);
    }
    
    return 0;
}
