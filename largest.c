#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a >=b && a >= c) {
        printf("%d is greatest\n", a);
        if (b >= c) {
            printf("%d is second greatest\n", b);
            printf("%d is lowest\n", c);
        } else {
            printf("%d is second greatest\n", c);
            printf("%d is lowest\n", b);
        }
    } 
    else if (b >= a && b >= c) {
        printf("%d is greatest\n", b);
        if (a >= c) {
            printf("%d is second greatest\n", a);
            printf("%d is lowest\n", c);
        } else {
            printf("%d is second greatest\n", c);
            printf("%d is lowest\n", a);
        }
    } 
    else {
        printf("%d is greatest\n", c);
        if (a >= b) {
            printf("%d is second greatest\n", a);
            printf("%d is lowest\n", b);
        } else {
            printf("%d is second greatest\n", b);
            printf("%d is lowest\n", a);
        }
    }

    return 0;
}