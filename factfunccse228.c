#include<stdio.h>
 int fac(int);
 int main()
 {
 	int x;
 	printf("enter a number \n ");
 	scanf("%d",&x);
  int y=fac(x);
  printf("%d",y);
 }
 int fac(int x)
 {
 	int f=1,i;
 		if(x==0 || x==1)
 	 	printf("1");
 		else
		 	for(i=1;i<=x;i++)
		 		f=f*i;
		 return f;  
 }
