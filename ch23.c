/*
 * ch23.c
 *
 *  Created on: Apr 19, 2018
 *      Author: Howard
 */
#include<stdio.h>
int main()
{
	printf("Geometry Calculator\n"
			"\t1. Calculate the Area of a Circle\n"
			"\t2. Calculate the Area of a Rectangle\n"
			"\t3. Calculate the Area of a Triangle\n"
			"\t4. Quit\nEnter your choice(1234) ");
	int inNum;
	float length=0;
	float width=0;
	fflush(stdout);
	inNum= getchar();
	switch(inNum)
	{
	case '1':printf("\nEnter the radius: ");
			 fflush(stdout);
			 scanf("%f",&length);
			 printf("\n%f",length*length*3.14159);
			 break;
	case '2':printf("\nEnter the length and width: ");
			 fflush(stdout);
			 scanf("%f %f",&length,&width);
			 printf("\n%f",length*width);
			 break;
	case '3':printf("\nEnter the base and height: ");
			 fflush(stdout);
			 scanf("%f %f",&length,&width);
			 printf("\n%f",length*width*0.5);
			 break;
	}
	return 0;

}

