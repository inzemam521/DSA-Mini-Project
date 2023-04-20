#include<stdio.h>
int main(){
	int n,i,sum=0,b=n;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	for(i=1; i<=10; i++){
		b=n*i;
		sum=sum+b;
	}
	printf("%d",sum);
	return 0;
}
	
