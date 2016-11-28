#include <stdio.h>
#include <stdlib.h>

int op1();	//option 1 function
int op2();	//option 2 function
int op3();	//option 3 function
int op4(coutn);	//option 4 function
int op5();	//option 5 function
int other();	//any other choise function

int hagasha_1()
{
	int num_sel, on = 1, count=0;
	//num_sel - user coise
	//on - loop condition
	//count - how many times the main manue poped

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

int op1() //print disconectin and return to main menue
{
	system("cls");
	printf("Disconnecting\n\n");
	system("pause");
	return 1;
}

int op2()	//return to main menue
{
	return 1;
}

int op3()	//exit only if 'Y' or 'y' is pressed, otherwisse back to main menue
{
	char user_c;
	//user_c - the character that is entered by the user
	system("cls");
	printf("Are you sure you want to cancel the order???\n"
		"Please enter one char: ");
	scanf(" %c", &user_c);
	if (user_c == 89 || user_c == 121)	//89 - Y	//121 - y
	{
		printf("Canceled\n\n");
		system("pause");
		return 0;
	}
	return 1;

}

int op4(int count)	//show how many times you have visited the main manue
{
	system("cls");
	printf("Your position in queue is %d\n\n", count);
	system("pause");
	return 1;
}

int op5()	//exit
{
	return 0;
}

int other()	//return to main manue when any other number than 1-5 is pressed
{
	system("cls");
	printf("Wrong input\n\n");
	system("pause");
	return 1;
}