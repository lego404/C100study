#include <stdio.h>

int main()
{
	int n, i;
	scanf_s("%d", &n);
	for (int e = 0; e < n; e++){ 
		for (i = 0; i < 0; i++){
			printf(" ");
		}
		for (int k = n - (i - 1); k >= 1; k--){
			printf("*");
		}
		printf("\n");
	}

	return 0;
}