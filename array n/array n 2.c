#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a;
    scanf("%d" ,&a);
    int b[a];
    for(int i=0; i<a; i++){
        scanf("%d", &b[i]);
    }
    int k=0;
    int p=0;
     for(int i = 0; i < a ; i++)
     {
         int c=0;
         int d=b[i];
          for (int j=0; j<a ; j++)
          {
              if(b[j]==d)
              {
                  c++;
                  
              }
              
          }
         if(c>a/2)
         {
             k=d;
             p++;
         }
    }
    if(p>0){
        printf("The majority element is : %d",k);
    } else
    { printf("No majority element found in the array");
     }
    return 0;
}
