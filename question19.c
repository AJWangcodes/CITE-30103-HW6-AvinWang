#include <stdio.h>
int main(void){
	int n;
	printf("Enter n (>=1): ");
	scanf("%d", &n);
	long long sum = 0;
	int i = 1;
	while(i <= n){
		sum+=i;
		i++;
	}
	printf("Sum = %lld\n", sum);
	return 0;
}
