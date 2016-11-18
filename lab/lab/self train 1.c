#include <stdio.h>
#include <math.h>

int self_train1()
{
	//drill 1 var//
	int meter,cm;

	//drill 2 var//
	int num1, num2, sum, diff, mult;

	//drill 3 var//
	int base1, base2;
	float area;

	//drill 4 var//
	int work_h, pay_p_h, nis, agorot;

	//drill 5 var//
	int car2, hours, mins;
	float dist, car1;

	//drill 6 var//
	int cones, box_cap, full_box, empty_box;;

	//drill 8 var//
	float area_circ;


	//drill 9 var//
	int power_num, power_num_i;


	printf("Self Train 1\n------------\n\n");

	//drill 1 - height calc//
	printf("Drill 1 - height calc\nEnter your height in cm: ");
	scanf("%d", &cm);
	meter = cm / 100;
	cm %= 100;
	printf("Your height is %d m %d cm\n\n", meter, cm);

	//drill 2 - calc func//
	printf("Drill 2 - Calculator Functions\nEnter your first number: ");
	scanf("%d", &num1);
	printf("Enter your second number: ");
	scanf("%d", &num2);
	sum = num1 + num2;
	diff = num1 - num2;
	mult = num1*num2;

	printf("sum = %d\ndiff = %d\nmult = %d\n\n", sum, diff, mult);

	//drill 3 - tri area//
	printf("Drill 3 - Triangle Area\nEnter 1st base value: ");
	scanf("%d", &base1);
	printf("Enter 2nd base area: ");
	scanf("%d", &base2);
	area = base1*base2;
	area /= 2;
	printf("The area of the triangle is: %f\n\n", area);

	//drill 4 - salary//
	printf("Drill 4 - salary calc\nEnter your hour value: ");
	scanf("%d", &pay_p_h);
	printf("Enter the amount of hours you have worked this month: ");
	scanf("%d", &work_h);
	nis = work_h*pay_p_h;
	agorot = nis * 66;
	agorot %= 100;
	nis *= 66;
	nis /= 100;
	printf("Your salary this month after 33 %% taxes is: %d.%d nis\n\n", nis, agorot);

	//drill 5 - car dist//
	printf("Drill 5 - Car Distance\nEnter the speed of car no.1: ");
	scanf("%f", &car1);
	printf("Enter the speed of car no.2: ");
	scanf("%d", &car2);
	printf("Enter the time to destination\nHours: ");
	scanf("%d", &hours);
	printf("Minutess: ");
	scanf("%d", &mins);
	car1 += car2;
	car1 /= 60;
	hours *= 60;
	mins += hours;
	dist = car1*mins;
	printf("The distance between the cars is %f km\n\n", dist);

	//drill 6 - carton box//
	printf("Drill 6 - Carton Box\nEnter number of cones made per day: ");
	scanf("%d", &cones);
	printf("Enter the box capacity: ");
	scanf("%d", &box_cap);
	full_box = cones / box_cap;
	empty_box = full_box*box_cap;
	empty_box = cones - empty_box;
	printf("You require %d boxes and you will have %d cones in a spare box\n\n", full_box, empty_box);

	//drill 8 - circle circumference//
	printf("Drill 8 - Circle Circumference\nEnter the circle area: ");
	scanf("%f", &area_circ);
	area_circ /= 3.14;
	area_circ = sqrt(area_circ);
	area_circ *= 6.28;
	printf("The circumference of the circle is: %f\n\n", area_circ);

	//drill 9 - expo//
	printf("Drill 9 - Exponantial function\nEnter your number: ");
	scanf("%d", &power_num_i);
	power_num = power_num_i*power_num_i; //num^2
	power_num *= power_num; //num^4
	power_num *= power_num; //num^8
	power_num *= power_num_i; //num^9
	printf("%d ^ 9 = %d\n\n", power_num_i, power_num);



	return main();
}