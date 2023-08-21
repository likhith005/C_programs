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
    switch (d)
    {
        case 1: 
        printf("Monday\n");
        break;
    case 2: 
        printf("Tuesday\n");
        break;
    case 3: 
        printf("Wednesday\n");
        break;
    case 4: 
        printf("Thursday\n");
        break;
    case 5: 
        printf("Friday\n");
        break;
    case 6: 
        printf("Saturday\n");
        break;
    case 7: 
        printf("Sunday\n");
        break;
    default:
        printf("%d is an Invalid value!\n",d);
    }  
}

void main()
{
    DisplayDayName(8);
}