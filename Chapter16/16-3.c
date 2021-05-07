#include<stdio.h>
int main()
{
	int* pi;		// 할당한 저장 공간을 연결할 포인터
	int size = 5;	// 한 번에 할당할 저장공간의 크기, int형 변수 5개씩
	int count = 0;	// 현재 입력된 양수 개수
	int num;		// 양수를 입력할 변수
	int i;			// 반복 제어 변수

	pi = (int*)calloc(size, sizeof(int));	// 먼저 5개의 저장공간 할당, 0으로 초기화되어있음
	while (1)
	{
		printf("양수만 입력하세요 =>");
		scanf("%d", &num);
		if (num <= 0) break;
		if (count == size)	// 저장공간을 모두 사용하면
		{
			size += 5;	// 크기를 늘려서 재할당
			pi = (int*)realloc(pi, size * sizeof(int));	// 기존 저장 공간의 크기 조절
			// 메모리 누수에 대한 대비가 안되어있음 => 안좋은 코드
		}
		pi[count++]=num;
	}
	for (i = 0; i < count; i++)
	{
		printf("%5d", pi[i]);
}
	free(pi);	// 동적 할당 저장공간 반납

	return 0;
}