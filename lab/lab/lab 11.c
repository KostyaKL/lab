#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



int lab11_ex_1();
int no_mem(int*, int);


int lab11_ex_1_r();

int lab11_ex_2();



int lab11()
{
	char drill_num[5];
	system("cls");
	printf("Welcome to lab 11 Page!\n"
		"_____________________________\n"
		"1 - Number of members\n"
		"1.1 - Number of members - recursion\n"
		"2 - Sort string\n"
		"\n"

		"Back - Return to main\n"
		"Quit - Exit\n\n"
		"Enter your choise: ");
	scanf("%s", &drill_num);

	if (strcmp(drill_num, "1") == 0)
	{
		printf("\n");
		lab11_ex_1();
	}

	if (strcmp(drill_num, "1.1") == 0)
	{
		printf("\n");
		lab11_ex_1_r();
	}

	if (strcmp(drill_num, "2") == 0)
	{
		printf("\n");
		lab11_ex_2();
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
		return lab11();
	}
	return main();

}

//////////////////////////////////////////////////////////////////

int lab11_ex_1()
{
	int *a, s,n,i;
	printf("Enter the size of the array: ");
	do
	{
		scanf("%d", &s);
		if (s < 0)
			printf("Enter a positive number\n");
	} while (s < 0);

	a = (int*)calloc(s, sizeof(int));

	printf("Enter the number of '1' you want in the array: ");
	do
	{
		scanf("%d", &n);
		if (n < 0)
			printf("Enter a positive number\n");
	} while (n < 0);

	for (;n > 0;n--)
		*(a + n - 1) = 1;

	for (i = 0;i < s;i++)
		printf("%d ", *(a + i));
	printf("\n");
	printf("The number of members in the array is: %d\n", no_mem(a, s));

	free(a);
	printf("\n");
	system("pause");
	return lab11();
}

//////////////////////////////////////////////////////////////////

int no_mem(int *a, int s)
{
	int low=0, hi=s-1,mid;
		while (low <= hi)
	{
			mid = (low + hi) / 2;
		if (*(a + mid) == 0)
			if (*(a + mid - 1) == 1)
				return mid;
			else
				hi = mid - 1;
		else
			if (*(a + mid + 1) == 0)
				return mid+1;
			else
				low = mid + 1;
	}
	return -1;
}

//////////////////////////////////////////////////////////////////

int lab11_ex_1_r()
{
	printf("\n");
	system("pause");
	return lab11();
}

//////////////////////////////////////////////////////////////////

int lab11_ex_2()
{
	
	printf("\n");
	system("pause");
	return lab11();
}

/////////////////////////////////////////////////////////////////////

