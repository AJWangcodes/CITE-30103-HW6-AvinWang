#include <stdio.h>
int main(void){
	double length, width;
	printf("Enter length and width: ");
	if(scanf("%lf %lf", &length, &width) != 2){
		printf("Invalid input\n");
		return 3;
	}
	double area = length * width;
	double perim = 2.0 * (length+width);
	printf("Area = %.2f\nPerimeter = %.2f\n", area, perim);
	return 0;
}
