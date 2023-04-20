#include<stdio.h>
float average();//(int a,int b,int c);
int main(){
	int a,b,c;
	float z;
	printf("Enter the value of three no\n");
	scanf("%d%d%d",&a,&b,&c);
	z=average(a,b,c);
	printf("The value of average is %f\n",z);
	return 0;
}
float average(int a, int b, int c){
    float average;
	average=(a+b+c)/3.0;
	return average;
}
