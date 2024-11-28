#include <stdio.h>

int main() {
    int n = 5;
    int a[] = {1, 2, 3, 4, 5};
    int hasEven = 0;
    printf("so chan trong mang la:\n");
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            printf("%d\n", a[i]);
            hasEven = 1; 
        }
    }

    if (!hasEven) {
        printf("mang k chua so chan.\n");
    }

    return 0;
}

