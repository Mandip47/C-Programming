#include <stdio.h>
#include <conio.h>
void loopFunction(int , int);
int main(){
    int n1,n2;
	printf("Enter two number");
	scanf("%d%d",&n1,&n2);
    n1 > n2 ? loopFunction(n2, n1) : loopFunction(n1, n2);
    getch();
    return 0;
}

void loopFunction(int a,int b){
    for(int i=a;i<=b;i++)	{
		if(i%2==0){
		printf("\t%d",i);
		}
	}
}