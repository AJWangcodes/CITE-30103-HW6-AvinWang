#include <stdio.h>
int main(void){
	int n;
	printf("Enter an integer: ");
	scanf("%d", &n);
	const char *label = (n > 0) ? "positive" : ((n < 0) ? "negative" : "zero");
	printf("%d is %s\n", n, label);
	return 0;
}
