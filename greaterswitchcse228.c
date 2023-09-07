#include<stdio.h>
 void main()
{
	int x,a;
	printf("Enter the numbers");
	scanf("%d %d",&x,&a);
	
	switch(x>a)
 {
		case 1:
		  printf("%d is greatest ",x);
		  break;
		 case 0:
				printf("%d is greatest",a);
				break;
			 
 }
}
