#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int h2_ex1(int);
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
double new_rap(double, double);


int hagasha_2()
{
	int select = 0, i, all_Ex_in_loop = 0, size_a=1;
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
			case 1:
				printf("Enter the size of the array: ");
				do
				{
					scanf("%d", &size_a);
					if (size_a < 0)
						printf("You must enter a positive number");
				} while (size_a < 0);
				h2_ex1(size_a);
				break;
			case 2: h2_ex2(); break;
			case 3: h2_ex3(); break;
			case 4: h2_ex4(); break;
			case 5: h2_ex5(); break;
			}
		} while (all_Ex_in_loop && select);
		return main();
}

///////////////////////////////////////////////////////////////

int h2_ex1(int size_a)
{
	int *arr,i;
	arr = malloc(size_a);
	for (i = 0; i < size_a;i++)
		scanf("%d", (arr + i));
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
	int num=1,i=0,lim=0;
	printf("Enter your n number: ");
	do
	{
		scanf("%d", &num);
		if (num <= 0)
			printf("You have entered a negative number, try again\n");
	} while (num <= 0);
	i = num;
	do
	{
		if (betro(i) == 0)
			i--;
		else
		{
			lim=printf("The betrohed number of %d is %d\n", i, betro(i));
			i--;
		}
	} while (i >0);
	if (!lim)
		printf("There is no betrohed numbers bellow %d\n", num);

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
	double n, root;
	printf("Enter the number you want to calculate the root for: ");
	do
	{
		scanf("%lf", &n);
		if (n < 0)
			printf("You have entered a negative number, try again\n");
	} while (n < 0);
	root = new_rap(1, n);
	printf("The root of %.3lf is %.3lf\n", n, root);
	return 1;
}

///////////////////////////////////////////////////////////////

double new_rap(double x, double n)
{
	double temp,ret;
	ret = (x - (x*x - n) / (2 * x));
	temp = ret - x;
	temp = fabs(temp);
	if (temp <= 0.00001)
		return x;
	return new_rap((x - (x*x - n) / (2 * x)), n);
}


