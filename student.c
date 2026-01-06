#include <stdio.h>
int main()
{
    char name[50];
    int roll;
    int sub1,sub2,sub3,sub4,sub5;
    int total;
    float percentage;

    printf(" Enter Student's name: ");
    scanf("%s ",name);

    printf("Enter roll number:");
    scanf("%d ",&roll);

    printf("Enter marks of 5 subjects:");
    scanf("%d",&sub1);
    scanf("%d",&sub2);
    scanf("%d",&sub3);
    scanf("%d",&sub4);
    scanf("%d",&sub5);

    total=sub1+sub2+sub3+sub4+sub5;
    percentage=total/5.0;

    printf("Enter sutdents name:%s",name);
    printf("Enter sutdents rollno:%d",roll);
    printf("Total marks:%d",total);
    printf("Percentage:%f",percentage);
     
    if(percentage>=80)
    
    {
        printf("Grade:A");

    }
    else if(percentage>=60)
    {
        printf("Grade:B");

    }
    else if(percentage>=40)
    {
        printf("Grade:C");

    }
    else{
        printf("Grade:F");
    }

    if(sub1 >= 40 && sub2 >= 40 && sub3 >= 40 && sub4 >= 40 && sub5 >= 40) {
        printf("Result:PASS");
    }
    else {
        printf("Result:FAIL");
    }

    return 0;
}

