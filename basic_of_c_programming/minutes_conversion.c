// This program converts minutes into years and days.
#include <stdio.h>

int main() {
	int minutes_entered;
	double years=0.0;
	double days=0.0;
	double minutes_in_year=0.0;
	double minutes_in_day=0.0;
	printf("enter the no. of minutes:\n ");
	scanf("%d",& minutes_entered);

    minutes_in_year=(60*24*365);
	years=(minutes_entered/minutes_in_year);
	printf("years:%f\n ",years);
	
	minutes_in_day=(60*24);
	days=(minutes_entered/minutes_in_day);
	printf("days:%f\n ",days);
	
	return 0;
}