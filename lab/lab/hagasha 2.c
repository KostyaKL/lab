/*
Assigned by:
Student 1: Melinda Levi ID:201310356
Student 2: Kostya Lokshin ID:310765821
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//declaration of functions:
void h2_ex1(); //function for excercise 1
void arr_sum_up(int*, int);//function to sum the array

void h2_ex2(); //function for excercise 2
int ab_range(int, int); // function to simplify the problem in ex 2

void h2_ex3(); //function for excercise 3
void print_pascal_line(int); //functio to print a N line in pascal peramid
void print_space(int);// function to print a space in a N line in pasca peramid

void h2_ex4(); //function for excercise 4
int dev_sum(int); //function to calculate the sum of the whole deviders of a N number
int betro(int); // function to check if a number have a betrohed number
int round_num(double);//function to return the round (up/down) of a number

void h2_ex5(); //function for excercise 5
double new_rap(double, double); // function to calculate the root of a number using Newton-Raphsin method
double absolut(double a); //function to return an absolut value of a number


int hagasha_2()
{
	int select = 0, i, all_Ex_in_loop = 0;
	/*
	select - value to choose an exercise to display
	i - index to print the menu
	all_ex_in_loop - value to choose if the program will return to main menu at the end of an exersice or it will exit
	*/
	system("cls");
	printf("Run menu once or cyclically?\n(Once - enter 0, cyclically - enter other number) ");
	if (scanf("%d", &all_Ex_in_loop) == 1) // determin if the value for loop condition is a number, if not exit the program
		do
		{
			system("cls");
			printf("Choose exercise number: \n");
			for (i = 1; i <= 5; i++)//loop to print the main menu
				printf("Ex%d--->%d\n", i, i);
			printf("\nEXIT-->0\n\n");
			do {
				select = 0;
				printf("please select 0-5 : ");
				scanf("%d", &select);
			} while ((select < 0) || (select > 5));//loop to get a correct input from the user to choose the exercise to show
			printf("\n");
			switch (select) {//main menu switch case
			case 1:	h2_ex1();//calling the function for ex 1
				break;
			case 2: h2_ex2();//calling the function for ex 2
				break;
			case 3: h2_ex3();//calling the function for ex 3
				break;
			case 4: h2_ex4();//calling the function for ex 4
				break;
			case 5: h2_ex5();//calling the function for ex 5
				break;
			}
		} while (all_Ex_in_loop && select); //determin if the program will return to main menu at the end of an exersice or it will exit
		return main();
}

///////////////////////////////////////////////////////////////

void h2_ex1()
{
	int *arr, i, size_a = 1;
	/*
	arr - pointer for the start of an array
	i - index
	size_a - a value for the user to enter the size of an array
	*/
	printf("Enter the size of the array: ");
	do
	{
		scanf("%d", &size_a);
		if (size_a < 0)
			printf("You must enter a positive number");
	} while (size_a < 0);// loop to get a correct number witch represents a size of an array

	arr = (int*)malloc(size_a * sizeof(int));//memory allocation for an array that starts at arr in the size of "size_a" input

	printf("Enter an array of %d number:\n", size_a);

	for (i = 0; i < size_a;i++)//input number into the array from the user
		scanf("%d", (arr + i));

	arr_sum_up(arr, size_a);

	for (i = 0;i<size_a;i++)//print the new arry after the change of the numbers
		printf("%d\t", *(arr + i));

	printf("\n");
	free(arr);//free the memory that was allocated to the "arr" array
	system("pause");
}

///////////////////////////////////////////////////////////////

void arr_sum_up(int *a, int size) //function to sum the array
{
	int i;//i - index
	for (i = 0;i < size - 1;i++)//loop to change the value of a number at a specific position in the array to the sum of all the number in the array from the begining to the number
		*(a + i + 1) = *(a + i) + *(a + i + 1);//doing the above by summing the first two numbers and the going forward to the end of the array by summing the next number with the current
}

///////////////////////////////////////////////////////////////

void h2_ex2()
{
	int a, b;
	/*
	a - low limit
	b - high limit
	*/
	printf("Enter two numbers so that a<b:\n"
		"a: ");
	scanf("%d", &a);
	do
	{
		printf("b: ");
		scanf("%d", &b);
		if (a >= b)
			printf("Enter b bigger than a\n");
	} while (a >= b);//loop to get a and b and to make sure that b is bigger than a

	printf("Return Value: %d\n", ab_range(a, b));//print the diff of the two parts between a and b using ab_range function
	system("pause");
}

///////////////////////////////////////////////////////////////////

int ab_range(int a, int b) // function to simplify the problem in ex 2
{/*
 a - low limit input
 b - high limit input
 */
	int range = (a + b) / 2, num = 0, sum_a = 0, sum_b = 0;
	/*
	range - the middle between a and b
	num - value to get input of numbers from the user
	sum_a - the sum from a to range
	sum_b - the sum from range to b
	*/
	printf("Enter a series of numbers, Enter '-1' when done\n");
	scanf("%d", &num);
	while (num != -1)// get input from the user until he hits -1, then stop
	{
		if (num > range && num < b) // condition to calculate the sum of user input between range until b
			sum_b += num;
		else if (num > a && num < range)// condition to calculate the sum of user input between a until range
			sum_a += num;
		scanf("%d", &num);
	}
	return sum_b - sum_a; //return the diff between sum_a and sum_b
}

///////////////////////////////////////////////////////////////

void h2_ex3()
{
	int lines, i;
	/*
	lines - the number of lines in pascal peramid to print
	i - index
	*/
	printf("Enter number of lines you want to print: ");
	do
	{
		scanf("%d", &lines);
		if (lines < 1)
			printf("Enter a positive number: ");
	} while (lines < 1);// make sure the user entered a positive number

	for (i = 0;i <= lines - 1;i++)
	{
		print_space(lines - i);//function to print space acording to the line is printed
		print_pascal_line(i);//function to print all the members of the line acording to the line is printed
		printf("\n");
	}
	system("pause");
}

///////////////////////////////////////////////////////////////

void print_pascal_line(int n)//function to print a N line in pascal peramid
{
	int pos = 1, k, i;
	/*
	pos - the value of a number in k position in N line in pascal peramid
	k - the position of a number in N line in pascal permaid
	i - index
	*/
	printf("%d  ", pos);
	if (n == 0)// print 1 if the line is 0
		return 1;

	for (k = n, i = 1;k > 0;k--, i++)// loop to print all the members of N line
	{
		pos = (pos*k) / i;//acording to the formula that in each row the ratio between two folowing numbers is k+i=line number, at first position i=1 and k=line number, each position the i++ and the k--
		printf("%d  ", pos);
	}
}

//////////////////////////////////////////////////////////////

void print_space(int line)// function to print a space in a N line in pasca peramid
{
	for (;line / 2 >= 0;line--)//loop to print (line number)/2 times space
		printf(" ");
}

///////////////////////////////////////////////////////////////

void h2_ex4()
{
	int num = 1, i = 0, lim = 0, flag = 0;
	/*
	num - number to find all the betrohed numbers below it
	i - index
	lim - value if there were no betrohed numbers found below num
	falg - determine if a number is betrohed or not
	*/
	printf("Enter your n number(for large number it may take a few seconds, be patient): ");
	do
	{
		scanf("%d", &num);
		if (num <= 0)
			printf("You have entered a negative number, try again\n");
	} while (num <= 0);//get correct input from the user for num
	i = num;
	do
	{
		flag = betro(i);
		if (flag < i);//if the index number has no betrohed or if the betrohed number that is found smaller than the number that was checked then do nothing and keep checking
		else
			lim = printf("The betrohed number of %d is %d\n", i, flag);// if betrohed number is found then print it
																	   //lim will change is value to 1 if at least one betrohed number is founf
		i--;
	} while (i >0);//loop to check all the numbers below num
	if (!lim)
		printf("There is no betrohed numbers bellow %d\n", num);//print if no betrohed numbers found below num

	system("pause");
}

//////////////////////////////////////////////////////////////////

int dev_sum(int num)//function to calculate the sum of the whole deviders of a N number

{
	int i, limit, sq, sum = 1;
	double s, n = num;
	/*
	i - index
	limit - the condition how many numbers to che for devisor
	sq - the root of the input number rounded up/down
	sum - the sum of whole devisors of num
	
	s - the square root of the input number
	n - input number in 'double' format for using in sqrt() function
	*/
	if (num == 1) //if the input number is 1 then the only divisor is 1, return it
		return 1;
	s = sqrt(n);//square root of the input number
	sq = round_num(s);// square root of the input number rounded up/down using function round_num

	if (num == sq*sq)// if the squre root of the input is a whole number the its one of the devisors and there is one less number needed to be checked
	{
		sum += sq;
		limit = sq - 1;
	}
	else//otherwise check the numbers up to the rounded suare root of the input
		limit = (int)(s);
	for (i = 2;i <= limit;i++)//check all the numbers starting with 2 until the limit that was set by the previous condition
		if (num%i == 0)//if the number devides the input without leftover the add it to the sum and ad the number that it devides the input to
			sum += i + num / i;
	return sum;//return the sum of whole devisors
}

///////////////////////////////////////////////////////////////

int round_num(double n)//function to return the round (up/down) of a number
{
	int whole = (int)n;//whole - the whole value of a double
	double temp;//temp - value to check the leftover

	temp = (n - whole) * 10;//calculate the left over and miltiply it by 10 so it will become a number between 0 to 9
	if (temp >= 5)//if the leftover is greater than 0.5 then round the number up and return the rounded value
		return whole + 1;
	else
		return whole;//if the leftover is smaller than 0.5 then round the number down and return the rounded value
}

///////////////////////////////////////////////////////////////

int betro(int num1)// function to check if a number have a betrohed number
{//input num1
	int num2 = dev_sum(num1) - 1;
	//num2 - the sum of all whole deviders of num1 -1
	if (dev_sum(num2) - 1 == num1)//if the sum of whole deviders of num2 -1 is equal to num1 then return the value of num2
		return num2;
	else// otherwise return 0
		return 0;

}

///////////////////////////////////////////////////////////////

void h2_ex5()
{
	double n, root;
	/*
	n - the input number from the user to calculate its root
	root - the output: root(n)
	*/
	printf("Enter the number you want to calculate the root for: ");
	do
	{
		scanf("%lf", &n);
		if (n < 0)
			printf("You have entered a negative number, try again\n");
	} while (n < 0);// make sure the input is positive
	root = new_rap(1, n);// calculate the root of n using new_rap funtion
	printf("The root of %.2lf is %.2lf\n", n, root);
	system("pause");
}

///////////////////////////////////////////////////////////////

double new_rap(double x, double n) // function to calculate the root of a number using Newton-Raphsin method
{
	double temp, ret;
	/*
	ret - the current value of x according to the recursive formula: xi+1=(xi-(((xi)^2)-n)/2xi)
	temp - the value of [xi-(xi-1)]
	*/
	ret = (x - (x*x - n) / (2 * x));//formula to calculate xi+1
	temp = ret - x;//calculate [xi-(xi-1)]
	temp = absolut(temp); // find the absolute value of temp using function absolut
	if (temp <= 0.00001)//return the value of x if the absolute value of temp is close to 0
		return x; // when the condition is met x=root(n)
	return new_rap(ret, n);//use recursion until the absolute value of temp is close to 0 
}

/////////////////////////////////////////////////////////////////////

double absolut(double a) //function to return an absolut value of a number
{
	if (a >= 0)//if the number is positive return the number
		return a;
	else
		return a*(-1);//if the number is negative, turn it to positive by multipling by -1 and return the positive number
}
