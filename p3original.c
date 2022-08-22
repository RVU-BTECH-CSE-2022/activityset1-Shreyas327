#include<stdio.h>
int find_largest(int a,int b)
{ 
printf("enter a and b\n");
  scanf("%f%f",&a,&b);
  int c;
  if(a<b){
    c=b;
  } 
  else{
    c=a;
  }
  printf(" the largest number is ",c);
  return c;
}