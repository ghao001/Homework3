/*
 * C16.c
 *
 *  Created on: Apr 19, 2018
 *      Author: Howard
 */
#include<stdio.h>
int displayPop(int, float, float, int);
int main()
{
	printf("Starting size of the population: ");
	float dRate;
	float bRate;
	int pop;
	int year;
	scanf("%d",&pop);
	printf("\nThe annual birth rate: ");
	scanf("%f",&bRate);
	printf("\nThe annual death rate: ");
	scanf("%f", &dRate);
	printf("\nThe number of years to display: ");
	scanf("%d", &year);
	displayPop(year,dRate,bRate,pop);
	return 0;
}
int displayPop(int years, float dRate, float bRate, int newPop)
{
	if(years==0)
	{
		return newPop;
	}
	else
	{
		years--;
		newPop=(int)displayPop(years,dRate,bRate,newPop)*(1+bRate-dRate);
		printf("Year %d: %d\n",years+1,newPop);
		return newPop;
	}
}

