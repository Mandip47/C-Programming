#include <stdio.h>
#define n 4

int main(){
	int a[n];
	int i,j,temp;
    for(i=0;i<n; i++){
    	printf("Enter number %d= ",i+1);
    	scanf("%d",&a[i]);
	}
	  
for( i=0;i<n;i++){	
	for(j=0;j<n;j++){	
		if(a[i]>=a[j]){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
}
for(i=0;i<n; i++){
    	printf("%d",a[i]);
    	printf("  ");
	}
	getch();
	return 0;
}

