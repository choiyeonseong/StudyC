#include<stdio.h>

struct list				// 자기 참조 구조체
{
	int num;
	struct list* next;	// 구조체 자신을 가리키는 포인터 멤버
};

int main()
{
	struct list a = { 10,0 }, b = { 20,0 }, c = { 30,0 };
	struct list* head = &a, * current;	// 헤드 포인터 초기화

	a.next = &b;
	b.next = &c;

	printf("head->num : %d\n", head->num);	
	printf("head->next->num : %d\n", head->next->num);

	printf("list all : ");
	current = head;
	while (current != NULL)	// 마지막 구조체 변수까지 출력하면 반복 종료
	{
		printf("%d ", current->num);
		current = current->next;
	}
	printf("\n");

	return 0;
}