#include<stdio.h>

int main()
{
	FILE* fp;
	int age;
	char name[20];

	fp = fopen("a.txt", "r");

	fscanf(fp, "%d", &age);	// ȭ��Ʈ�����̽��� �����ͷ� �Է����� �ʰ� �ǳʶ�
	
	//fflush(fp);	// ���� �����͸� �μ��� �ָ� ���� �����Ϳ� ����� ��Ʈ�� ������ ���۸� ���
	while (fgetc(fp) != '\n');	// �����Է��� ���ڸ� �Է������� ���ڸ� ����

	fgets(name, sizeof(name), fp);	//���๮�ڰ� ���ö� ���� ���ڿ� �Է�

	printf("���� : %d, �̸� : %s", age, name);
	fclose(fp);

	return 0;
}