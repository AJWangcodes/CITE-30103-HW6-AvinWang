#include <stdio.h>
int global_value = 42;

int main(void){
	int local_value = 7;
	printf("Global value = %d\n", global_value);
	printf("Local value = %d\n", local_value);
	return 0;	
}
