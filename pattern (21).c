#include<stdio.h>
int main()
{
		int n,l,p,f;
	printf("enter rows  ");
	scanf("%d",&n);
	printf("enter starting number ");
	scanf("%d", &l);
	f=l;
	for(int i=0;i<n;i++){
		for(int j=0;j<i+1;j++){
			printf("%d ", f);
		}
		f++;
		printf("\n");
	}
	
	for(int i=0; i<n; i++){
		f--;
		for(int j=n;j>i; j--){
			printf("%d ", f);
		
		}
		
	printf("\n");
	}
	return 0;
}
