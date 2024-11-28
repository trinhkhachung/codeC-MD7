#include <stdio.h>

int main() {
    int n = 5;
    int a[] = {12, 7, 9, 21, 4}; 
    int max = a[0];
    int min = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i]; 
        }
        if (a[i] < min) {
            min = a[i]; 
        }
    }

  
    printf("max: %d\n", max);
    printf("min: %d\n", min);

    return 0;
}

