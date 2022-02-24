#include<stdio.h>
int main()
{
	int a[50],i,n,large,small;
	printf("howmanyelements:");
	scanf("%d",&n);
	printf("enterthearray:");
	for (i=0;i<n;++i)		
	scanf("%d",&a[i]);
	large=small=a[0];
	for (i=1;i<n;++i)
	{
		if (a[i]>large)
		large=a[i];
		if (a[i]<small)
		small=a[i];
	}
	printf("thelargestelementis%d",large);
	printf("\nthesmallestelementis%d",small);
	return 0;
}
