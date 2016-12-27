#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int lab8_ex_1();

int lab8_ex_2();

int lab8_ex_3();
int lab8_ex_4();
int lab8_ex_5();

int arr_size();
void arr_input(int *, int);

int lab8()
{
	char drill_num[5];
	system("cls");
	printf("Welcome to lab 8 Page!\n"
		"_____________________________\n"
		"1 - Even sum\n"
		"2 - Neigbor sum\n"
		"3 - Sorted array\n"
		"4 - Reverse array\n"
		"5 - Pilindrome\n\n"

		"Back - Return to main\n"
		"Quit - Exit\n\n"
		"Enter your choise: ");
	scanf("%s", &drill_num);

	if (strcmp(drill_num, "1") == 0)
	{
		printf("\n");
		lab8_ex_1();
	}

	if (strcmp(drill_num, "2") == 0)
	{
		printf("\n");
		lab8_ex_2();
	}

	if (strcmp(drill_num, "3") == 0)
	{
		printf("\n");
		lab8_ex_3();
	}

	if (strcmp(drill_num, "4") == 0)
	{
		printf("\n");
		lab8_ex_4();
	}

	if (strcmp(drill_num, "5") == 0)
	{
		printf("\n");
		lab8_ex_5();
	}

	if (strcmp(drill_num, "back") == 0)
	{
		printf("\n");
		return main();
	}

	if (strcmp(drill_num, "quit") == 0)
	{
		exit(0);
	}

	else
	{
		printf("You have enterd invalid choise\n\n");
		system("pause");
		return lab8();
	}
	return main();

}

//////////////////////////////////////////////////////////////////

int lab8_ex_1()
{
	int *arr, size,sum=0 ,i;
	size = arr_size();
	arr = malloc(size);
	arr_input(arr, size);
	
	for (i = 0;i < size;i++)
		if (*(arr + i) % 2 == 0)
			sum += *(arr + i);

	printf("Te sum of all even number in the array is %d\n", sum);

	printf("\n");
	system("pause");
	return lab8();
}

//////////////////////////////////////////////////////////////////

int lab8_ex_2()
{
	int *arr, size, sum = 0, i, flag=0;
	size = arr_size();
	arr = malloc(size);
	arr_input(arr, size);

	for (i = 0;i < size;i++)
		printf("%d\t", *(arr + i));
	printf("\n");

	for (i = 1;i < size - 1;i++)
		if (*(arr + i) == (*(arr + i + 1) + *(arr + i - 1)))
			flag = 1;

	printf("The array has a number the equals the sum of his neigbors = %d", flag);
	
	printf("\n");
	system("pause");
	return lab8();
}

//////////////////////////////////////////////////////////////////

int lab8_ex_3()
{
	int *arr, size, sum = 0, i;
	size = arr_size();
	arr = malloc(size);
	arr_input(arr, size);


	printf("\n");
	system("pause");
	return lab8();
}

//////////////////////////////////////////////////////////////////

int lab8_ex_4()
{
	int *arr, size, sum = 0, i;
	size = arr_size();
	arr = malloc(size);
	arr_input(arr, size);


	printf("\n");
	system("pause");
	return lab8();
}

//////////////////////////////////////////////////////////////////

int lab8_ex_5()
{
	int *arr, size, sum = 0, i;
	size = arr_size();
	arr = malloc(size);
	arr_input(arr, size);


	printf("\n");
	system("pause");
	return lab8();
}

/////////////////////////////////////////////////////////////////

int arr_size()
{
	int size;
	printf("Enter how many number you have in your array: ");
	do
	{
		scanf("%d", &size);
		if (size < 0)
			printf("You have entered a negative number, try again\n");
	} while (size < 0);
	return size;
}

/////////////////////////////////////////////////////////////////////

void arr_input(int *arr, int size)
{
	int i;
	printf("Enter %d number into the array:\n");
	for (i = 0;i < size;i++)
		scanf("%d", (arr + i));
}


