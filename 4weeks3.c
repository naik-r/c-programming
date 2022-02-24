#include<stdio.h>
void main()
{
	int i,n,sum=0;
	printf("inputnumberofterms:");
	scanf("%d",&n);
	printf("\ntheoddnumberare:");
	for (i=1;i<=n;i++)
	{
		printf("%d",2*i-1);
		sum+=2*i-1;
	}
	printf("\nthesumofoddnaturalnumberupto%dterms:%d\n",n,sum);
}
