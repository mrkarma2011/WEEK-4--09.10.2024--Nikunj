#include<stdio.h>
int main()
{
		int n;
	printf("enter n ");
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		for(int j= 0; j<2*(n-1-i); j++){
			printf(" ");
		}
		for(int k = 0; k<2*i+1;k++){
			printf("* ");
		}
		
		
		printf("\n");
	}
	
	for(int i=0; i<n-1; i++){
		printf("  ");
		for(int j= 0; j<2*i; j++){
			printf(" ");
		}
		for(int k =0; k<2*n-2*i-3; k++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
