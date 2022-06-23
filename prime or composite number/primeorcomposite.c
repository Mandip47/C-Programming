#include <stdio.h>
#include <conio.h>

int main(){
	int i,a,rem,count=0;
	printf("Enter a number= ");
	scanf("%d",&a);
	
	for(i=1; i<=a; i++){
		rem = a%i;
		if(rem==0)
			count++;
	}
	if (count==2){
		printf("it is a prime number");
	}
	else {
	
	 printf("it is a composite number");
}
	getch();
	return 0;
}

