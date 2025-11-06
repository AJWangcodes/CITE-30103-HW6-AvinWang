#include <stdio.h>
int main(void){
	int a,b;
	printf("Enter two integers a and b: ");
	scanf("%d %d", &a, &b);
	printf("Addition: %d + %d = %d\n", a,b,a+b);
        printf("Subtraction: %d - %d = %d\n", a,b,a-b);
        printf("Multiplication: %d * %d = %d\n", a,b,a*b);
        printf("Division: %d / %d = %d\n", a,b,a/b);
        printf("Remainder: %d %% %d = %d\n", a,b,a%b);
	return 0;
}	
