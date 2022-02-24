#include<stdio.h>
main()
{
	int a[4][3];
	int i,j;
	for (i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enterthevalueofordisp[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}
