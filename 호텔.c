#include <stdio.h>

int main()
{
	int T;
	scanf_s("%d", &T);

	//T 개의 테스트 케이스를 동작
	for (int i = 0; i < T; i++){
		int H, W, N;
		scanf_s("%d%d%d", &H, &W, &N);

		int res;
		//꼭대기층의 경우 
		if (N % H == 0)
			res = H * 100 + N / H;
		else
		res = N%H * 100 + N / H + 1;

		printf("%d", res);
	}
	return 0;
}