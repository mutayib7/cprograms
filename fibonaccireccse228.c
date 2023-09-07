#include<stdio.h>
int fib(int n);
int main()
{
    int n,f;
    
printf("enter any number");
scanf("%d",&n);
f=fib(n);
printf("fibnacci is %d",f);
}
int fib(int n)
{
    
    
    if (n==0)
    return 0;
    if (n==1)
    return 1;
    
    else 
    {
        int f;
        int fibn1=fib(n-1);
        int fibn2=fib(n-2);
        f=fibn1+fibn2;
        return f;
    }
}
