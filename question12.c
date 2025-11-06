#include <stdio.h>
int main(void){
	int a=5, b=3, res;
	res = a+b<<1;
	printf("original: a + b << 1 = %d\n", res);
	
	res = a+(b<<1);
        printf("fix 1: a + (b << 1) = %d\n", res);
	
	res = a+b*2;
        printf("fix 2: a + b * 2 = %d\n", res);

	return 0;
}
