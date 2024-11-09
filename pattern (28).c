#include<stdio.h>
int main()
{
		int n,k=64;
	printf("enter n ");
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		k++;
		for(int j=0; j<n-i; j++){
			printf("%c", k);
		}
		printf("\n");
	}
	return 0;
}

