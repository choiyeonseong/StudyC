/*
	��Ʈ�Ͻ� ȸ�� ���� ���α׷�
	�ű�ȸ�� ����� ȸ�� ��ȣ�� �̸�, ü���� �Է��ϰ�, heap������ �����Ѵ�.
	ȸ����ȣ�� ������ �Է��ϸ� �Է��� ����Ǹ�,
	�� ȸ����, ��� ü��, �ְ� ü���� ���� ȸ���� ������ ��µȴ�.
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

Fitness* ary[100];		// ������ �迭 ����
void total_number(int count);						// ��ü ��� ȸ�� �� ��ȯ
double average_weight(Fitness** pary, int count);	// ��� ü�� ��ȯ
int max_weight(Fitness** pary, int count);			// �ִ� ü�� ȸ���� index ��ȯ		
void print_info(Fitness** pary, int index);			// ȸ�� ���� ���	
void free_ary(Fitness** pary, int count);			// ���� �Ҵ� ���� ����	

void new_member(int num, char* name, double weight);	// �ű�ȸ�� �߰�

static int count = 0;	// ��ü ȸ����

int main() 
{
	// �Է¹ޱ� ���� �ӽ� ����
	int num;
	char name[20];
	double weight;

	while (1)
	{
		printf("ȸ����ȣ : ");
		scanf("%d", &num);

		if (num < 0)	// ���� �Է��ϸ� ����
		{
			printf("�Է� ����\n");
			break;
		}
		else
		{
			printf("ȸ���̸� : ");
			scanf("%s", name);
			printf("ȸ�� ������ : ");
			scanf("%lf", &weight);
			putchar('\n');

			new_member(num, name, weight);	// �ű� ȸ�� �߰�

			total_number(count);	// �� ȸ�� ��

			printf("��� ü�� : %.2lf\n", average_weight(ary, count));	// ��� ü�� ��ȯ

			// �ִ� ü�� ȸ��
			int max_index = max_weight(ary, count);
			printf("�ְ� ü�� ȸ�� : %s -> %.2lf\n", ary[max_index]->name,ary[max_index]->weight);		

			// ��ü ȸ�� ���� ���
			for (int i = 0; i < count; i++)
			{
				print_info(ary, i);
			}

			printf("����Ϸ��� Ű���� �Է�\n");
			getchar();
			getchar();
			system("cls");
		}
	}
	// ���� �Ҵ� ����
	free_ary(ary, count);
}


// �����Ҵ� ���� ����
void free_ary(Fitness** pary, int count) 
{
	for (int i = 0; i < count; i++)
	{
		free(pary[i]);
	}
	printf("\n���� �Ҵ� ����\n");
}

// ȸ�� ���� ���
void print_info(Fitness** pary, int index) 
{
	printf("****************\n");
	printf("ȸ�� ��ȣ : %d\n", pary[index]->num);
	printf("ȸ�� �̸� : %s\n", pary[index]->name);
	printf("ȸ�� ������ : %.2lf\n", pary[index]->weight);
}

// �ִ� ü�� ȸ���� index��ȯ
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

// ��� ü�� ��ȯ
double average_weight(Fitness** pary, int count) 
{
	double sum = 0;
	for (int i = 0; i < count; i++)
	{
		sum += pary[i]->weight;
	}
	return sum / count;
}

// ��ü ��� ȸ�� �� ��ȯ
void total_number(int count) 
{
	printf("�� ȸ���� : %d\n", count);
}

// �ű� ȸ�� �߰�
void new_member(int num, char* name, double weight) 
{
	// �ߺ� Ȯ��
	// �ߺ��Ǹ� ȸ�� �߰� ���� ����
	for (int i = 0; i < count; i++)
	{
		if (ary[i]->num == num || strcmp(ary[i]->name, name) == 0) 
		{
			printf("ȸ�� ��ȣ�� �̸� �ߺ�\n");
			return;
		}
	}

	ary[count] = malloc(sizeof(Fitness));	// ���� �Ҵ�
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
//		printf("1 : ȸ�����\n");
//		printf("2 : ��ü ȸ�� ��\n");
//		printf("3 : ȸ�� ��� ������\n");
//		printf("4 : �ִ� ü�� ȸ�� ��ȣ\n");
//		printf("5 : ��ü ȸ�� ����\n");
//		printf("6 : ȸ�� ��ü ����\n");
//		printf("-1 : ���α׷� ����\n$ ");
//
//		scanf("%d", &menu);
//		if (menu < 0)
//		{
//			printf("���α׷� ����\n");
//			exit(0);
//		}
//		else
//		{
//			switch (menu)
//			{
//			case 1:
//				printf("ȸ����ȣ : ");
//				scanf("%d", &num);
//				printf("ȸ���̸� : ");
//				scanf("%s", name);
//				printf("ȸ�� ������ : ");
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
//				printf("��� ������ : %.2lf\n", average_weight(ary, count));
//				break;
//			case 4:
//				system("cls");
//
//				printf("�ִ� ü�� ȸ�� ��ȣ : %d\n", max_weight(ary, count));
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
//				printf("������ ���� �ƴմϴ�.\n");
//				break;
//			}
//		}
//	}
//}