#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 int n;
    scanf("%d" ,&n);
    int  a[n] ,i,sum=0;
        for(i=0;i<n;i++)
        {
            scanf("%d ",&a[i]);
        }
    for(i=0;i<n;i++)
    {
        printf("%d ", sum);
            sum=sum+a[i];
            
    }
    return 0;
}
