/*
Assigned by:
Student 1: Melinda Levi ID:123456789
Student 2: Kostya Lokshin ID:310765821	*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int num_sel, on = 1, count=0;
		//num_sel - user coise
	//on - loop condition
	//count - how many times the main manu has poped

	/*A loop that holds the main menu, while a is TRUE, using switch case to handle user input,
	for each number that i enterd a relevant function is called,
	each function will return 1 or 0, if 1 is returnde then a will remain 1 and hold the loop
	if 0 is returend then a will be equal 0 and the loop will break and the program will exit*/
	
	do  
	{
		count++;
		system("cls");
		printf("Welcoe to Yossi's Telemarketing costumer service!\n"
			"__________________________________________\n"
			"Please enter number in the range 1-5: ");
		scanf("%d", &num_sel);
		switch (num_sel)
		{
		case 1:
			on=op1(); //call function for the option 1
			break;
		case 2:
			on=op2(); //call function for the option 2
			break;
		case 3:
			on=op3(); //call function for the option 3
			break;
		case 4:
			on=op4(count); //call function for the option 4
			break;
		case 5:
			on=op5(); //call function for the option 5
			break;
		default:
			on=other(); //call function for any other key entered
		}
	} while (on);
	
	exit(1);
}

int op1() //print disconectin and return to main menu
{
	system("cls");
	printf("Disconnecting\n\n");
	system("pause");
	return 1;
}

int op2()	//return to main menu
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

int op4(int count)	//show how many times you have visited the main menu
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

int other()	//return to main menu when any other char/number than 1-5 is pressed
{
	system("cls");
	printf("Wrong input\n\n");
	system("pause");
	return 1;
}