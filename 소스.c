#include <stdio.h>

int main()
{
	int n;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++){
		for (int s = 1; s <= i; s++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}