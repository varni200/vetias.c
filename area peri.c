#include <stdio.h>

int main()
{
  int l ;
  int b ;
  printf("Enter length:");
  scanf("%d" ,&l);
  printf("Enter breadth:");
  scanf("%d", &b);
  int area = l * b;
  int peri = 2 * (l+b);
  printf("area = %d, perimeter = %d" , area,peri);
 
  return 0;
}
