#include <stdio.h>
#include <conio.h>

int main(){
	int a,b,sum=0;
	printf("Enter digit number");
	scanf("%d",&a);
    while(a!=0){
 	b=a%10;
 	sum=sum+b;
 	a=a/10;	
    } 
	printf("the sum of its digits is %d",sum);
	
	getch();
	return 0;
}
