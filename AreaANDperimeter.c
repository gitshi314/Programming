#include<stdio.h>
int main()
{
    int l,b,area,perimeter;
    printf("Enter length and breath:");

    scanf("%d%d",&l,&b);
    perimeter= 2*(l+b);
    printf("Perimeter:%d",perimeter);
    area=l*b;
    printf("Area:%d",area);
    return 0;

}