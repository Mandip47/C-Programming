#include <stdio.h>
#include <conio.h>

int main(){
	int rows,column,sum,i,j,k=0;

    printf("Which matrix do you want to print\n");
    printf("Enter the number of rows in matrix= ");
    scanf("%d",&rows);
    printf("Enter the number of columns in matrix= ");
    scanf("%d",&column);
   	int a[rows][column];
    for (i=0; i<rows; i++){
    	printf("Enter element for row %d\n",i);
	    for(j=0; j<column; j++){
	    	scanf("%d",&a[i][j]);
	    	sum=sum+a[i][j];
		}
		}	
    for (i=0; i<rows; i++){
    	printf("\n");
           for(j=0; j<column; j++){
	       	printf("%d  ",a[i][j]);
		}
		}
		printf("\n\nTranspose of matrix\n");
		
        for (i=0; i<column; i++){
    	  printf("\n");
           for(j=0; j<rows; j++){
	       	printf("%d  ",a[j][i]);
		}
		}
		
	printf("\n\nThe sum of elements of a matrix is %d",sum);	
		
	
	printf("\n\nFor diagonally zero\n");
	 for (i=0; i<rows; i++){
    	printf("\n");
          for(j=0; j<column; j++){
	        	if(i==j)
	        	printf("%d  ",k);
	    		else
	    		printf("%d  ",a[i][j]);
		}
		}
	getch();
	return 0;

}
