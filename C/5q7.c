#include<stdio.h>
int main(){
	int celsius;
	float fahreinheit;
	printf("Enter the value of celsius\n");
	scanf("%d",&celsius);
	fahreinheit =celsius*(9/5)+32;
	printf("celsius to fahrinheit is %f",fahreinheit);
	return 0;
}
