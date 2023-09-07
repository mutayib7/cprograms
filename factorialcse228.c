#include<stdio.h>
 
 int main()
 {
 	int x,f=1,i;
 	printf("enter a number \n ");
 	scanf("%d",&x);
 		if(x==0 || x==1)
 	 	printf("factorial is 1");
 		else
		 	for(i=1;i<=x;i++)
		 		f=f*i;
		   
  
  printf("factorial is %d",f);
  return 0;
 }
 
 
 	
 
