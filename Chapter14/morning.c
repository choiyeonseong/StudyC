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

int main()
{
	int student[5][4];
	int total_p[5] = { 0 };	// ���� ����
	int total_m[4] = { 0 };	// ���� ����
	int tmp;
	printf("���� �Է� :\n$ ");

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			scanf("%d", &tmp);
			student[i][j] = tmp;
			total_p[i] += tmp;
		}
	}
	for (int j = 0; j < 4; j++) {
		for (int i = 0; i < 5; i++) {
			total_m[j] += student[i][j];
		}
	}

	printf("*********�л�������*********\n");
	for (int i = 0; i < 5; i++) {
		printf("%d��° �л�\n���� : %d,\t", i+1, total_p[i]);
		printf("��� : %.2f\n", (double)total_p[i] / 4);
	}
	printf("*********��������*********\n");
	printf("����\n���� : %d,\t", total_m[0]);
	printf("��� : %.2f\n", (double)total_m[0] / 5);
	printf("����\n���� : %d,\t", total_m[1]);
	printf("��� : %.2f\n", (double)total_m[1] / 5);
	printf("����\n���� : %d,\t", total_m[2]);
	printf("��� : %.2f\n", (double)total_m[2] / 5);
	printf("ü��\n���� : %d,\t", total_m[3]);
	printf("��� : %.2f\n", (double)total_m[3] / 5);
}