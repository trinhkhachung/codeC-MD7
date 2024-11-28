#include <stdio.h>

int main() {
    int n = 5;
    int a[] = {12, 7, 9, 21, 4}; 
	
    for (int i = 1; i < n; i++) {
        if(a[i]%2==0){
        	a[i]+=3;
		}else{
			a[i]+=2;
		}
    }
	printf("mang sau khi thay doi la:\n");
	for(int i = 0;i<n;i++){
		printf("%d ", a[i]);
	}


    return 0;
}

