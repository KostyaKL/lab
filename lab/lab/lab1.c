#include <stdio.h>

int lab1 ()
{
	
	
	float avg;
	double radius,speed;
	int num1, num2;
	float exam, lab, fgrade;
	int distance, hours, minutes;
	int sw1, sw2, temp;
	int car_dist, fly_dist,fly_hr,fly_min;
	float car1_spd, car2_spd, fly_spd, fly_time;

	printf("LAB 0-1\n-------\n\n");
	
	//exercise 2//
	printf("Exercise 2\nHello, my name is Kostya Lokshin\n\n");
	
	//exercise 3//
	printf("Exercise 3\n****\n*  *\n*  *\n*  *\n*  *\n*  *\n****\n\n");
	
	//exercise 4//
	printf("Exercise 4\n  @  \n @@@ \n@@@@@\n\n");
		
	//exercise 5//
	printf("Exercise 5\nenter your radius: ");
	scanf("%lf", &radius);
	radius = radius*radius*3.14;
	printf("The circle area is: %lf\n\n", radius);

	//exercise 6//
	printf("Exercise 6\nCalculate AVG\nNum1: ");
	scanf("%d", &num1);
	printf("Num2: ");
	scanf("%d", &num2);
	avg = (num1 + num2);
	avg /= 2;
	printf("Your avarage is:\n(%d+%d)/2=%f\n\n", num1, num2, avg);


	//exercise 7//
	printf("Exercise 7\nFinal grade calculator\nExams grade: ");
	scanf("%f", &exam);
	printf("Lab grade: ");
	scanf("%f", &lab);
	exam *= 0.8;
	lab *= 0.2;
	fgrade = exam + lab;
	printf("Your final grade is: %f\n\n", fgrade);

	//exercise 8//
	printf("Exercise 8\nEnter your trip distance: ");
	scanf("%d", &distance);
	printf("enter your speed: ");
	scanf("%lf", &speed);
	speed /= 60;
	minutes = distance / speed;
	hours = minutes / 60;
	minutes = minutes - 60 * hours;
	printf("Your time to destination is %d hours and %d minutes\n\n", hours,minutes);

	//exercise 9//
	printf("Exercise 9\nEnter distance: ");
	scanf("%d", &car_dist);
	printf("Enter car 1 speed: ");
	scanf("%f", &car1_spd);
	printf("Enter car 2 speed: ");
	scanf("%f", &car2_spd);
	fly_spd = car1_spd + 5;
	car1_spd += car2_spd;
	car1_spd /= 60;
	fly_time = car_dist / car1_spd;
	fly_dist = fly_time*fly_spd;
	fly_dist /= 60;
	fly_spd /= 60;
	fly_min = fly_dist / fly_spd;
	fly_hr = fly_min / 60;
	fly_min = fly_min - 60 * fly_hr;
	printf("The flys speed is 5 km/h faster than car 1\nThe fly has traveled %d km in %d hours and %d minutes\n\n", fly_dist, fly_hr, fly_min);

	//exercise 10a//
	printf("Exercise 10a\nEnter your first number: ");
	scanf("%d", &sw1);
	printf("Enter your second number: ");
	scanf("%d", &sw2);
	temp = sw1;
	sw1 = sw2;
	sw2 = temp;
	printf("First number: %d\nSecond number: %d\n\n", sw1, sw2);

	//exercise 10b//
	printf("Exercise 10b\nEnter your first number: ");
	scanf("%d", &sw1);
	printf("Enter your second number: ");
	scanf("%d", &sw2);
	sw1 += sw2;
	sw2 = sw1 - sw2;
	sw1 = sw1 - sw2;
	printf("First number: %d\nSecond number: %d\n\n", sw1, sw2);

	return main();
}