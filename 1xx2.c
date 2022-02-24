#include<stdio.h>
#include<math.h>
void main()
{
	int n,x,i,sum=0;
	printf("enterthelimit\n");
	scanf("%d",&n);
	printf("enterthevalueofx\n");
	scanf("%d",&x);
	if (x<0||n<0)
	{
		printf("illegalvalue");
	}
	else
	{
		for(i=0;i<=n;i++)
		{
			sum=sum+pow(x,i);
		}
		printf("sum=%d",sum);
	}
}
