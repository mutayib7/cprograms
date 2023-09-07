#include <stdio.h>
int main(){
	int num, digit,sum=0;
	
	printf("Enter a 4 digit number: ");
	scanf("%d",&num);
	
	digit=num%10;
	sum=sum+digit;
	num=num/10;
	
	digit=num%10;
	sum=sum+digit;
	num=num/10;
	
	digit=num%10;
	sum=sum+digit;
	num=num/10;
	
	digit=num%10;
	sum=sum+digit;
	
	
	printf("Sum of digits = %d\n",sum);
	
	
	return 0;

}
	
