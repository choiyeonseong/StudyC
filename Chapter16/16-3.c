#include<stdio.h>
int main()
{
	int* pi;		// �Ҵ��� ���� ������ ������ ������
	int size = 5;	// �� ���� �Ҵ��� ��������� ũ��, int�� ���� 5����
	int count = 0;	// ���� �Էµ� ��� ����
	int num;		// ����� �Է��� ����
	int i;			// �ݺ� ���� ����

	pi = (int*)calloc(size, sizeof(int));	// ���� 5���� ������� �Ҵ�, 0���� �ʱ�ȭ�Ǿ�����
	while (1)
	{
		printf("����� �Է��ϼ��� =>");
		scanf("%d", &num);
		if (num <= 0) break;
		if (count == size)	// ��������� ��� ����ϸ�
		{
			size += 5;	// ũ�⸦ �÷��� ���Ҵ�
			pi = (int*)realloc(pi, size * sizeof(int));	// ���� ���� ������ ũ�� ����
			// �޸� ������ ���� ��� �ȵǾ����� => ������ �ڵ�
		}
		pi[count++]=num;
	}
	for (i = 0; i < count; i++)
	{
		printf("%5d", pi[i]);
}
	free(pi);	// ���� �Ҵ� ������� �ݳ�

	return 0;
}