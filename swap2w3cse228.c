#include<stdio.h>
 int main()
 {
 	int a,b,temp;
 	printf("enter first number a =");
 	scanf("%d",&a);
 	printf("enter second number b =");
 	scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("%d%d",a,b);
    return 0;
 }

