// to calculatepercentage of marks 
#include<stdio.h>
 int main()
 {
 	float s,m,sst,u,e,p;
 	printf("ENTER MARKS OF SUBJECTS");
 	scanf("  %f %f %f %f %f",&s,&m,&sst,&u,&e);
 	p=((s+m+sst+u+e)/500)*100;
 	printf("YOUR PERCENTAGE IS %f",p);
 	return 0;
 }
