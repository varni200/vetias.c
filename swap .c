#include <stdio.h>

int main()
{
 int a= 5;
 int b;
 b = 4;
int temp = a;
a =  b; // b = 4
b = temp; // b = 4
 printf("%d" , a);
 printf("%d" , b);
 return 0;
}
