// CodingTest.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#include <stdio.h>
#include <vector>
struct Data
{
	int A, B;
};

int main(void)
{
	int n;
	std::vector<Data> datas;
	scanf("%d", &n);
	datas.reserve(n);
	for (int i = 0; i < n; ++i)
	{
		Data data;
		scanf("%d %d", &data.A, &data.B);
		datas.push_back(data);
	}

	for (int i = 0; i < datas.size(); ++i)
	{
		printf("%d\n", datas[i].A + datas[i].B);
	}
}


/*
int main()
{
	return 0;
}
*/
