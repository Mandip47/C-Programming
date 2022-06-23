#include <stdio.h>
#include <conio.h>

int main(){
    char pattern[8] = "pulchwok";
    int i, j;
    for (i = 7; i >= 0; i--){
        for (j = 7; j >= i; j--){
            printf("%c", pattern[j-1]);
        }
      printf("\n");
    }
   getch();
    return 0;
}