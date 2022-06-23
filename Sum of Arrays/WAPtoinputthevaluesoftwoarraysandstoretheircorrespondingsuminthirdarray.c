#include <stdio.h>
#include <conio.h>

int main(){
	int a[5],b[5],c[5],i,j,k;
	printf("Enter first array elements here \n");
	for(i=0; i<5; i++){
		scanf("%d",&a[i]);
	}
	printf("Enter second array elements here \n");
	for(j=0; j<5; j++){
		scanf("%d",&b[j]);
	}
	for(k=0; k<5; k++){
		c[k]=a[k]+b[k];
		printf("The value of third array are %d\n",c[k]);
	}
	
	getch();
	return 0;
}
