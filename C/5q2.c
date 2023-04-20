#include<stdio.h>
void gm();
void ga();
void gn();
int main(){
	gm();
	return 0;
}
void gm(){
	printf("gm Inzemam\n");
	ga();
}
void ga(){
	printf("ga Inzemam\n");
	gn();
}
void gn(){
	printf("gn Inzemam\n");
}
