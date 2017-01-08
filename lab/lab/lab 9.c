#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int lab9_ex_1();
void rev_arr(int*, int);
void swap(int*, int*);

int lab9_ex_2();
int peli(int*, int);

int lab9_ex_3();
int sort_arr(int *, int);

int lab9_ex_4();
int pair_sum(int*, int);



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

	rev_arr(arr, size);

	for (i = 0;i < size;i++)
		printf("%d\t", *(arr + i));

	free(arr);
	printf("\n\n");
	system("pause");
	return lab9();
}

///////////////////////////////////////////////////////////////////

void rev_arr(int *a, int s)
{
	if (s <= 1)
		return 0;
	swap(a, (a+s-1));
	rev_arr(a+1, s-2);
}

//////////////////////////////////////////////////////////////////

void swap(int*a, int*b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
//////////////////////////////////////////////////////////////////

int lab9_ex_2()
{
	int *arr, size, i;
	size = arr_size();
	arr = (int*)malloc(size * sizeof(int));
	arr_input(arr, size);

	for (i = 0;i < size;i++)
		printf("%d\t", *(arr + i));
	printf("\n\nThe array is a pelindrome: %d\n", peli(arr,size));


	free(arr);
	printf("\n");
	system("pause");
	return lab9();
}

////////////////////////////////////////////////////////////////////

int peli(int*a, int s)
{
	if (s <= 1)
		return 1;
	else if (*a == *(a + s - 1))
		peli(a + 1, s - 2);
	else
		return 0;
}

//////////////////////////////////////////////////////////////////

int lab9_ex_3()
{
	int *arr, size, i;
	size = arr_size();
	arr = (int*)malloc(size * sizeof(int));
	arr_input(arr, size);

	for (i = 0;i < size;i++)
		printf("%d\t", *(arr + i));
	printf("\n\nThe array is a sorted: %d\n", sort_arr(arr, size));


	free(arr);

	printf("\n");
	system("pause");
	return lab9();
}

//////////////////////////////////////////////////////////////////

int sort_arr(int *a, int s)
{
	if (s <= 1)
		return 1;
	else if (*(a + s - 1) > *(a + s - 2))
		sort_arr(a, s - 1);
	else
		return 0;
}

//////////////////////////////////////////////////////////////////

int lab9_ex_4()
{
	int *arr, size, i;
	do
	{
		size = arr_size();
		if (size < 2)
			printf("You must enter 2 or higher, try again\n");
	} while (size < 2);
	
	arr = (int*)malloc(size * sizeof(int));
	arr_input(arr, size);

	for (i = 0;i < size;i++)
		printf("%d\t", *(arr + i));
	printf("\n\nThe biggest pair-sum is: %d\n", pair_sum(arr, size));


	free(arr);
	printf("\n");
	system("pause");
	return lab9();
}

////////////////////////////////////////////////////////////////////////

int pair_sum(int*a, int s)
{
	int temp= (*(a + s - 1) + *(a + s - 2));
	if (s == 2)
		return temp;
	else 
		temp=pair_sum(a, s - 1);

	if (*(a + s - 1) + *(a + s - 2) >= temp)
		return *(a + s - 1) + *(a + s - 2);
	else
		return temp;
}

