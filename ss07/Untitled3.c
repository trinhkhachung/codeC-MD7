#include <stdio.h>

int main(){
	int a[]={1,2,3,4,5};
	int sum=0;
	int avg =0;
	for(int i=0;i<5;i++){
		sum+=a[i];
		avg=sum/5;
	}
	printf("tong cac phan tu cua mang la:%d\n",sum);
	printf("tb cac phan tu cua mang la:%d",avg);
	return 0;
}
