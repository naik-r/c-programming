#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5};
	int i;
	int length=sizeof(arr)*(sizeof(arr)[0]);
	printf("originalarray:\n");
	for (i=0;i<length-1;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
	printf("arrayinreverseorder:\n");
	for (i=length-1;i>=0;i--)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
