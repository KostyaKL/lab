#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define R 5
#define C 4

typedef int matrix[R][C];

int lab12_ex_1();
int is_sym(matrix);

int lab12_ex_2();
void round_mat_move(matrix);

int lab12_ex_3();
void rotate_matrix(matrix);

int lab12_ex_4();

void input_matrix(matrix);
void print_matrix(matrix);
void swp(int*, int*);



int lab12()
{
	char drill_num[5];
	system("cls");
	printf("Welcome to lab 12 Page!\n"
		"_____________________________\n"
		"1 - Is Symetric\n"
		"2 - Round Matrix move\n"
		"3 - Rotate Matrix by 90 deg\n"
		"4 - aaa\n"
		"\n"

		"Back - Return to main\n"
		"Quit - Exit\n\n"
		"Enter your choise: ");
	scanf("%s", &drill_num);

	if (strcmp(drill_num, "1") == 0)
	{
		printf("\n");
		lab12_ex_1();
	}

	if (strcmp(drill_num, "2") == 0)
	{
		printf("\n");
		lab12_ex_2();
	}

	if (strcmp(drill_num, "3") == 0)
	{
		printf("\n");
		lab12_ex_3();
	}

	if (strcmp(drill_num, "4") == 0)
	{
		printf("\n");
		lab12_ex_4();
	}

	if (strcmp(drill_num, "back") == 0)
	{
		printf("\n");
		return main();
	}

	if (strcmp(drill_num, "quit") == 0 || strcmp(drill_num, "0") == 0)
	{
		exit(0);
	}

	else
	{
		printf("You have enterd invalid choise\n\n");
		system("pause");
		return lab12();
	}
	return main();

}

//////////////////////////////////////////////////////////////////

int lab12_ex_1()
{
	matrix mat;
	input_matrix(mat);
	printf("The matrix is symetric: %d", is_sym(mat));

	printf("\n");
	system("pause");
	return lab12();
}

//////////////////////////////////////////////////////////////////

int is_sym(matrix m)
{
	int i, j;
	for (i = 0;i < R;i++)
		for (j = 0;j < R;j++)
			if (m[i][j] != m[j][i])
				return 0;
	return 1;
}

//////////////////////////////////////////////////////////////////

int lab12_ex_2()
{
	matrix mat;
	input_matrix(mat);

	print_matrix(mat);

	round_mat_move(mat);
	printf("\n\n"
		"Matrix after round move: ");
	print_matrix(mat);

	printf("\n");
	system("pause");
	return lab12();
}

//////////////////////////////////////////////////////////////////

void round_mat_move(matrix m)
{
	int i, j;
	for (i = 0;i < R;i++)
		for (j = 0;j < C - 1;j++)
			swp(&m[i][j], &m[i][j + 1]);
}

//////////////////////////////////////////////////////////////////

int lab12_ex_3()
{
	matrix mat;
	input_matrix(mat);
	print_matrix(mat);

	rotate_matrix(mat);
	printf("\n\n"
		"Matrix after rotation by 90 deg: ");
	print_matrix(mat);


	printf("\n");
	system("pause");
	return lab12();
}

//////////////////////////////////////////////////////////////////

void rotate_matrix(matrix m)
{
	int i, j,r,c;
	matrix tmp;
	for (c=R-1,i = 0;i < R;i++,c--)
		for (r=0,j = 0;j < C;j++,r++)
			tmp[r][c]=m[i][j];
	for (i = 0;i < R;i++)
		for (j = 0;j < C;j++)
			m[i][j] = tmp[i][j];
}

//////////////////////////////////////////////////////////////////

int lab12_ex_4()
{

	printf("\n");
	system("pause");
	return lab12();
}

//////////////////////////////////////////////////////////////////

void input_matrix(matrix m)
{
	int i, j;
	for (i = 0;i < R;i++)
	{
		printf("Enter value for row %d: ", i+1);
		for (j = 0;j < C;j++)
			scanf("%d", &m[i][j]);
	}
}

//////////////////////////////////////////////////////////////////

void print_matrix(matrix m)
{
	int i, j;
	for (i = 0;i < R;i++)
	{
		printf("\n");
		for (j = 0;j < C;j++)
			printf("%d ", m[i][j]);
	}
}

//////////////////////////////////////////////////////////////////

void swp(int*a, int*b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//////////////////////////////////////////////////////////////////


