#include<stdio.h>
int main()
{
	int i,j,rows;
	int count=1;
	printf("enterthenumbersofrows:");
	scanf("%d",&rows);
	for (i=0;i<=rows;++i)
	{
		for(j=1;j<=i;++j)
		{
			printf("%d",count);
			count=!count;
		}
		count=i%2;
		printf("\n");
	}
}
