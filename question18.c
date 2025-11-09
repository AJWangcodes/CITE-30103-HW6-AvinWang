#include <stdio.h>
int main(void){
	double a, b;
	char oper;
	printf("Enter an arithmatic equation: ");
	scanf("%lf %c %lf", &a, &oper, &b);
	switch(oper){
		case '+': printf("%.6g\n", a + b); break;
		case '-': printf("%.6g\n", a - b); break;
                case '*': printf("%.6g\n", a * b); break;
                case '/':
			if(b==0){
				puts("Error: Division by zero");
				return 1;
			}
			printf("%.6g\n", a / b); break;
		default: puts("Error: Invalid operator used"); return 1;
	}
	return 0;
}
