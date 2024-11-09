#include<stdio.h>
int main()
{
		int n,k=1;
	printf("enter n ");
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		for(int j=n;j>i; j--){
			printf("%d ",k++);
		}
	printf("\n");
	}
	return 0;
}

