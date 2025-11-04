#include <stdio.h>
#define PI 3.14159265358979323846
int main(void){
	double rad;
	printf("Enter radius: ");
	scanf("%lf", &rad);
	double area_def = PI * rad * rad;
	double circ_def = 2.0 * PI * rad;

	const double PIc = 3.14159265358979323846;
	double area_con = PIc * rad * rad;
	double circ_con = 2.0 * PIc * rad;
	
	printf("#define PI : area=%.2f circumference=%.2f\n", area_def, circ_def);
	printf("const PI : area=%.2f circumference=%.2f\n", area_con, circ_con);
	return 0;
}
