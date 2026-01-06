#include <stdio.h>
int main()
{
    float  F,C;
    printf("Enter your tempreature in celsius");
    scanf("%f", &C);
    

    
    F=(C*9/5)+32;
    printf("Tempreture in Fahrenheit:%f",F);
    return 0;
    
    

}