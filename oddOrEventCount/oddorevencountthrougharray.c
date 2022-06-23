#include <stdio.h>
#include <conio.h>

int main(){
	int a[10],evencount=0,oddcount=0,i;
	printf("Enter a number here\n");
	for(i=0; i<10; i++){
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		evencount++;
		else
		oddcount++;
	}
	printf("Total evencount= %d\n",evencount);
	printf("Total oddcount= %d",oddcount);
getch();
return 0;	
}
