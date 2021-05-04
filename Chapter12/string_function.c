#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/// <summary>
/// ���ڿ� ������
/// </summary>
char* my_strcat(char* pd, char* ps)
{
	char* po = pd;		// �迭�� ó�� ��ġ ����

	while (*pd != '\0')	// pd�� null������ ��ġ�� �̵� (�̾������ ������ ������ ��ġ)
	{
		pd++;
	}
	while (*pd != '\0')	// ���ڿ� ����
	{
		*pd = *ps;
		pd++;
		ps++;
	}
	*pd = '\0';
	return po;			// �ٿ����� �迭�� ������ġ ��ȯ
}

/// <summary>
/// ���ڿ� ����
/// </summary>
int my_strlen(char* ps)		// ps�� �迭���� �����ϰ� ù��° ��Ҹ� ����Ŵ
{
	int cnt = 0;
	while (*ps != '\0')
	{
		cnt++;
		ps++;		// ���� ���ڷ� �̵�
	}
	return cnt;
}

/// <summary>
/// ���ڿ� ��
/// </summary>
int my_strcmp(char* pa, char* pb)
{
	while ((*pa == *pb) && (*pa != '\0'))
	{
		pa++;
		pb++;
	}

	if (*pa > *pb) return 1;		// ���� ũ�� 1
	else if (*pa < *pb) return -1;	// �ڰ� ũ�� -1
	else return 0;					// ������ 0
}

/// <summary>
/// ���ڿ� ����
/// </summary>
char* my_strcpy(char* pd, char* ps)	// ���� ���� �� pd, ������ �� ps
{
	char* po = pd;		// pd���� ���߿� ��ȯ�ϱ� ���� ����

	while (*ps != '\0')
	{
		*pd = *ps;	// ps�� ����Ű�� ���ڸ� pd�� ����Ű�� ��ġ�� ����
		pd++;		// ������� ���� ��ġ�� ������ ����
		ps++;		// ������ ���� ������ ��ġ�� ������ ����
	}
	*pd = '\0';		// ���簡 ���� �� ����������� null���ڷ� ������

	return po;		// ���簡 ���� ���� ������ ���� �ּ� ��ȯ
}