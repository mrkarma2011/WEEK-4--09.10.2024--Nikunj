#include<stdio.h>
int main()
{
		int n;
	printf("enter n ");
	scanf("%d",&n);
for(int i=0; i<n;i++){
	for(int s =0; s<n-i-1; s++){
		printf(" ");
	}
	for(int j =0; j<i+1; j++){
		if(i%2==0)
		printf("*");
		else
		printf("-");
	}
printf("\n");
}
if(n%2!=0){

for(int i=0; i<n-1; i++){
	for(int s=0; s<i+1; s++){
		printf(" ");
	}
	for(int j=0; j<n-i-1; j++){
		if(i%2==0)
		printf("-");
		else
		printf("*");
	}
printf("\n");
}}
else {
	for(int i=0; i<n-1; i++){
	for(int s=0; s<i+1; s++){
		printf(" ");
	}
	for(int j=0; j<n-i-1; j++){
		if(i%2==0)
		printf("*");
		else
		printf("-");
	}
	printf("\n");
}
	return 0;
}}

