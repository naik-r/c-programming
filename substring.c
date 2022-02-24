#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20],str2[20];
	int l1,l2,i,n;
	puts("enterthestring1\n");
	gets(str1);
	l1=strlen(str1);
	puts("enterthestring2\n");
	gets(str2);
	l2=strlen(str2);
	printf("enterthepositionwherethestringistobeinserted\n");
	scanf("%d",&n);
	for (i=n;i<l1;i++)
	{
		str1[i+l2]=str1[i];
	}
	for (i=0;i<l2;i++)
	{
		str1[n+i]=str2[i];
	}
	printf("afterinsertingthestringis%s",str1);
}
