#include <stdio.h>

int main()
{
	int a, b, c;
	scanf_s("%d%d%d", &a, &b, &c);
	printf("%d \n", a*b*c);

	for (int i = 0; i <= 9; i++){
		int count = 0;

		for (int tmp = a*b*c; tmp > 0; tmp /= 10) //자릿수 체크
		{
			if (tmp % 10 == i)
				count++; //각 자릿수 카운팅 숫자를 만족하면 +1
		}

		printf("%d \n", count);
	}

	return 0;
}