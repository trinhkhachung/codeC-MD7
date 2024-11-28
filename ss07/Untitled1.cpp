#include <stdio.h>

int main(){
	int n=5;
	int a[]= {2,7,9,1,0};
	int length = sizeof a/sizeof(int);
	for(int i=0 ;i<n;i++){
		printf("%d\n",a[i]);
	}
	printf("do dai cua mang la %d",length);
	return 0;
}
