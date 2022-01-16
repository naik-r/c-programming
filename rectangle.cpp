#include<stdio.h>
 main() {
 	int i,j,rows,cols;
 	printf("enter the rows and cols: ");
 	scanf("%d%d",&rows,&cols);
 	
 	for(i=0;i<rows;i++) {
 		for(j=0;j<cols;j++) {
 			printf("*");
		 }
		 printf("\n");
	  }
 }
