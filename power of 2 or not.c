#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
int n;
    scanf("%d",&n);
    if(n>0 && (n&(n-1)) ==0)
              printf("YES");
             
              else
              printf("NO");
             
    return 0;
}
