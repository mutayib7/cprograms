#include<stdio.h>
int fact(int n);
int main()
{
    int n,factn;
    printf("enter any number");
    scanf("%d",&n);
    factn=fact(n);
    printf("factorial is %d",factn);

}
int fact(int n)
{
    if(n==0 || n==1)
    {
    return 1;
    }
    int factnm1=fact(n-1);
    int factn=factnm1*n;
    return factn;
}