/*
//���� 1330
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

���� 9498 ���� ����
�ع� : 10���� ���� ��������ŭ ���ڿ� �ε����� ������̺�
char a[10] = "KOREA";  a[4]�� ���ڿ� ��� ��� ���� ��
#include<cstdio>
int main() {int a;scanf("%d",&a);printf("%c","FFFFFFDCBAA"[a/10]);}


���� 2753 	���� 
���ǹ� ���ٿ� �� ���߱�
#include <stdio.h>
int Y;
int main(void) 
{
  scanf("%d", &Y);
  printf("%d", (Y%4==0)&&(Y%100!=0||Y%400==0));
}

���� 14681 ��и� ����
�ع� Y < 2������ 2���� ���� X < 0 ������ 1������ 
0-3 ���̰��� ���ڿ� �ε���ȭ
#include <stdio.h>
int main() { const char* a = "1243"; int x, y; scanf("%d%d", &x, &y); printf("%c", a[(y < 0) * 2 + (x < 0)]); }


���� 2884 �˶��ð�
�ع� ������ ��ȯ ���, ���� �ð����� ȯ��
#include <cstdio>
main()
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	c = a*60 + b - 45 + 60*24;
	printf("%d %d", c/60%24, c%60);
}

���� 15552��
���� A+B
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
N ���
#include <stdio.h>

int main(void)
{
	int n; scanf("%d", &n);  for (int i = 1; i <= n; ++i) printf("%d\n", i); return 0;
}

Q2742 ��
���� N
#include <stdio.h>

int main(void)
{
	int n; scanf("%d", &n);  while (n) { printf("%d\n", n); n--; } return 0;
}
*/