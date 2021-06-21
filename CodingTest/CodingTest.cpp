// CodingTest.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main(void)
{
	int n, answer = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i)
		answer += i;
	printf("%d", answer);
}

/*
#include <stdio.h>

void main(void)
{
}
*/
