#include<stdio.h>
int checkprimenumber(int n);
int main()
{
	int n1,n2,i,flag;
	printf("entertwopositiveintegers:");
	scanf("%d%d",&n1,&n2);
	printf("primenumbersbetween%dto%dare:",n1,n2);
	for (i=n1;i<n2;++i)
	{
		flag=checkprimenumber(i);
		if (flag==1)
		printf("%d",i);
	}
	return 0;
}
int checkprimenumber(int n)
{
	int j,flag=0;
	for (j=2;j<=n;++j)
	{
		if (n%j==0)
		{
			flag++;
		}
	}
	return flag;
}
