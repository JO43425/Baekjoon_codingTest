/*
2739번
N을 입력받은 뒤, 구구단 N단을 출력하는 프로그램을 작성하시오. 출력 형식에 맞춰서 출력하면 된다.
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

10950번
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
숏코딩 공략 - 입력 받자마자 출력시키므로 FOR문 한번을 더 감소 시킬수 있음
나의 첫 풀이 전략의 차고 - 입력 한번에 받고 출력 한번에 하는 방식으로 오인 그래서 FOR문 두번 사용
하지만 실무적인 데이터처리는 내 방식이 나을 수 있음
#include <stdio.h>
int main()
{
	int n,a,b;
	scanf("%d", &n);
	while(n--)
	{
		scanf("%d %d",&a ,&b);
		printf("%d\n", a+b);
	}
}

8393	합
n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.
숏코딩 전략 -> 합계를 구하는 수학공식 N*(N+1)/2 를 사용하여 최적화 가능
#include <stdio.h>

int main(){
	int N;
	scanf("%d",&N);
	printf("%d\n",N*(N+1)/2);
}
*/