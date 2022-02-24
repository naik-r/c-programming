#include<stdio.h>
main()
{
	int year;
	printf("enteryear:");
	scanf("%d",&year);
	if (((year%4==0)&&(year%100!=0))||(year%400==0))
	{
		printf("leapyear");
	}
	else
	{
		printf("commonyear");
	}
}
