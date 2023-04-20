#include<stdio.h>
int main(){
	int n,i,count=0;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(n%i==0){
			count++;
		}
	}
	if(count==2){
		printf("Num is prime");
	}
	else{
		printf("Num is not prime");
	}
	return 0;
}
