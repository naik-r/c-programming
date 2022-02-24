#include<stdio.h>
int main()
{
	int b,f,p,s,price_burger,price_french_fries,price_pizza,price_sandwiches;
	char ch,B,F,P,S;
	printf("\n1=burger\n2=frenchfries\n3=pizza\n4=sandwiches");
	printf("enteryourorder\npleaseenterthechoice 1,2,3,4\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("yourorderisburger\n");
			printf("pleaseenteryourquantity");
			scanf("%d",&b);
			price_burger=200*b;
			printf("yourtotalchargesis:%d",price_burger);
			break;
			case 2:
				printf("yourorderisfrenchfries\n");
				printf("pleaseenteryourquantity");
				scanf("%d",&f);
				price_french_fries=50*f;
				printf("yourtotalchargesis:%d",price_french_fries);
				break;
				case 3:
					printf("yourorderispizza\n");
					printf("pleaseenteryourquantity");
					scanf("%d",&p);
					price_pizza=500*p;
					printf("yourtotalchargesis:%d",price_pizza);
					break;
					case 4:
						printf("yourorderissandwiches\n");
						printf("pleaseenteryourquantity");
						scanf("%d",&s);
						price_sandwiches=150*s;
						printf("yourtotalchargesis:%d",price_sandwiches);
						break;
						default:
							printf("invalidyourchoice");
							break;
	}
}
