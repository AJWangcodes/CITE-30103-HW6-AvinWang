#include <stdio.h>
int main(void){
	int x, count = 0;
	puts("Enter integers (0 to stop): ");
	do{
		if(scanf("%d", &x) != 1) return 1;
		if(x != 0) count++;
	} while(x != 0);
	printf("Count = %d\n", count);
	return 0;
}
