#include <stdio.h>
int main(void){
	int a,b;
	printf("Enter two integers a and b: ");
	scanf("%d %d", &a, &b);
	int intDiv = a/b;

	double explDiv = (double)a/b;
	double implDiv = a/(b*1.0);

	printf("Integer divison: %d\n", intDiv);
	printf("Floating (explicit) divison: %.6f\n", explDiv);
	printf("Floating (implicit) divison: %.6f\n", implDiv);
	return 0;
}
