#include <stdio.h>
int main()
{
   int circle_radius;
   float PI_VALUE=3.14, circle_area;

   printf("\nEnter radius of circle: ");
   scanf("%d",&circle_radius);

   circle_area = PI_VALUE * circle_radius * circle_radius;
   printf("Area of circle is %f having the radius %d",circle_area, circle_radius);

   
   return(0);
}