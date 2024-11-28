#include <stdio.h>

int main(){
	int a[5];
	for(int i=0;i<5;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("gia tri cac phan tu trong mang la:\n");
	for(int i=0 ;i<5;i++){
		printf("%d\t",a[i]);
	}
}
