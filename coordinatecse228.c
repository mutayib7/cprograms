#include<stdio.h>
 int main()
 {
 	int quadrant;
 	float x,y;
 	printf("Enter x coordinate =");
 	scanf("%f",&x);
 	printf("Enter y coordinate =");
 	scanf("%f",&y);
 	if(x>0 && y>0)
 	 quadrant=1;

 	else if(x<0 && y<0)
 	 quadrant=3;
 	else if(x<0 && y>0)
 	 quadrant=2;
 	else if(x>0 && y<0)
 	 quadrant=4;
 	else if(x==0 && y==0)
 	 printf("point lies on origin"); 
 	else if (x>0 || x<0 && y==0)
 	 printf("point lies on x axis");
    else if (y>0 || y<0 && x==0)
 	 printf("point lies on x axis");
	
	if(quadrant==1 || quadrant==2 || quadrant==3 || quadrant==4) 
	printf("THE QUADRANT IS %d",quadrant);
}
