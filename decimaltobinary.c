#include<stdio.h>
long tobin(int);
int main()
{
	long bno;
	int dno;
	printf("\n\nfunction:convertdecimaltobinary:\n");
	printf("------------------------------------\n");
	printf("inputanydecimalnumber:");
	scanf("%d",&dno);
	bno=tobin(dno);
	printf("\nthebinaryvalueis:%d\n\n",bno);
	return 0;
}
long tobin(int dno)
{
	long bno=0,remainder,f=1;
	while(dno!=0)
	{
		remainder=dno%2;
		bno=bno+remainder*f;
		f=f*10;
		dno=dno/2;
	}
	return bno;
}
