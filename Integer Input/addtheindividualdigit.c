#include <stdio.h>
#include <conio.h>

int main(){
 long int n;
 int sum, rem;
 printf("Enter a number");
 scanf("%d", &n);
//  printf("%d", n % 10);
//  printf("%d", n / 10);
  do{
      sum=0;
      do{
          rem = n % 10;
          sum = sum + rem;
          n = n / 10;

      } while (n != 0);
      n = sum;
  } while (sum / 10 != 0);
  printf("sum=%d", sum);
 getch();
 return 0;
}