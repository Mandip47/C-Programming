#include <stdio.h>
#include <conio.h>

int main(){
	int i;
	int a[2];
	printf("Enter three numbers here\n");
	for(i=0; i<=2; i++){
		scanf("%d",&a[i]);
	}
	if(a[0]<a[1]&&a[0]>a[2]){
		printf("The middle number is %d",a[0]);
		
	}
	else if(a[1]<a[0]&&a[1]>a[2]){
		printf("The middle number is %d",a[1]);	
	}
	else{
	printf("The middle number is %d",a[2]);	
	}
	getch();
	return 0;
}

