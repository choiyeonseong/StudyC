/*
	5월 6일 1교시 눈뜨자마자 코딩 너무햄
	1. 5명 학생의 국어, 영어, 수학, 체육점수를 입력받는다.
	2. 개인별 총점과 평균을 구한다.
	3. 그리고 과목별의 총점과 평균도 구하시오

	입력값 : 
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
	int total_p[5] = { 0 };	// 개인 총점
	int total_m[4] = { 0 };	// 과목 총점
	int tmp;
	printf("점수 입력 :\n$ ");

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

	printf("*********학생별점수*********\n");
	for (int i = 0; i < 5; i++) {
		printf("%d번째 학생\n총점 : %d,\t", i+1, total_p[i]);
		printf("평균 : %.2f\n", (double)total_p[i] / 4);
	}
	printf("*********과목별점수*********\n");
	printf("국어\n총점 : %d,\t", total_m[0]);
	printf("평균 : %.2f\n", (double)total_m[0] / 5);
	printf("영어\n총점 : %d,\t", total_m[1]);
	printf("평균 : %.2f\n", (double)total_m[1] / 5);
	printf("수학\n총점 : %d,\t", total_m[2]);
	printf("평균 : %.2f\n", (double)total_m[2] / 5);
	printf("체육\n총점 : %d,\t", total_m[3]);
	printf("평균 : %.2f\n", (double)total_m[3] / 5);
}