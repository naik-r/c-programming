#include<stdio.h>
void main()
{
	int i,n,sum=0;
	printf("inputnumberofterms:");
	scanf("%d",&n);
	printf("\ntheevennumbersare:");
	for (i=1;i<=n;i++)
	{
		printf("%d",2*i);
		sum+=2*i;
	}
	printf("\nthesumofevennaturalnumbersupto%d=%d",n,sum);
}
