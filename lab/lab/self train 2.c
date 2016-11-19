#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int self_train2()
{
	char drill_num[5] = "";

	system("cls");
	printf("Welcome to Self Train 2 select page\n");
	printf("__________________________________________\n");
	printf("Please select drill number:\n");
	printf("3 - Absolute value\n");
	printf("4 - Devision\n");
	printf("5 - Range of numbers\n");
	printf("6 - Modulu 3\n");
	printf("7 - 3th power\n");
	printf("8 - an series\n\n");
	printf("Back - Return to main\n\n");
	printf("Exit - Quit\n\n");
	printf("Enter your choise: ");
	scanf("%s", drill_num);
	printf("\n");

	if (strcmp(drill_num, "3") == 0)
	{
		printf("\n");
		st2_d3();
	}

	else if (strcmp(drill_num, "4") == 0)
	{
		printf("\n");
		st2_d4();
	}

	else if (strcmp(drill_num, "5") == 0)
	{
		printf("\n");
		st2_d5();
	}

	else if (strcmp(drill_num, "6") == 0)
	{
		printf("\n");
		st2_d6();
	}

	else if (strcmp(drill_num, "7") == 0)
	{
		printf("\n");
		st2_d7();
	}

	else if (strcmp(drill_num, "8") == 0)
	{
		printf("\n");
		st2_d8();
	}

	else if (strcmp(drill_num, "back") == 0)
	{
		printf("\n");
		return main();
	}

	else if (strcmp(drill_num, "quit") == 0)
	{
		exit(0);
	}

	else
	{
		printf("You have enterd invalid choise\n\n");
		system("pause");
		return self_train2();
	}
	return main();
}

///////////////////////////////////////////////////////////////////////////////////////////
int st2_d3()
{
	//drill 3
	double num;
	printf("Enter your number: ");
	scanf("%lf", &num);
	if (num < 0)
	{
		num *= -1;
	}
	printf("The absolute value of your number is: %0.2lf\n\n", num);

	system("pause");
	return self_train2();
}

///////////////////////////////////////////////////////////////////////////////////////////
int st2_d4()
{
	//drill 4
	
	int num[2];
	printf("Enter two integers\n"
		   "Num1: ");
	scanf("%d", &num[1]);
	printf("Num2: ");
	scanf("%d", &num[2]);
	if (!(num[1] % num[2]))
		printf("%d/%d is devided without rest\n\n", num[1], num[2]);
	else
		printf("%d/%d is devide with rest\n\n", num[1], num[2]);

	system("pause");
	return self_train2();
}

///////////////////////////////////////////////////////////////////////////////////////////
int st2_d5()
{
	//drill 5
	int num[2],rng;
	printf("Enter two positive integers\n"
		"Num1: ");
	scanf("%d", &num[1]);
	printf("Num2: ");
	scanf("%d", &num[2]);
	if (num[1] < 0||num[2]<0)
	{
		printf("You have entered negative number, tru again\n");
		system("pause");
		printf("\n");
		return st2_d5();
	}

	if (num[1] == num[2])
		printf("The range between %d to %d is 0\n", num[1], num[2]);
		printf("\n");
		system("pause");
		return self_train2();

	if (num[2] > num[1])
	{
		num[2] += num[1];
		num[1] = num[2] - num[1];
		num[2] = num[2] - num[1];
	}
	
	printf("The range between %d to %d is:\n", num[1], num[2]);

	for (rng = (num[1] - num[2]-1);rng > 0;rng--)
		printf("%d\n", num[2]+rng);
	
	printf("\n");
	system("pause");
	return self_train2();
}

///////////////////////////////////////////////////////////////////////////////////////////
int st2_d6()
{
	return self_train2();
}

///////////////////////////////////////////////////////////////////////////////////////////
int st2_d7()
{
	return self_train2();
}

///////////////////////////////////////////////////////////////////////////////////////////
int st2_d8()
{
	return self_train2();
}