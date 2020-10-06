#include <stdio.h>

int main()
{
	int input, count = 1;
	scanf_s("%d", &input);

	for (int tmp = input % 10 * 10 + (input / 10 + input % 10) % 10; tmp != input;
		tmp = tmp % 10 * 10 + (tmp / 10 + tmp % 10) % 10)
	{
		count++;
	}
	printf("%d \n", count);
	
	return 0;

}