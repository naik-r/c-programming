#include<stdio.h>
 main() {
 	int i,j,rows;
 	int count=1;
 	printf("enter the no.of rows:");
 	scanf("%d",&rows);
 	for(j=0;j<rows;j++) {
 		for(i=0;i<=j;i++) {
 			printf("%d",i*j);
		 }
		 printf("\n");
	 }
 }
