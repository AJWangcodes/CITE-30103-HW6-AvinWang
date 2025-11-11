#include <stdio.h>
int main(void){
	int n;
	printf("Enter a positive integer: ");
	scanf("%d", &n);
	int temp = n, rev = 0;
	if(temp==0) rev = 0;
	while(temp>0){
		rev = rev*10+(temp%10);
		temp /=10;
	}
	printf("Input: %d\nReversed: %d\n", n, rev);
	return 0;
}
