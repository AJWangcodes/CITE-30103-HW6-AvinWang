#include <stdio.h>
int main(void){
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	int ok = (n % 2 == 0) && (n % 3 == 0) && !(n % 7 == 0);
	printf("Divisible by 2 and 3 but not 7? %s\n", ok ? "YES" : "NO");
	return 0;
}
