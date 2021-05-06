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

// 개인별
void personal_score(int(* ppa)[4],int col,int row);

// 과목별
//void subject_score(int** ppa, int col, int row);

// 출력함수
void print(int* pa,int size);

// 전치 행렬 함수
void reverse_array(int(*ppa)[4], int col, int row);

int main()
{
	int student[5][4];	// 2차원 배열로 선언
	printf("점수 입력 :\n$ ");

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			scanf("%d", &student[i][j]);
		}
	}
	int subjects = sizeof(student[0]) / sizeof(student[0][0]);	//4
	int students = sizeof(student) / sizeof(student[0]);		//5

	printf("*********학생별점수*********\n");
	personal_score(student, students, subjects);				// 배열명을 인수로 주고 함수 호출

	reverse_array(student, students, subjects);

	printf("*********과목별점수*********\n");
	personal_score(student, subjects, students);
}

// 개인별
// 매개변수는 배열 포인터
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

// 출력함수
void print(int* pa,int arr_size,int div_size)
{
	for (int i = 0; i < arr_size; i++)
	{
		printf("총점 : %d\t", pa[i]);
		printf("평균 : %.2f\n", (double)pa[i] / div_size);
	}
}

// 전치행렬
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


//// 과목별
//// 매개변수는 배열 포인터
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

