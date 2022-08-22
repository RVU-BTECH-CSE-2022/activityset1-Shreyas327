#include<stdio.h>
int main(void)
{
  float length,breadth,area;
  printf("enter length and breadth\n");
  scanf("%f%f",&length,&breadth);
  area=length*breadth;
  printf("the area of rectangle with  %f as length and %f as breadth is %f\n",length,breadth,area);
  return 0;
}