#include <stdio.h>
#include <conio.h>

int main(){
	int rows,columns,i,j,sum;
	printf("Enter the number of rows of a matrix= ");
	scanf("%d",&rows);
	printf("Enter the number of columns of a matrix= ");
	scanf("%d",&columns);
	int a[rows][columns],b[rows][columns],c[rows][columns];
// For first matrix
	printf("\n\nFor first matrix\n");
	for (i=0; i<rows; i++){
	  printf("Enter row %d\n",i+1);
		for(j=0; j<columns; j++){
			scanf("%d",&a[i][j]);
		}
	}
// For second matrix
   printf("\n\nFor second matrix\n");
	for (i=0; i<rows; i++){
	  printf("Enter row %d\n",i+1);
		for(j=0; j<columns; j++){
			scanf("%d",&b[i][j]);
		}
	}
//printf("%d",b[0][0]);	
//For sum of them
   	for (i=0; i<rows; i++){
		for(j=0; j<columns; j++){
		 sum=a[i][j]+b[i][j];
		 c[i][j]=sum;
		}
	}
//	printf("%d",c[0][0]);
// for print
printf("The sum of first and second matrix is \n");
       	for (i=0; i<rows; i++){
       		printf("\n");
		for(j=0; j<columns; j++){
		 printf("%d  ",c[i][j]);
		}
	}
	getch();
	return 0;
}

