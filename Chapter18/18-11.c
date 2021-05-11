#include<stdio.h>

int main()
{
	FILE* afp, * bfp;
	int num = 10;
	int res;

	afp = fopen("a.txt", "wt");
	fprintf(afp, "%d", num);	// num 값을 문자로 변환하여 출력

	bfp = fopen("b.txt", "wb");
	fwrite(&num, sizeof(num), 1, bfp);	// num 값을 그대로 파일에 출력

	fclose(afp);
	fclose(bfp);

	bfp = fopen("b.txt", "rb");
	fread(&res, sizeof(res), 1, bfp);	// 파일 데이터 그대로 변수에 입력
	printf("%d", res);		// 입력한 데이터 확인

	fclose(bfp);

	return 0;
}