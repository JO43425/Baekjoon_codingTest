/*
//문제 1330
#include <iostream>
#include <stdio.h>
int main()
{
	int a, b;
	scanf_s("%d %d", &a,&b);

	if (a == b)
	{
		printf("==\n");
	}
	else if (a > b)
	{
		printf(">\n");
	}
	else
	{
		printf("<\n");
	}
	return 0;
}

문제 9498 시험 성적
해법 : 10으로 나눈 점수값만큼 문자열 인덱스로 룩업테이블
char a[10] = "KOREA";  a[4]의 문자열 출력 방식 같은 것
#include<cstdio>
int main() {int a;scanf("%d",&a);printf("%c","FFFFFFDCBAA"[a/10]);}


문제 2753 	윤년 
조건문 한줄에 잘 맞추기
#include <stdio.h>
int Y;
int main(void) 
{
  scanf("%d", &Y);
  printf("%d", (Y%4==0)&&(Y%100!=0||Y%400==0));
}

문제 14681 사분면 고르기
해법 Y < 2작으면 2점분 가산 X < 0 작으면 1점가산 
0-3 사이값을 문자열 인덱스화
#include <stdio.h>
int main() { const char* a = "1243"; int x, y; scanf("%d%d", &x, &y); printf("%c", a[(y < 0) * 2 + (x < 0)]); }


문제 2884 알람시계
해법 분으로 전환 계산, 이후 시간으로 환산
#include <cstdio>
main()
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	c = a*60 + b - 45 + 60*24;
	printf("%d %d", c/60%24, c%60);
}

문제 15552번
빠른 A+B
#include <stdio.h>

int main(void)
{
	int T, A, B;
	scanf("%d", &T);

	for (int i = 0; i < T; ++i)
	{
		scanf("%d %d", &A, &B);
		printf("%d\n", A + B);
	}

	return 0;
}

Q2742
N 찍기
#include <stdio.h>

int main(void)
{
	int n; scanf("%d", &n);  for (int i = 1; i <= n; ++i) printf("%d\n", i); return 0;
}

Q2742 번
기찍 N
#include <stdio.h>

int main(void)
{
	int n; scanf("%d", &n);  while (n) { printf("%d\n", n); n--; } return 0;
}
*/