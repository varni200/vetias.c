#include <stdio.h>

int main()
{
    int m1,m2,m3,m4,m5;
    printf("Enter 5 marks");
    scanf("%d", &m1);
    scanf("%d", &m2);
    scanf("%d", &m3);
    scanf("%d", &m4);
    scanf("%d", &m5);
    int sum =m1+m2+m3+m4+m5;
    int avg = sum/5;
    printf("sum =%d ,average=%d" ,sum,avg);
    if (avg>90 && avg<=100) {
        printf("A Grade");
    }
    return 0;
    }
