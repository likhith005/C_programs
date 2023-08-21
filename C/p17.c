#include <stdio.h>

void main()
{
    int age = 18;
    
    printf("Your age is %d.%s\n",
    age,
    (age>18)?"your allowed to vote" : "your not allowed to vote");
}