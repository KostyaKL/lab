#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//int drill_1();
//int drill_2();
//int drill_3();
//int drill_4();


int lab2()
{
	char drill_num[5]="";
		
	system("cls");
	printf("Welcome to Lab-2 select menu\n");
	printf("______________________________________\n");
	printf("Please select drill number:\n");
	printf("1 - 3 digit max\n2 = equation \n3 - 3 digit sum\n4 - calendar\n\nBack - Back to main\n");
	printf("Enter your choise: ");
	scanf("%s", drill_num);
	printf("\n");

	if (strcmp(drill_num, "1") == 0)
	{
		printf("\n");
		drill_1();
	}

	else if (strcmp(drill_num, "2") == 0)
	{
		printf("\n");
		drill_2();
	}

	else if (strcmp(drill_num, "3") == 0)
	{
		printf("\n");
		drill_3();
	}

	else if (strcmp(drill_num, "4") == 0)
	{
		printf("\n");
		drill_4();
	}

	else if (strcmp(drill_num, "back") == 0)
	{
		printf("\n");
		return main();
	}

	else 
	{
		printf("You have enterd invalid choise\n\n");
		system("pause");
		return lab2();
	}


	

	return main();
}

//////////////////////////////////////////////////////////////////////////

int drill_1()
{
	//drill 1 var
	int _3digit, dig1,dig2,dig3;

	//drill 1 - 3 digit max
	printf("Drill 1 - 3 digit max\n");
	printf("Enter 3 digit number: ");
	scanf("%d", &_3digit);
	if (_3digit > 999 || _3digit < 100)
	{
		printf("You have entered invalid number\n\n");
		system("pause");
		printf("\n");
		return drill_1();
	}
	dig1 = _3digit / 100;
	dig2 = _3digit / 10;
	dig2 = dig2 % 10;
	dig3 = _3digit % 10;

	if (dig1<dig2)
	{
		dig1=dig2;
	}
	if (dig1<dig3)
	{
		dig1=dig3;
	}

	printf("The higest digit is: %d\n\n", dig1);

	
	system("pause");
	printf("\n");
	return lab2();
}

////////////////////////////////////////////////////////////////////////////////

int drill_2()
{
	
	char chr=-3;
	int a, b, c;
	double x1, x2;

	printf("Drill 2 - equasion\n");
	printf("Enter your parameters for the equation ax%c+bx+c=0:\n", chr);
	printf("a: ");
	scanf("%d", &a);
	printf("b: ");
	scanf("%d", &b);
	printf("c: ");
	scanf("%d", &c);

	if ((b*b - 4 * a*c) < 0)
	{
		printf("There is no possible X values for this equation\n\n");
		system("pause");
		printf("\n");
		return drill_2();
	}

	else if ((b*b - 4 * a*c) == 0)
	{
		x1 = (-b)/(2.0*a);
		printf("%dx%c+%dx+%d=0 : x = %0.2lf\n\n", a, chr, b, c, x1);
	}

	else
	{
		x1 = (-b + sqrt(b*b - 4 * a*c)) / (2.0 * a);
		x2 = (-b - sqrt(b*b - 4 * a*c)) / (2.0 * a);
		printf("%dx%c+%dx+%d=0 => x1 = %0.2lf, x2 = %0.2lf\n\n", a, chr, b, c, x1, x2);

	}
	system("pause");
	printf("\n");
	return lab2();
}

///////////////////////////////////////////////////////////////////////////////

int drill_3()
{
	int num_, num_1, num_2, num_3, sum_;

	printf("Drill 2 - 3 digit sum\n");
	printf("Enter 3 digit number: ");
	scanf("%d", &num_);
	if (num_ > 999 || num_ < 100)
	{
		printf("You have entered invalid number\n\n");
		system("pause");
		printf("\n");
		return drill_3();
	}
	num_1 = num_ / 100;
	num_2 = num_ / 10;
	num_2 %= 10;
	num_3 = num_ % 10;

	sum_ = num_1 + num_2 + num_3;
	printf("The sum of the digits is: %d\n\n", sum_);

	system("pause");
	printf("\n");
	return lab2();
}

////////////////////////////////////////////////////////////////////////////////

int drill_4()
{
	int day, month, year;

	printf("Drill 4 - calendar\n");
	printf("Enter your date\n");
	printf("Day: ");
	scanf("%d", &day);
	printf("Month: ");
	scanf("%d", &month);
	printf("Year: ");
	scanf("%d", &year);

	if (day > 31 || day < 1 || month > 12 || month < 1 || year < 1 || (month == 4 && day > 30) || (month == 6 && day > 30) || (month == 9 && day > 30) || (month == 11 && day > 30) || (month == 2 && day > 29))
	{
		printf("You have entered invalid date\n\n");
		system("pause");
		printf("\n");
		return drill_4();
	}

	if (month == 2 && day > 28)
	{
		if (year % 4 == 0 && day == 29)
		{
			if (year % 100 == 0)
			{
				if (year % 400 == 0)
				{
					
				}
				else
				{
					printf("You have entered invalid date\n\n");
					system("pause");
					printf("\n");
					return drill_4();
				}

			}
			else
			{
				
			}

		}
		else
		{
			printf("You have entered invalid date\n\n");
			system("pause");
			printf("\n");
			return drill_4();
		}
	}

	day += 1;

	if ((month == 4 && day > 30) || (month == 6 && day > 30) || (month == 9 && day > 30) || (month == 11 && day > 30))
	{
		day = 1;
		month += 1;
		printf("The next day is: %d.%d.%d\n\n", day, month, year);
	}

	else if ((month == 1 && day > 31) || (month == 3 && day > 31) || (month == 5 && day > 31) || (month == 7 && day > 31) || (month == 8 && day > 31) || (month == 10 && day > 31) || (month == 12 && day > 31) )
	{
		day = 1;
		month += 1;
		if (month > 12)
		{
			month = 1;
			year += 1;

		}
		printf("The next day is: %d.%d.%d\n\n", day, month, year);
	}

	else if (month == 2 && day > 28)
	{
		if (year % 4 == 0 && day == 29)
		{
			if (year % 100 == 0)
			{
				if (year % 400 == 0)
				{
					printf("The next day is: %d.%d.%d\n\n", day, month, year);
				}
				else
				{
					day = 1;
					month += 1;
					printf("The next day is: %d.%d.%d\n\n", day, month, year);
				}
				
			}
			else
			{
				printf("The next day is: %d.%d.%d\n\n", day, month, year);
			}
			
		}
		else 
		{
			day = 1;
			month += 1;
			printf("The next day is: %d.%d.%d\n\n", day, month, year);
		}
	}

	else
	{
		printf("The next day is: %d.%d.%d\n\n", day, month, year);
	}

	system("pause");
	printf("\n");
	return lab2();
}

