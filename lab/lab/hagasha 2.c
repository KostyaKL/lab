#include <stdio.h>
#include <stdlib.h>

int h2_ex1();
int sum_of_array(int *, int);
int sum_prev_arr(int *, int);

int h2_ex2();
int ab_range(int, int);

int h2_ex3();
int print_pascal_line(int);
int factor(int);
void print_space(int);

int h2_ex4();
int dev_sum(int);
int betro(int);

int h2_ex5();



int num_input(int);



int hagasha_2()
{
	int select = 0, i, all_Ex_in_loop = 0;
	system("cls");
	printf("Run menu once or cyclically?\n(Once - enter 0, cyclically - enter other number) ");
	if (scanf("%d", &all_Ex_in_loop) == 1)
		do
		{
			for (i = 1; i <= 5; i++)
				printf("Ex%d--->%d\n", i, i);
			printf("EXIT-->0\n");
			do {
				select = 0;
				printf("please select 0-5 : ");
				scanf("%d", &select);
			} while ((select < 0) || (select > 5));
			switch (select) {
			case 1: h2_ex1(); break;
			case 2: h2_ex2(); break;
			case 3: h2_ex3(); break;
			case 4: h2_ex4(); break;
			case 5: h2_ex5(); break;
			}
		} while (all_Ex_in_loop && select);
		return main();
}

///////////////////////////////////////////////////////////////

int h2_ex1()
{
	int arr[] = { 7,5,-8,3,4,21,-10,-3,2,4 }, size_a = sizeof(arr)/sizeof(int);
	sum_prev_arr(arr, size_a);
	for (;size_a > 0;size_a--)
		printf("%d\n", arr[size_a - 1]);
	printf("\n");
	system("pause");
	return 1;
}

///////////////////////////////////////////////////////////////

int sum_prev_arr(int *arr, int size_a)
{
	if (size_a == 1)
		return 1;
	*(arr + size_a - 1) = sum_of_array(arr, size_a);
	sum_prev_arr(arr, size_a - 1);

}

/////////////////////////////////////////////////////////////////

int sum_of_array(int *arr, int size_o)
{
	int sum = 0;
	for (;size_o > 0;size_o--)
		sum += *(arr + size_o - 1);
	return sum;
}

///////////////////////////////////////////////////////////////

int h2_ex2()
{
	int a, b;
	printf("Enter two numbers so that a<b:\n"
		   "a: ");
	scanf("%d", &a);
	do
	{
		printf("b: ");
		scanf("%d", &b);
		if (a >= b)
			printf("Enter b bigger than a\n");
	} while (a >= b);

	printf("Return Value: %d\n", ab_range(a, b));
	system("pause");
	return 1;
}

///////////////////////////////////////////////////////////////////

int ab_range(int a, int b)
{
	int range = (a + b) / 2, num = 0, sum_a=0, sum_b=0;
	printf("Enter a series of numbers, Enter '-1' when done\n");
	scanf("%d", &num);
	while (num != -1)
	{
		if (num > range && num < b)
			sum_a += num;
		else if (num > a && num < range)
			sum_b += num;
		scanf("%d", &num);
	}
	return sum_a-sum_b;
}

///////////////////////////////////////////////////////////////

int h2_ex3()
{
	int lines,i;
	printf("Enter number of lines tou want to print: ");
	do
	{
		scanf("%d", &lines);
		if (lines < 1)
			printf("Enter a positive number: ");
	} while (lines < 1);

	for (i = 0;i <= lines-1;i++)
	{
		print_space(lines-i);
		print_pascal_line(i);
		printf("\n");
	}
	system("pause");
	return 1;
}

///////////////////////////////////////////////////////////////

int print_pascal_line(int n)
{
	int pos, k;
	if (n == 0)
	{
		printf("1");
		return 1;
	}
	for (k = n ;k >= 0;k--)
	{
		pos = factor(n) / (factor(k)*factor(n - k));
		printf("%d  ", pos);
	}
}

//////////////////////////////////////////////////////////////

int factor(int n)
{
	if (n <= 0)
		return 1;
	return n*factor(n - 1);

}

//////////////////////////////////////////////////////////////

void print_space(int line)
{
	for (;line / 2 >= 0;line--)
		printf(" ");
}

///////////////////////////////////////////////////////////////

int h2_ex4()
{
	int num=1,i=0;
	do
	{
		if (betro(num) == 0)
			num++;
		else
		{
			printf("The betrohed number of %d is %d\n", num, betro(num));
			num++;
			i++;
		}
	} while (i < 15);

	system("pause");
	return 1;
}

///////////////////////////////////////////////////////////////

int dev_sum(int num)
{
	int sum=1, i;
	for (i = 2;i<num;i++)
		if (num%i==0)
			sum += i;
	return sum;
}

///////////////////////////////////////////////////////////////

int betro(int num1)
{
	int num2 = dev_sum(num1)-1;
	if (dev_sum(num2)-1 == num1)
		return num2;
	else
		return 0;

}

///////////////////////////////////////////////////////////////

int h2_ex5()
{
	return 1;
}


///////////////////////////////
int num_input(int num)
{
	printf("Enter a positive number: ");
	do
	{
		scanf("%d", &num);
		if (num < -1)
			printf("You have entered negative number, Try again\n\n");
	} while (num < -1);

	return num;
}
