#include <stdio.h>
int main(void){
	int L, R;
	printf("Enter L and R: ");
	scanf("%d %d", &L, &R);
	if (L > R){
		int t=L; L=R; R=t; 
	}
	
	for (int n = L; n <= R; n++){
		printf("Table of %d\n", n);
        for (int k = 1; k <= 10; k++){
		printf("%d x %d = %d\n", n, k, n*k);
	}
	if (n < R) putchar('\n');
	}
	return 0;
}

