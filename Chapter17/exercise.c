/*
5���� ������̵�, ����̸�, �Ѵޱ޿��� �Է¹޾� ����� ��
5�� ����� �޿� �Ѿװ� �޿����� ���Ͻÿ�.
(�̸��� ���� �Ҵ翡 �����Ѵ�.)

�Է°�:
101 ȫ�浿 1500
102 ����� 2300
103 �ѽŵ� 1800
104 ��游 4500
105 ��ȣ�� 2500
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct employee {
	int id;		// �����ȣ
	char* name;	// ����̸�
	int salary;	// �޿�
}Employee;

int main()
{
	int N = 5;
	int i, sum = 0;
	char tmp[20];

	Employee* people;
	people = malloc(sizeof(Employee) * N);
	if (people == NULL)
	{
		printf("�޸� ����");
		exit(1);
	}

	for (i = 0; i < N; i++)
	{
		scanf("%d %s %d", &people[i].id, tmp, &people[i].salary);
		
		(people + i)->name = (char *)malloc(strlen(tmp) + 1);	// +1 �ι��� �ڸ�, ���ڿ��� ���� : strlen
		if ((people + i)->name == NULL)
		{
			printf("�޸� ����");
			exit(1);
		}
		strcpy((people + i)->name, tmp);
	}

	for (i = 0; i < N; i++)
	{
		printf("��� ���̵� : %d	��� �̸� : %s	�޿� : %d\n", (people + i)->id, (*(people + i)).name, people[i].salary);
		sum += (people + i)->salary;
		free(people[i].name);	// ���� �Ҵ� �ݳ�
	}

	printf("�޿� �Ѿ� : %d	��� �޿��� : %.2lf", sum, (double)sum / N);

	return 0;
}