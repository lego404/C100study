#include <stdio.h>

int main()
{
	int n;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++){
		for (int k = n - (i - 1); k >= 1; k--){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}