#include <stdio.h>

int main()
{
	int a, b, c;
	scanf_s("%d%d%d", &a, &b, &c);
	printf("%d \n", a*b*c);

	for (int i = 0; i <= 9; i++){
		int count = 0;

		for (int tmp = a*b*c; tmp > 0; tmp /= 10) //�ڸ��� üũ
		{
			if (tmp % 10 == i)
				count++; //�� �ڸ��� ī���� ���ڸ� �����ϸ� +1
		}

		printf("%d \n", count);
	}

	return 0;
}