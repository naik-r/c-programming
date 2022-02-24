#include<stdio.h>
main()
{
	float units,price;
	printf("enterunitsconsumed");
	scanf("%f",&units);
	if ((units>=0)&&(units<=100))
	{
		price=units*4.0;
		printf("%f",price);
	}
	else if ((units>=101)&&(units<=150))
	{
		price=units*4.6;
		printf("%f",price);
	}
	else if ((units>=151)&&(units<=200))
	{
		price=units*5.2;
		printf("%f",price);
	}
		else if ((units>=201)&&(units<=300))
		{
			price=units*6.3;
			printf("%f",price);
		}
		else{
			price=units*8.0;
			printf("%f",price);
            }
}
