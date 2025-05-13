#include <stdio.h>


int main()
{
     int a=30,b =20 , c= 10;
     if(a>b && a>c) {//30>20>10 -- 30>20 && 20>10
       printf("A is greater");
     } else if (b>a && b>c) {
         printf("B is greater");
     } else {
         printf("c is greater");
     }
     return 0;
     }
