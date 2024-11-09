#include<stdio.h>
int main()
{
		int n,l,p,f;
	printf("enter rows  ");
	scanf("%d",&n);
	
	f=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<i+1;j++){
			printf("%d*", f);
		}
		f++;
		printf("\b \b"); printf("\n"); 
	}
	
	for(int i=0; i<n; i++){
		f--;
		for(int j=n;j>i; j--){
			printf("%d*", f);
		
		}
		
 	printf("\b \b");	printf("\n");
	}
	return 0;
}
