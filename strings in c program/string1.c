#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
//	int count=0,count1=0,i,len1=0,len2=0,value=0;
//	char name[30]=[30],surname[10];
//start:
//	printf("Guss my name\n");
//	scanf("%s",surname);
//    gets(name);
//	printf("Your name is %s\n",name);

//	count= strlen(name);
//	puts(name);
//	printf("YOUR COUNT IS %d\n",count);
//	puts(name);
	
//	for(i=0; name[i]!=0; i++){
//		count1++;
//	}
//	printf("your name is ");
//	printf(strcat(name,surname));//  strcat() is used to combine two or more strings
//	puts(strcat(name, surme));
//	printf("YOUR NEW COUNT IS %d",count1);
//        count1=strlen(name);
//        printf("YOUR NEW COUNT IS %d",count1);
//         len1=strlen(name);
//         len2=strlen(surname);
//          printf(strcat(name,surname));
//         
//         for(i=0; i<=len2; i++){
//         	name[len1+i]=surname[i];
//	 }
//        printf("your name is %s",name);
        
//        Let's compare between them
//         value=strcmp(name,surname);
//         if(value==0){
//         	printf("Yeah,you are right");
//	 }
//	 else{
//                printf("the value is %d",value);
//	 	printf("Opps!! try again \n");
//	 	goto start;
//	 }
//	 printf("the value is %d",value);

       // another method of compare through loop
        int i=0,check=0;
	char character1[30],character2[30];
        printf("enter first character\n");
        scanf("%s",character1);
//        printf("enter second character\n");
//        scanf("%s",character2);
//        
//        for(i=0;character1[i]!='\0'|| character2[i]!='\0';i++)
//	{
//        	if(character1[i]!=character2[i]){
//        		check=1;
//        		break;
//		}
//	}
//        if(check==1){
//        	printf("they are not same");
//	}
//	else
//	 printf("They are same");
//	 for reversing a character
//	 printf(strrev(character1));

   // ANOTHER METHOD OF CHARACTER REVERSING
        int count=0;
        int divide_count,count2,change=0;
        count=strlen(character1);
        printf("%d\n\n",count);
        divide_count=count/2;
         for(i=0; i<divide_count;i++)
           {
            change=character1[i];
	    character1[i]=character1[count-1-i];
	    character1[count-1-i]=change;  
	    	    } 
       printf("%s",character1);
       
       
	getch();
	return 0;
}

