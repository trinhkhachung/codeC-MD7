#include <stdio.h>
#include <math.h>

int main() {
    int n, isPrime = 1;
    printf("moi nhap so: ");
    scanf("%d", &n);

    if (n <= 1) isPrime = 0; 
    for (int i = 2; i <= sqrt(n) && isPrime; i++) {
        if (n % i == 0) isPrime = 0;
    }

     if (isPrime) {
        printf("%d la so nguyen to\n", n);
    } else {
        printf("%d ko phai la so ngto\n", n);
    }
    return 0;
}

