#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int misc1();
int misc2();




int misc()
{
	char drill_num[5];
	system("cls");
	printf("Welcome to Misc Page!\n"
		"_____________________________\n"
		"1 - Hanoy Towers\n"
		"2 - 10 Coin Change\n\n"
		"Back - Return to main\n"
		"Quit - Exit\n\n"
		"Enter your choise: ");
	scanf("%s", &drill_num);

	if (strcmp(drill_num, "1") == 0)
	{
		printf("\n");
		misc1();
	}

	if (strcmp(drill_num, "2") == 0)
	{
		printf("\n");
		misc2();
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
		return misc();
	}
	return main();

}

//////////////////////////////////////////////////////////////////

int misc1()
{
	int num;
	printf("Enter the amount of coins: ");
	scanf("%d", &num);
	hanoy(num,0,0,0);

	printf("\n");
	system("pause");
	return misc();
}

//////////////////////////////////////////////////////////////////

int misc2()
{
//	
//		int* scan_arr(int);
//	int* ZUGI_partition(int *, int);
//	void swap(int *, int *);
//	void print_arr(int *, int);
//
//
//	void main()
//	{
//		int *arr, size;
//		printf("Enter size of array: ");
//		do
//		{
//			scanf("%d", &size);
//			if (size < 1)
//				printf("Please enter positive size");
//		} while (size < 1);
//
//		arr = scan_arr(size);
//
//		arr = ZUGI_partition(arr, size);
//
//		printf("The new array is: ");
//		print_arr(arr, size);
//
//		free(arr);
//	}
//
//
//	int* scan_arr(int size_arr)
//	{
//		int *arr, i;
//		arr = (int*)malloc(size_arr * sizeof(int));
//		printf("Enter an array of %d numbers: \n", size_arr);
//		for (i = 0; i<size_arr; i++)
//			scanf("%d", arr + i);
//		return arr;
//	}
//
//
//	void ZUGI_partition(int *a, int size)
//	{
//		int left = 0, right = size - 1;
//		while (left<right)
//		{
//			while (a[left] % 2 == 1)
//				left++;
//			while ((left<right) && (a[right] % 2 == 0))
//				right--;
//			if (left<right)
//				swap(a + left, a + right);
//		}
//	}
//
//
//	void swap(int *n1, int *n2)
//	{
//		int n3 = *n1;
//		*n1 = *n2;
//		*n2 = n3;
//	}
//
//
//	void print_arr(int *arr, int size_arr)
//	{
//		int i;
//		for (i = 0; i<size_arr; i++)
//			printf("%d  ", arr[i]);
//	}

	printf("\n");
	system("pause");
	return misc();
}

//////////////////////////////////////////////////////////////////

int hanoy(int num, int p1, int p2, int p3)
{
	if (p1 == 1)
		return 1;

}