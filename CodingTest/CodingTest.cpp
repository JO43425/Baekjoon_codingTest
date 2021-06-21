// CodingTest.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#include <stdio.h>
int main(void)
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i < 10; ++i)
	{
		printf("%d * %d = %d\n", n, i, n*i);
	}
}


/*
int main()
{
	return 0;
}
*/
