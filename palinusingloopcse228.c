#include <stdio.h>
int main(){
	int number,reverse=0,
remainder, original;
   printf("Enter a four digit number: ");
   scanf("%d", &number);
   original = number;
   while (number !=0){
   	remainder=number%10;
   	reverse=reverse*10+remainder;
   	number /=10;
   }
   printf("The reverse of %d is%d\n",original,reverse);
   if (original==reverse)
   
   printf("%d is a palindrome\n",original);
   else
     printf("%d is not a palindrome\n",original);
   return 0;
}
   
   
