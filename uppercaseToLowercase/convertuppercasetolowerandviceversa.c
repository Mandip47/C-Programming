#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
        //Easy method to print 
//      char s1[30];
//      printf("Enter a character\n");
//      scanf("%s",s1);
//      strlwr(s1);// It is for lowercase and for uppercase we use strupr()
//      printf("%s",s1);
       //Another method 
       char s2[30],length=0;
       int i;
       printf("Enter a character\n");
       scanf("%s",s2);
       length=strlen(s2);
       
       for(i=0; i<length; i++){
       	if(s2[i]>=65 && s2[i]<=90){
       		s2[i]=s2[i]+32;
	       }
       }
       printf("In lower case= %s",s2);
      getch();
      return 0;
}
      
