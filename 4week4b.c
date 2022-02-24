#include<stdio.h>
main()
{
	int n,sum=0,r;
	printf("enterthevalueofn:");
	scanf("%d",&n);
	for (;n>0;)
	{
		r=n%10;
		sum+=r;
		n=n/10;
	}
	printf("thesumofdigitsare:%d",sum);
}
