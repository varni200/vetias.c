#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    int arr[100], n, i, min;

    
    
    scanf("%d", &n);

    
    
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    min = arr[0];

    
    for(i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    
    printf("%d\n", min);

    return 0;
}


