#include<stdio.h>
int main()
{
		int n;
	printf("enter n ");
	scanf("%d",&n);
	for(int i=0; i<n-1; i++){
		for(int j= 0; j<i+1; j++){
			printf(" ");
		}printf("*");
		for(int k =0; k<2*n-2*i-3; k++){
			printf("-");
		}
		printf("*");
		printf("\n");
	}
	for(int s=0 ; s<n; s++)
	printf(" ");
	printf("*");
	
	return 0;
}

