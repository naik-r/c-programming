#include<stdio.h>
 main() {
 	int a,b,c,d,n;
 	printf("enter the no,of rows: ");
 	scanf("%d",&n);
 	for(a=1;a<=n;a++) {
 		for(b=1;b<=n-a;b++) {
 			printf(" ");
		 }
	for(c=1;c<=a;c++) {
		printf("%d",c);
	}
	for(d=a-1;d>=1;d--) {
		printf("%d",d);
	}	 
	printf("\n");
	 }
 }
