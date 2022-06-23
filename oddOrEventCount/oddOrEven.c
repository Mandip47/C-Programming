#include <stdio.h>
#include <conio.h>

int main(){
    int a,evencount=0,oddcount=0;
   
    while (a!=0){
    printf("ENTER A NUMBER");
    scanf("%d", &a);
    if(a%2==0){
        evencount++;
    }
    else{
        oddcount++;
    }
    }
    printf("Evencount= %d\n", evencount);
    printf("Odd count= %d", oddcount);
    getch();
    return 0;
}