#include <stdio.h>

int sum(int int1, int int2){
	return int1 + int2;
}

int main(){
	int int1, int2;
	int1 = 0;
	int2 = 0;
	printf("Type the first integer you want to sum:\n");
	scanf("%d", &int1);
	printf("Type the second integer you want to sum:\n");
	scanf("%d", &int2);
	printf("%d + %d = %d\n", int1, int2, sum(int1, int2));
	return 0;	
}
