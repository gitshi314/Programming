#include<stdio.h>
int main()
{
    float a,b;
    char choice;
    printf("enter2 numbers");
    scanf("%f%f",&a,&b);

    printf("Enter choice");
    scanf(" %c",&choice);

    switch (choice)
    {
    case '+':
        printf("Added %f",a+b);
        break;
        
        case '-':
        printf("subtracted %f",a-b);
        break;
        
        case '*':
        printf("multiplied %f",a*b);
        break;
        
        case '/':
        printf("Divided %.2f",a/b);
        break;

    
    default:
    printf("invalid");
    break;
    }
        return 0;

    
}