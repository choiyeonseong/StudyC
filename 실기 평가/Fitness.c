/*
	휘트니스 회원 관리 프로그램
	신규회원 등록은 회원 번호와 이름, 체중을 입력하고, heap영역에 저장한다.
	회원번호로 음수를 입력하면 입력이 종료되며,
	총 회원수, 평균 체중, 최고 체중을 갖는 회원의 정보가 출력된다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

typedef struct
{
	int num;
	char name[20];
	double weight;
}Fitness;

Fitness* ary[100];		// 포인터 배열 선언
void total_number(int count);						// 전체 등록 회원 수 반환
double average_weight(Fitness** pary, int count);	// 평균 체중 반환
int max_weight(Fitness** pary, int count);			// 최대 체중 회원의 index 반환		
void print_info(Fitness** pary, int index);			// 회원 정보 출력	
void free_ary(Fitness** pary, int count);			// 동적 할당 영역 해제	

void new_member(int num, char* name, double weight);	// 신규회원 추가

static int count = 0;	// 전체 회원수

int main()
{
	// 입력받기 위한 임시 변수
	int num;
	char name[20];
	double weight;

	while (1)
	{
		printf("회원번호 : ");
		scanf("%d", &num);

		if (num < 0)	// 음수 입력하면 종료
		{
			printf("입력 종료\n");
			break;
		}
		else
		{
			printf("회원이름 : ");
			scanf("%s", name);
			printf("회원 몸무게 : ");
			scanf("%lf", &weight);
			putchar('\n');

			new_member(num, name, weight);	// 신규 회원 추가

			total_number(count);			// 총 회원 수

			printf("평균 체중 : %.2lf\n", average_weight(ary, count));	// 평균 체중 반환

			// 최대 체중 회원
			int max_index = max_weight(ary, count);
			printf("최고 체중 회원 : %s -> %.2lf\n", ary[max_index]->name, ary[max_index]->weight);

			// 전체 회원 정보 출력
			for (int i = 0; i < count; i++)
			{
				print_info(ary, i);
			}

			printf("\n계속하려면 키보드 입력\n");
			getchar();
			getchar();
			system("cls");
		}
	}
	// 동적 할당 해제
	free_ary(ary, count);
}

// 동적할당 영역 해제
void free_ary(Fitness** pary, int count)
{
	for (int i = 0; i < count; i++)
	{
		free(pary[i]);
	}
	printf("\n동적 할당 해제\n");
}

// 회원 정보 출력
void print_info(Fitness** pary, int index)
{
	printf("****************\n");
	printf("회원 번호 : %d\n", pary[index]->num);
	printf("회원 이름 : %s\n", pary[index]->name);
	printf("회원 몸무게 : %.2lf\n", pary[index]->weight);
}

// 최대 체중 회원의 index반환
int max_weight(Fitness** pary, int count)
{
	int max = 0;
	for (int i = 1; i < count; i++)
	{
		if (pary[i]->weight > pary[max]->weight)
		{
			max = i;
		}
	}
	return max;
}

// 평균 체중 반환
double average_weight(Fitness** pary, int count)
{
	double sum = 0;
	for (int i = 0; i < count; i++)
	{
		sum += pary[i]->weight;
	}
	return sum / count;
}

// 전체 등록 회원 수 반환
void total_number(int count)
{
	printf("총 회원수 : %d\n", count);
}

// 신규 회원 추가
void new_member(int num, char* name, double weight)
{
	// 중복 확인
	// 중복되면 회원 추가 되지 않음
	for (int i = 0; i < count; i++)
	{
		if (ary[i]->num == num || strcmp(ary[i]->name, name) == 0)
		{
			printf("회원 번호나 이름 중복\n");
			return;
		}
	}

	ary[count] = malloc(sizeof(Fitness));	// 동적 할당
	if (ary[count] != NULL)
	{
		ary[count]->num = num;
		strcpy(ary[count]->name, name);
		ary[count]->weight = weight;

		count++;
	}
}

//int main()
//{
//	int num;
//	char name[20];
//	double weight;
//
//	while (1)
//	{
//		int menu = 0;
//
//		printf("1 : 회원등록\n");
//		printf("2 : 전체 회원 수\n");
//		printf("3 : 회원 평균 몸무게\n");
//		printf("4 : 최대 체중 회원 번호\n");
//		printf("5 : 전체 회원 정보\n");
//		printf("6 : 회원 전체 삭제\n");
//		printf("-1 : 프로그램 종료\n$ ");
//
//		scanf("%d", &menu);
//		if (menu < 0)
//		{
//			printf("프로그램 종료\n");
//			exit(0);
//		}
//		else
//		{
//			switch (menu)
//			{
//			case 1:
//				printf("회원번호 : ");
//				scanf("%d", &num);
//				printf("회원이름 : ");
//				scanf("%s", name);
//				printf("회원 몸무게 : ");
//				scanf("%lf", &weight);
//				new_member(num, name, weight);
//
//				break;
//			case 2:
//				total_number(count);
//				break;
//			case 3:
//				system("cls");
//
//				printf("평균 몸무게 : %.2lf\n", average_weight(ary, count));
//				break;
//			case 4:
//				system("cls");
//
//				printf("최대 체중 회원 번호 : %d\n", max_weight(ary, count));
//				break;
//			case 5:
//				system("cls");
//				for (int i = 0; i < count; i++)
//				{
//					print_info(ary, i);
//				}
//				break;
//			case 6:
//				free_ary(ary, count);
//				break;
//			default:
//				printf("정해진 값이 아닙니다.\n");
//				break;
//			}
//		}
//	}
//}