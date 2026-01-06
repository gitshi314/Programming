#include<stdio.h>
int main()
{   
    float a,b;
    char op;
    float result;
    printf("Enter the value of a and b");
    scanf("%f%f",&a,&b);
    print11f("ENter an operator:");
    scanf(" %c", &op);
    if(op == '+')
    {
        result = a+b;

    }
    else if(op == '-'){
        result = a-b;
        
    }
    else if(op == '/')
    {
        result= a/b;

    }
    else if(op == '*')
    {
        result =a*b;

    }
    else
    
    {
        printf("invalid operator");
        
    }
    

    printf("result:%f",result);
    return 0;


    

}