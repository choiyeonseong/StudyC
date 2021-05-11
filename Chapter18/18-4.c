#include<stdio.h>

//// 표준 입출력 스트림 사용
//int main()
//{
//	int ch;
//
//	while (1)
//	{
//		ch = getchar();	// 키보드에서 문자 입력
//		if (ch == EOF)	// ^Z로 입력 종료
//		{
//			break;
//		}
//		putchar(ch);	// 화면에 문자 출력
//	}
//	return 0;
//}

// 별도의 파일을 개방하지 않고 운영체제가 개방한 파일 스트림 사용
int main()
{
	int ch;

	while (1)
	{
		ch = fgetc(stdin);	// 키보드에서 문자 입력
		if (ch == EOF)		// ^Z로 입력 종료
		{
			break;
		}
		fputc(ch, stdout);	// 화면에 문자 출력
	}
	return 0;
}