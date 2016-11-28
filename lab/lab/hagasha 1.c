#include <stdio.h>
#include <stdlib.h>

int op1();
int op2();
int op3();
int op4(coutn);
int op5();
int other();

int hagasha_1()
{
	int num_sel, on = 1, count=0;

	do
	{
		count++;
		system("cls");
		printf("Yossi's Telemarketing costumer service!\n"
			"__________________________________________\n"
			"Please enter number in the range 1-5: ");
		scanf("%d", &num_sel);
		switch (num_sel)
		{
		case 1:
			on=op1();
			break;
		case 2:
			on=op2();
			break;
		case 3:
			on=op3();
			break;
		case 4:
			on=op4(count);
			break;
		case 5:
			on=op5();
			break;
		default:
			on=other();
		}
	} while (on);
	
	exit(1);
}

int op1()
{
	system("cls");
	printf("Disconnecting\n\n");
	system("pause");
	return 1;
}

int op2()
{
	return 1;
}

int op3()
{
	char user_c;
	system("cls");
	printf("Are you sure you want to cancel the order???\n"
		"Please enter one char: ");
	scanf(" %c", &user_c);
	if (user_c == 89 || user_c == 121)
	{
		printf("Canceled\n\n");
		system("pause");
		return 0;
	}
	return 1;

}

int op4(int count)
{
	system("cls");
	printf("Your position in queue is %d\n\n", count);
	system("pause");
	return 1;
}

int op5()
{
	return 0;
}

int other()
{
	system("cls");
	printf("Wrong input\n\n");
	system("pause");
	return 1;
}