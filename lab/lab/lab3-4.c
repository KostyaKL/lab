#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>




int lab3_4_ex_1();
int lab3_4_ex_2();
int lab3_4_ex_3();
int lab3_4_ex_4();
int lab3_4_ex_5();
int lab3_4_ex_6();
int lab3_4_ex_7();
int biger(int,int);
int dig_count(int);
int b_check(int);
int b2d(int);


int lab3_4()
{
	char drill_num[5];
	system("cls");
	printf("Welcome to lab 3-4 Page!\n"
		"_____________________________\n"
		"1 - 7 Modulu\n"
		"2 - Number if Numbers\n"
		"3 - Trend of Numbers\n"
		"4 - Trend of Numbers 2\n"
		"5 - Supremum\n"
		"6 - Fibonacci\n"
		"7 - Binary to Decimal\n\n"
		"Back - Return to main\n"
		"Quit - Exit\n\n"
		"Enter your choise: ");
	scanf("%s", &drill_num);

	if (strcmp(drill_num, "1") == 0)
	{
		printf("\n");
		lab3_4_ex_1();
	}

	if (strcmp(drill_num, "2") == 0)
	{
		printf("\n");
		lab3_4_ex_2();
	}

	if (strcmp(drill_num, "3") == 0)
	{
		printf("\n");
		lab3_4_ex_3();
	}

	if (strcmp(drill_num, "4") == 0)
	{
		printf("\n");
		lab3_4_ex_4();
	}

	if (strcmp(drill_num, "5") == 0)
	{
		printf("\n");
		lab3_4_ex_5();
	}

	if (strcmp(drill_num, "6") == 0)
	{
		printf("\n");
		lab3_4_ex_6();
	}

	if (strcmp(drill_num, "7") == 0)
	{
		printf("\n");
		lab3_4_ex_7();
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
		return lab3_4();
	}
	return main();

}

////////////////////////////////////////////////

int lab3_4_ex_1()
{
	int num1=1,md, i;
	for (i = 1;i < 100;i++)
	{
		md = num1 % 7;
		if (!md)
		{
			printf("%d, ", num1);
		}
		num1++;
	}

	printf("\n");
	system("pause");
	return lab3_4();
}

////////////////////////////////////////////////////

int lab3_4_ex_2()
{
	int  init=0, sum=0;
	printf("Enter a series of natureal numbers, when finished enter '-1':\n");
	while (init != -1)
	{
		printf("Enter a N number: ");
		scanf("%d", &init);
		if (init <= 0 && init != -1)
		{
			printf("You have entered a negative number, try again\n\n");
		}
		else if (init == -1)
			break;
		else
			sum++;
	}

	printf("The amount of numbers entered is %d\n\n", sum);

	printf("\n");
	system("pause");
	return lab3_4();
}

/////////////////////////////////////////////////////

int lab3_4_ex_3()
{
	int num[50], init = 0, sum = 0, diff, i;
	printf("Enter a series of natureal numbers, when finished enter '-1':\n");
	while (init != -1)
	{
		printf("Enter a N number: ");
		scanf("%d", &init);
		if (init <= 0 && init != -1)
		{
			printf("You have entered a negative number, try again\n\n");
		}
		else if (init == -1)
			break;
		else
		{
			num[sum] = init;
			sum++;
		}
	}

	for (i = 0;i < sum-1;i++)
	{
		diff = num[i + 1] - num[i];
		if (diff <= 0)
		{
			printf("The series trend is NOT up\n\n");
			system("pause");
			return lab3_4();
		}
	}
	printf("The series trend is UP\n\n");

	printf("\n");
	system("pause");
	return lab3_4();
}

/////////////////////////////////////////////////////

int lab3_4_ex_4()
{
	int num[50], init = 0, sum = 0, user_sum=1, diff, i;
	printf("Enter the amount of members in the series (must be N number): ");
	scanf("%d", &user_sum);
	if (user_sum <= 0)
	{
		printf("You have enterd a number smaller than 1, try again\n\n");
		return lab3_4_ex_4();
	}

	printf("Enter a series of natureal numbers:\n");
	while (sum<user_sum)
	{
		printf("Enter a N number: ");
		scanf("%d", &init);
		if (init <= 0)
			printf("You have entered a negative number, try again\n\n");
		else
		{
			num[sum] = init;
			sum++;
		}
	}

	for (i = 0;i < sum-1;i++)
	{
		diff = num[i + 1] - num[i];
		if (diff <= 0)
		{
			printf("The series trend is NOT up\n\n");
			system("pause");
			return lab3_4();
		}
	}
	printf("The series trend is UP\n\n");

	printf("\n");
	system("pause");
	return lab3_4();
}

////////////////////////////////////////////////////////

int lab3_4_ex_5()
{
	int num[50], init = 0, sum = 0, big1 = 0, big2 = 0, i,temp;
	printf("Enter a series of natureal numbers, when finished enter '-1':\n");
	while (init != -1)
	{
		printf("Enter a N number: ");
		scanf("%d", &init);
		if (init <= 0 && init != -1)
		{
			printf("You have entered a negative number, try again\n\n");
		}
		else if (init == -1)
			break;
		else
		{
			num[sum] = init;
			sum++;
		}
	}

	for (i = 0;i < sum;i++)
		big1 = biger(big1, num[i]);

	for (i = 0;i < sum;i++)
	{
		temp=biger(big2, num[i]);
		if (temp == big1)
			temp = big2;
		big2 = temp;
	}

	printf("the biggest number you entered is %d\n", big1);
	printf("the second biggest number you entered is %d\n\n", big2);

	printf("\n");
	system("pause");
	return lab3_4();
}

///////////////////////////////////////////////////////

int lab3_4_ex_6()
{
	int num, i, cur=1, f1=1,f2=1;
	printf("enter a N number:\n");
	do
	{
		scanf("%d", &num);
		if (num <= 0)
			printf("You have entered a negative number, try again\n\n");
	} while (num <= 0);

	for (i = 2;i < num;i++)
	{
		cur = f1 + f2;
		f1 = f2;
		f2 = cur;
	}

	printf("the n number in fibonachhi is %d\n\n", cur);

	printf("\n");
	system("pause");
	return lab3_4();
}

/////////////////////////////////////////////////////////

int lab3_4_ex_7()
{
	int b_num, d_num, check;
	printf("Enter Binary number: ");
	do
	{
		scanf("%d", &b_num);
		check = b_check(b_num);
		if (!check)
			printf("you have entered non bunary number, try again\n\n");
	} while (!check);

	d_num = b2d(b_num);
	printf("%d is equal %d\n\n", b_num,d_num);
	printf("\n");
	system("pause");
	return lab3_4();
}

////////////////////////////////////////////////////////////

int biger(int a, int b)
{
	if (a > b)
		return a;
	return b;
}

////////////////////////////////////////////////////////////

int dig_count(num)
{
	int digi=0;

	while (num)
	{
		num = num/10;
		digi++;
	}
	

	return digi;
}

////////////////////////////////////

int b_check(int num)
{
	int digits,i,check;
	unsigned long long dev = 10;

	digits = dig_count(num);
	

	for (i = 0;i < digits;i++)
	{
		check = (num%dev)/(dev/10);
		dev *= 10;
		if (check != 1 && check != 0)
			return 0;
	}
	return 1;
}

////////////////////////////////////////////////////////////////////////////

int b2d(int num)
{
	int dec=0, digits,i,cur;
	unsigned long long dev = 10;

	digits = dig_count(num);
	for (i = 0;i < digits;i++)
	{
		cur = (num%dev) / (dev / 10);
		dec = dec + (pow(2,i))*cur;
		dev *= 10;

	}

	return dec;
}