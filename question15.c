#include <stdio.h>
int main(void){
	int m1, m2, m3, m4, m5;
	printf("Enter five marks: ");
	if (scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5) != 5) return 1;
	int pass = (m1 >= 40) && (m2 >= 40) && (m3 >= 40) && (m4 >= 40) && (m5 >= 40);
	puts(pass ? "PASS" : "FAIL");
	return 0;
}
