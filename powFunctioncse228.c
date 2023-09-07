#include<stdio.h>
 int p(int,int);
 int main()
 {
 	int a,b;
 	printf("enter a number \n ");
 	scanf("%d%d",&a,&b);
 	int power=p(a,b);
 	printf("%d",power);
 }
 int p(int a,int b)
 {
 	int i,x=1;
  for( i=1;i<=b;i++)
 	 x=x*a;
 	 return x;
 }
