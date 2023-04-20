#include<stdio.h>
int main(){
	int n;
	int i;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	for(i=1; i<=10; i++){
	printf("Multiplication of %d*%d=%d\n",n,i,n*i);
    }
	return 0;
}
