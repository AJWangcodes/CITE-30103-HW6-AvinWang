#include <stdio.h>
int main(void){
	char c = 'A';
	int i = 42;
	long int li = 42L;
	float f = 3.14f;
	double d = 2.718;

	printf("Size of c (char) = %zu bytes\n", sizeof c);
        printf("Size of i (int) = %zu bytes\n", sizeof i);
        printf("Size of li (long int) = %zu bytes\n", sizeof li);
        printf("Size of f (float) = %zu bytes\n", sizeof f);
        printf("Size of d (double) = %zu bytes\n", sizeof d);
	return 0;
}
