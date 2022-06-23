#include<stdio.h>
#include<conio.h>
int factorial(int);

int factorial(int a){
    int i,fact=1;
    if(a==1){
        return 1;
    }
    for (i = a; i >1;i--){
        fact*=i;
    }
    return fact;
}
int main(){
    int n;
    printf("Enter the number to check strong number or not= ");
    scanf("%d", &n);
    int s, check = n,sum=0;

    while(n!=0){
        s = n % 10;
        n = n / 10;
        sum+=factorial(s);
    }
if(sum==check){
    printf("Its a strong number");
}else{
    printf("Its not a strong number");
    printf("%d", sum);
}
}


