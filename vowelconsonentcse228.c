#include<stdio.h>
 void main()
{
	char x;
	printf("Enter the alphabet\n");
	scanf("%c",&x);
	switch(x)
	{
	    case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		   printf("vowel");break;
		default:
		   printf("consonent");   
 }
} 
