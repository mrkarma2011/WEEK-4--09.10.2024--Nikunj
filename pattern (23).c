#include<stdio.h>
int main()
{
		int n;
			int k=0;
	printf("enter n ");
	scanf("%d",&n);
	for(int i=1; i<=n; i++){
	
		k++;
		if(i%2==0){
			printf("%d",k+1);
			for(int j=0; j<6;j++)
			printf("%d", k);
		
		}
		else{
			for(int j=0; j<6;j++)
			printf("%d", k);
		printf("%d",k+1);
		}
		
		printf("\n");
	}
	return 0;
}

