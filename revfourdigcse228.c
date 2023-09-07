//reverse 4 digit number
#include<stdio.h>
 int main()
 {
 	int a,d1,d2,d3,d4,s;
 	printf("Enter a four digit number");
 	scanf("%d",&a);

 	d4=a%10;
	a=a/10;
	d3=a%10;
	a=a/10;
	d2=a%10;
	a=a/10;
	d1=a%10;
 	s=d4*1000+d3*100+d2*10+d1;
 	printf("The reverse of the number is %d",s);
	return 0;
 }
