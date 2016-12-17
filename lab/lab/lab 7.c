#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int lab7_ex_1();
int lab7_ex_2();
int lab7_ex_3();
int lab7_ex_4();
int lab7_ex_5();
int bige(int, int);
int smale(int, int);
int smk(int, int,int,int);
int pw(int, int);



int lab7()
{
	char drill_num[5];
	system("cls");
	printf("Welcome to lab 7 Page!\n"
		"_____________________________\n"
		"1 - Bigest num - Recursion\n"
		"2 - Smalets num - Recursion\n"
		"3 - Smaler than K - Recursion\n"
		"4 - x^n - Recursion\n"
		"5 - Decimal to binary - Recursion\n\n"
		"Back - Return to main\n"
		"Quit - Exit\n\n"
		"Enter your choise: ");
	scanf("%s", &drill_num);

	if (strcmp(drill_num, "1") == 0)
	{
		printf("\n");
		lab7_ex_1();
	}

	if (strcmp(drill_num, "2") == 0)
	{
		printf("\n");
		lab7_ex_2();
	}

	if (strcmp(drill_num, "3") == 0)
	{
		printf("\n");
		lab7_ex_3();
	}

	if (strcmp(drill_num, "4") == 0)
	{
		printf("\n");
		lab7_ex_4();
	}

	if (strcmp(drill_num, "5") == 0)
	{
		printf("\n");
		lab7_ex_5();
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
		return lab6();
	}
	return main();

}

//////////////////////////////////////////////////////////////////

int lab7_ex_1()
{
	int big = 0;
	big=bige(0,0);
	printf("The bigest number is %d", big);

	printf("\n");
	system("pause");
	return lab7();
}

//////////////////////////////////////////////////////////////////

int lab7_ex_2()
{
	int small = 0;
	small = smale(0, 9999999999);
	printf("The smallest number is %d", small);	

	printf("\n");
	system("pause");
	return lab7();
}

//////////////////////////////////////////////////////////////////

int lab7_ex_3()
{
	int n = 0, k = 0, smak=0;
	printf("Enter the number of items N:\n");
	n = Nput(n);
	printf("\nEnter The treshold K:\n");
	k = Nput(k);
	smak = smk(n, k,0,0);
	printf("\nThe number of items smaller than K is %d", smak);

	printf("\n");
	system("pause");
	return lab7();
}

//////////////////////////////////////////////////////////////////

int lab7_ex_4()
{
	int base = 0, expo = 0, result = 0;
	printf("Enter base:\n");
	scanf("%d", &base);
	printf("Enter Exponent:\n");
	expo = Nput(expo);
	result = pw(base, expo);
	printf("%d^%d=%d\n", base, expo, result);

	printf("\n");
	system("pause");
	return lab7();
}

//////////////////////////////////////////////////////////////////

int lab7_ex_5()
{
	

	printf("\n");
	system("pause");
	return lab7();
}

//////////////////////////////////////////////////////////////////

int bige(int num,int bg)
{
	num = Nput(num);
	if (num == -1)
		return bg;
	else if (num < bg)
		return bige(num, bg);
	else if (num >= bg)
		return bige(num, num);

}

//////////////////////////////////////////////////////////////////

int smale(int num, int sm)
{
	num = Nput(num);
	if (num == -1)
		return sm;
	else if (num > sm)
		return smale(num, sm);
	else if (num <= sm)
		return smale(num, num);

}

//////////////////////////////////////////////////////////////////

int smk(int n, int k,int num, int sm)
{
	if (!n)
		return sm;
	else if (n)
	{
		num = Nput(num);
		if (num < k)
			return smk(n - 1, k, num, sm + 1);
		else if (num >= k)
			return smk(n - 1, k, num, sm);
	}
	}

//////////////////////////////////////////////////////////////////

int pw(int x, int n)
{
	if (!n)
		return 1;
	else if (n == 1)
		return x;
	else if (!(n % 2))
		return pw(x, n / 2)*pw(x, n / 2);
	else if (n%2)
		return x*pw(x, n / 2)*pw(x, n / 2);		
}