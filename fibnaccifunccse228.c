#include<stdio.h>
int fib(int);
int main()
{
    int x,n;
    
 printf("enter number of terms");
 scanf("%d",&n);
 for(x=1;x<=n;x++)
 printf("%d",fib(x));
 return 0;
}
int fib(int n)
{

 if (n==0)
 return 0;
    else if (n==1 || n==2)
    return 1;
    else
    return fib(n-2)+fib(n-1);


    
}

    
    
    
