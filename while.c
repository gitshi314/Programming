#include<stdio.h>
int main()
{
    int i=1;
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);

    while(i<=10){
        
            printf("%d x %d = %d\n", i,n,i*n);
            i++;
        }
        return 0;



    }
