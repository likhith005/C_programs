#include <stdio.h>
/*
1: Monday
2: Tuesday
3: Wednesday
4: Thursday
5: Friday
6: Saturday
7: Sunday
*/
void DisplayDayName(int d)
{
    if (d==1)
    printf("Monday\n");
    else if (d==2)
    printf("Tuesday\n");
    else if (d==3)
    printf("Wednesday\n");
    else if (d==4)
    printf("Thursday\n");
    else if (d==5)
    printf("Friday\n");
    else if (d==6)
    printf("Saturday\n");
    else if (d==7)
    printf("Sanday\n");
}

void main()
{
    DisplayDayName(1);
}