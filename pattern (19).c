#include<stdio.h>
int main()
{
		int n;
	printf("enter n ");
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		for(int j=n, k=1;j>i; j--){
			printf("%d ",k++ );
		}
	printf("\n");
	}
	return 0;
}
