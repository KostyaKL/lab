#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int lab9_ex_1();
void rev_arr(int*, int*);
void swap(int*, int*);


int lab9_ex_2();
int lab9_ex_3();
int lab9_ex_4();



int lab9()
{
	char drill_num[5];
	system("cls");
	printf("Welcome to lab 9 Page!\n"
		"_____________________________\n"
		"1 - Reverse array - recursion\n"
		"2 - Pilindrome- recursion\n"
		"3 - Sorted array - recursion\n"
		"4 - Biggest pair-sum in an array - recursion\n"
		"\n"

		"Back - Return to main\n"
		"Quit - Exit\n\n"
		"Enter your choise: ");
	scanf("%s", &drill_num);

	if (strcmp(drill_num, "1") == 0)
	{
		printf("\n");
		lab9_ex_1();
	}

	if (strcmp(drill_num, "2") == 0)
	{
		printf("\n");
		lab9_ex_2();
	}

	if (strcmp(drill_num, "3") == 0)
	{
		printf("\n");
		lab9_ex_3();
	}

	if (strcmp(drill_num, "4") == 0)
	{
		printf("\n");
		lab9_ex_4();
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
		return lab9();
	}
	return main();

}

//////////////////////////////////////////////////////////////////

int lab9_ex_1()
{
	int *arr, size,i;
	size = arr_size();
	arr = (int*)malloc(size * sizeof(int));
	arr_input(arr, size);

	for (i = 0;i < size;i++)
		printf("%d\t", *(arr + i));
	printf("\n\n");

	rev_arr(arr, (arr+size-1));

	for (i = 0;i < size;i++)
		printf("%d\t", *(arr + i));

	free(arr);
	printf("\n\n");
	system("pause");
	return lab9();
}

///////////////////////////////////////////////////////////////////

void rev_arr(int *af, int *al)
{
	if ((al-af)<=1)
		return 0;
	swap(af, al);
	rev_arr(af+1,al-1);
}

//////////////////////////////////////////////////////////////////

void swap(int*a, int*b)
{
	int temp = *a,ca,cb;
	ca = *a;
	cb = *b;
	*a = *b;
	*b = temp;
	ca = *a;
	cb = *b;
}
//////////////////////////////////////////////////////////////////

int lab9_ex_2()
{

	printf("\n");
	system("pause");
	return lab9();
}

//////////////////////////////////////////////////////////////////

int lab9_ex_3()
{

	printf("\n");
	system("pause");
	return lab9();
}

//////////////////////////////////////////////////////////////////

int lab9_ex_4()
{

	printf("\n");
	system("pause");
	return lab9();
}

