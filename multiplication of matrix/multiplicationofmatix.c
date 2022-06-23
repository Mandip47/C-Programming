#include <stdio.h>
#include <conio.h>

int main(){
	int i,j,rows1,columns1,rows2,columns2,multiplication=0,k;
	printf("Enter a number of rows of first matix = ");
	scanf("%d",&rows1);
	printf("Enter a number of columns of first matrix =");
	scanf("%d",&columns1);
	printf("Enter a number of rows of second matix = ");
	scanf("%d",&rows2);
	printf("Enter a number of columns of second matrix =");
	scanf("%d",&columns2);
	if(columns1==rows2){

	int a[rows1][columns2],b[rows1][columns2],c[columns1][rows2];
	// for first matrix
	printf("Enter the elements of first matrix\n\n");
	for(i=0; i<rows1; i++){
		printf("Enter %d row of matrix first\n",i+1);
		for(j=0; j<columns1; j++){
    	scanf("%d",&a[i][j]);
    }
    }
    //for second matrix
	printf("Enter the elements of second matrix\n\n");
	for(i=0; i<rows2; i++){
		printf("Enter %d row of matrix second\n",i+1);
		  for(j=0; j<columns2; j++){
    	     scanf("%d",&b[i][j]);
        }
    }
    //showing first and second matrix
	printf("Your first matix is\n");
	for(i=0; i<rows1; i++){
       printf("\n");
		for(j=0; j<columns1; j++){
          printf("%d   ",a[i][j]);
    }
    }

	printf("\n\nYour Second matix is\n");
	for(i=0; i<rows2; i++){
         printf("\n");
	    	for(j=0; j<columns2; j++){
         printf("%d   ",b[i][j]);
    }
    }
    
    // multiplication of them
    printf("\nMultiplication of them is\n");
	for(i=0; i<rows1; i++){
		for(j=0;j<columns2; j++){
			multiplication=0;
			  for(k=0;k<rows1;k++){
		    	multiplication=multiplication+a[i][k]*b[k][j];
				}
    	c[i][j]=multiplication;
    }
    }
   //for print matix c
	printf("\nYour multiplication matix is\n");
	for(i=0; i<rows1; i++){
        printf("\n");
	    	for(j=0; j<columns2; j++){
             printf("%d  ",c[i][j]);
    }
    }
     
}
else{
	printf("\n\n!!<<<<_COLUMNS OF FIRST MATRIX AND ROWS OF SECOND MATRIX MUST BE SAME_>>>>!!");
}
    
	
	getch();
	return 0;
}
