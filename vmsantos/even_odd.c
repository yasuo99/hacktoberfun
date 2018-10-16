#include <stdio.h>

void main(){
	printf("\n*****Check wether a number is even or odd*****\n\n\n");
	
	int a;
	
	printf("Enter a number:\n");
	scanf("%d", &a);

	if (a % 2 == 0)
		printf("--->The number you entered is even\n");
	else
		printf("--->The number you entered is odd\n");
}
