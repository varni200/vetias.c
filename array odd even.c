#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  int n,odd=0,even=0;
    scanf("%d ",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d ",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]%2==0)
            even++;
        else
            odd++;
        
    }
    printf("Odd = %d\nEven = %d",odd,even);
    return 0;
}
