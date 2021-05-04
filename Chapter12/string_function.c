#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/// <summary>
/// 문자열 붙히기
/// </summary>
char* my_strcat(char* pd, char* ps)
{
	char* po = pd;		// 배열의 처음 위치 보관

	while (*pd != '\0')	// pd를 null문자의 위치로 이동 (이어붙혀질 문자의 마지막 위치)
	{
		pd++;
	}
	while (*pd != '\0')	// 문자열 복사
	{
		*pd = *ps;
		pd++;
		ps++;
	}
	*pd = '\0';
	return po;			// 붙여넣은 배열의 시작위치 반환
}

/// <summary>
/// 문자열 길이
/// </summary>
int my_strlen(char* ps)		// ps는 배열명을 저장하고 첫번째 요소를 가리킴
{
	int cnt = 0;
	while (*ps != '\0')
	{
		cnt++;
		ps++;		// 다음 문자로 이동
	}
	return cnt;
}

/// <summary>
/// 문자열 비교
/// </summary>
int my_strcmp(char* pa, char* pb)
{
	while ((*pa == *pb) && (*pa != '\0'))
	{
		pa++;
		pb++;
	}

	if (*pa > *pb) return 1;		// 앞이 크면 1
	else if (*pa < *pb) return -1;	// 뒤가 크면 -1
	else return 0;					// 같으면 0
}

/// <summary>
/// 문자열 복사
/// </summary>
char* my_strcpy(char* pd, char* ps)	// 복사 받을 곳 pd, 복사할 곳 ps
{
	char* po = pd;		// pd값을 나중에 반환하기 위해 보관

	while (*ps != '\0')
	{
		*pd = *ps;	// ps가 가리키는 문자를 pd가 가리키는 위치에 대입
		pd++;		// 복사받을 다음 위치로 포인터 증가
		ps++;		// 복사할 다음 문자의 위치로 포인터 증가
	}
	*pd = '\0';		// 복사가 끝난 후 복사받을곳에 null문자로 마무리

	return po;		// 복사가 끝난 저장 공간의 시작 주소 반환
}