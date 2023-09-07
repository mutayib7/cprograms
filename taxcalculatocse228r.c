#include<stdio.h>
 int main()
 {
 	int income;
 	float tax;
 	printf("Enter your income = ");
 	scanf("%d",&income);
 	if(income<=150000)
	 {
 	  tax=0;
     }
 	else if(income>150000 && income<300000)
 	 {
 	    tax=(income-150000)*(1.0/10);
     }
	else if(income>300000 && income<500000)
	{
 	    tax=(income-300000)*(2.0/10);
	}
	else if(income>500000)
	{
 	    tax=(income-500000)*(3.0/10);
    }
      printf("Tax to be paid is %f",tax);
	return 0;
 }
