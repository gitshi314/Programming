#include<stdio.h>
int main()
{
    int unit,total;
    printf("Enter Units Consumed:");
    scanf("%d",&unit);
    //cost per unit is given:Rs 5
    total=unit*5;
    printf("Total Cost=%d",total);
    return 0;
}