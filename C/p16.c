//Using Ternary operation

#include <stdio.h>

int Max(int a,int b)
{
    if (a > b)
        return a;
    else
        return b;
}

void main()
{
    int a=100;
    int b=200;

    /*
    Ternary operator expression? true_value : false_value;
    printf("Maximum of %d and %d is %d\n",a,b,(a > b)? a : b);
    */

    printf("Maximum of %d and %d is %d\n",a,b,Max(a, b));
}