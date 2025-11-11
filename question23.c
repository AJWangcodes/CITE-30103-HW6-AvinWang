#include <stdio.h>
int main(void){
int x, pos=0, neg=0, ev=0, od=0;
puts("Enter integers (0 to stop):");
do{
	if (scanf("%d", &x) != 1) return 1;
	if (x == 0) break;
	if (x > 0) pos++; else neg++;
	if (x % 2 == 0) ev++; else od++;
}while (1);
printf("Positives: %d\nNegatives: %d\nEvens: %d\nOdds: %d\n", pos, neg, ev, od);
return 0;
}
