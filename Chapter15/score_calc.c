/*
	5�� 6�� 1���� �����ڸ��� �ڵ� �ʹ���
	1. 5�� �л��� ����, ����, ����, ü�������� �Է¹޴´�.
	2. ���κ� ������ ����� ���Ѵ�.
	3. �׸��� ������ ������ ��յ� ���Ͻÿ�

	�Է°� :
	50 60 45 65
	80 75 60 45
	95 90 95 90
	100 45 55 100
	65 70 80 60
*/
#include<stdio.h>

// ���κ�
void personal_score(int(* ppa)[4],int col,int row);

// ����
//void subject_score(int** ppa, int col, int row);

// ����Լ�
void print(int* pa,int size);

// ��ġ ��� �Լ�
void reverse_array(int(*ppa)[4], int col, int row);

int main()
{
	int student[5][4];	// 2���� �迭�� ����
	printf("���� �Է� :\n$ ");

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			scanf("%d", &student[i][j]);
		}
	}
	int subjects = sizeof(student[0]) / sizeof(student[0][0]);	//4
	int students = sizeof(student) / sizeof(student[0]);		//5

	printf("*********�л�������*********\n");
	personal_score(student, students, subjects);				// �迭���� �μ��� �ְ� �Լ� ȣ��

	reverse_array(student, students, subjects);

	printf("*********��������*********\n");
	personal_score(student, subjects, students);
}

// ���κ�
// �Ű������� �迭 ������
void personal_score(int(* ppa)[4], int a, int b)
{
	int total[80] = {0};
	int i,j;
	for (i = 0; i < a; i++) {
		for ( j = 0; j < b; j++) {
			total[i] += ppa[i][j];
		}
	}
	print(total, a,b);
}

// ����Լ�
void print(int* pa,int arr_size,int div_size)
{
	for (int i = 0; i < arr_size; i++)
	{
		printf("���� : %d\t", pa[i]);
		printf("��� : %.2f\n", (double)pa[i] / div_size);
	}
}

// ��ġ���
void reverse_array(int(*ppa)[4], int col, int row)
{
	int arr[4][5];
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			arr[j][i] = ppa[i][j];
		}
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			ppa[i][j]=arr[i][j];
		}
	}
}


//// ����
//// �Ű������� �迭 ������
//void subject_score(int(* ppa)[4], int subjects, int students)
//{
//	int total[80] = {0};
//	int a = subjects;
//	int b = students;
//	int i,j;
//	for (i = 0; i < a; i++) {
//		for ( j = 0; j < b; j++) {
//			total[i] += ppa[j][i];
//		}
//	}
//	print(total, subjects,students);
//}

