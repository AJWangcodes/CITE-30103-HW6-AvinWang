#include <stdio.h>
int main(void){
	int score;
	printf("Enter score (0-100): ");
	scanf("%d", &score);
	if(score>=90) puts("A");
	else if(score>=80) puts("B");
	else if(score>=70) puts("C");
	else if(score>=60) puts("D");
	else puts("F");
	return 0;
}
