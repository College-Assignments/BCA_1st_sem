#include <stdio.h>
#include <math.h>

int main(){
  float a,b,c,s=0,area=0;
  printf("Enter the sides of triangle\n");
  printf("Enter side a : ");
  scanf("%f", &a);
  printf("\nEnter side b : ");
  scanf("%f", &b);
  printf("\nEnter side c : ");
  scanf("%f", &c);
  s=(a+b+c)/2.0;
  area = sqrt(s*(s-a)*(s-b)*(s-c));
  printf("Area of triangle is %f ", area);
  return 0;
}
