#include<stdio.h>
int main(){
	int n;
	int a=0;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	do{
		printf("The value of a is %d\n",a+1);
		a++;
	}while(a<n);
	return 0;
}
