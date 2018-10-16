#include<stdio.h>
#include<stdlib.h>

int sum(int a ,int b){

	return a+b;
}

int main(){
	int a,b,c;
	printf("Enter 2 numbers\n");
	scanf("%d%d",&a,&b);
	printf("\nSum is %d",sum(a,b));
	return 0;
	}
