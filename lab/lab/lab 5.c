#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int lab5_ex_1();
int lab5_ex_2();
int lab5_ex_3();
int lab5_ex_4();
int lab5_ex_5();
int lab5_ex_6();
int reverse(int);
int prime(int);
int dig_sum(int);

int lab5()
{
	char drill_num[5];
	system("cls");
	printf("Welcome to lab 5 Page!\n"
		"_____________________________\n"
		"1 - Count digits\n"
		"2 - Revers digits\n"
		"3 - Revers Digits Effitiant\n"
		"4 - Prime Number\n"
		"5 - Longest Flush\n"
		"6 - Reduction\n\n"
		"Back - Return to main\n"
		"Quit - Exit\n\n"
		"Enter your choise: ");
	scanf("%s", &drill_num);

	if (strcmp(drill_num, "1") == 0)
	{
		printf("\n");
		lab5_ex_1();
	}

	if (strcmp(drill_num, "2") == 0)
	{
		printf("\n");
		lab5_ex_2();
	}

	if (strcmp(drill_num, "3") == 0)
	{
		printf("\n");
		lab5_ex_3();
	}

	if (strcmp(drill_num, "4") == 0)
	{
		printf("\n");
		lab5_ex_4();
	}

	if (strcmp(drill_num, "5") == 0)
	{
		printf("\n");
		lab5_ex_5();
	}

	if (strcmp(drill_num, "6") == 0)
	{
		printf("\n");
		lab5_ex_6();
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
		return lab5();
	}
	return main();

}

//////////////////////////////////////////////////////////////////

int lab5_ex_1()
{
	int num, sum;
	printf("Enter a positive number: ");
	do
	{
		scanf("%d", &num);
		if (num < 0)
			printf("You have entered negative number, Try again\n\n");
	} while (num < 0);

	sum = dig_count(num);
	printf("Your number consist of %d digit\n\n", sum);
	
	printf("\n");
	system("pause");
	return lab5();
}

//////////////////////////////////////////////////////////////////

int lab5_ex_2()
{
	int num, rev;
	printf("Enter a positive number: ");
	do
	{
		scanf("%d", &num);
		if (num < 0)
			printf("You have entered negative number, Try again\n\n");
	} while (num < 0);

	rev = reverse(num);
	printf("the reverse number is %d\n\n", rev);

	printf("\n");
	system("pause");
	return lab5();
}

//////////////////////////////////////////////////////////////////

int lab5_ex_3()
{

	printf("\n");
	system("pause");
	return lab5();
}

//////////////////////////////////////////////////////////////////

int lab5_ex_4()
{
	int num, i,flag;
	printf("Enter a positive number: ");
	do
	{
		scanf("%d", &num);
		if (num <= 0)
			printf("You have entered negative number, Try again\n\n");
	} while (num <= 0);

	flag = prime(num);

	if (flag)
		printf("The number is Prime\n\n");
	else 
		printf("The number is NOT Prime\n\n");

	printf("\n");
	system("pause");
	return lab5();
}

//////////////////////////////////////////////////////////////////

int lab5_ex_5()
{

	printf("\n");
	system("pause");
	return lab5();
}

//////////////////////////////////////////////////////////////////

int lab5_ex_6()
{
	int num, i, sum;
	printf("Enter a positive number: ");
	do
	{
		scanf("%d", &num);
		if (num < 0)
			printf("You have entered negative number, Try again\n\n");
	} while (num < 0);
	sum = num;
	do
	{
		sum = dig_sum(sum);
	} while (dig_count(sum) > 1);
	
	printf("The reduction of %d is %d\n\n", num, sum);

	printf("\n");
	system("pause");
	return lab5();
}

///////////////////////////////////////////////////////////////////

int reverse(int num)
{
	int digits, rev=0, i, mult=1, cur;
	unsigned long long dev = 10;

	digits = dig_count(num);

	for (i = 1;i < digits;i++)
		mult *= 10;

	for (i = 0;i < digits;i++)
	{
		cur = (num%dev) / (dev / 10);
		rev = rev + cur*mult;
		dev *= 10;
		mult /= 10;
	}

	return rev;

}

///////////////////////////////////////////////////

int prime(int num)
{
	int i, flag, check;
	for (i = 2;i <= num;i++)
	{
		flag = num%i;
		if (!flag)
		{
			if (i == num)
				return 1;
			else
				return 0;
		}
	}

	return 0;
}

////////////////////////////////////////////////

int dig_sum(int num)
{
	int sum=0,digits,cur;
	unsigned long long dev = 10;
	digits = dig_count(num);
	for (;digits > 0;digits--)
	{
		cur = (num%dev) / (dev / 10);
		sum += cur;
		dev *= 10;
	}

	return sum;
}
