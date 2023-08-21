//Operators and Expressions in C
#include <stdio.h>

void main()
{
    //Expressions in C
    int a = (5 + 2) * 10;
    
    //Arithmetic Operators
    //+,-,*,/, % modulus or remainder
    int c = 10 + 5 - 3 * 2 / 4;
    float f = 10 + 5-3* 2/ 4.0f;
    printf("a = %d,C=%d, f=%f\n", a, c, f);

    //remainder %
    int d= 10 / 3;
    int r = 10 % 3;
    printf("10/3=%d and 10%%3 = %d\n", d, r);

    //Logical operators
    int e1 = 100 == 50;
    int e2 = 100 != 50;
    int e3 = 106 > 50;
    int e4 = 100 < 50;
    int e5 = 100 >= 50;
    int e6 = 100 <= 50;
    printf("e1=%d\te2=%d\te3=%d\te4=%d\te5=%d\te6=%d\n",e1, e2, e3, e4, e5, e6);

    //AND --› &&
    printf("AND Operator\n");
    printf("e1=%d && e2=%d --> %d\n",e1, e2,e1 && e2);
    printf("e2=%d && e3=%d --> %d\n",e2, e3,e2 && e3);
    printf("e3=%d && e4=%d --> %d\n",e3, e4,e3 && e4);
    printf("e4=%d && e5=%d --> %d\n",e4, e5,e4 && e5);
    printf("e5=%d && e6=%d --> %d\n",e5, e6,e5 && e6);

    //OR --› ||
    printf("OR Operator\n");
    printf("e1=%d || e2=%d --> %d\n",e1, e2,e1 || e2);
    printf("e2=%d || e3=%d --> %d\n",e2, e3,e2 || e3);
    printf("e3=%d || e4=%d --> %d\n",e3, e4,e3 || e4);
    printf("e4=%d || e5=%d --> %d\n",e4, e5,e4 || e5);
    printf("e5=%d || e6=%d --> %d\n",e5, e6,e5 || e6);
    printf("%d || %d --> %d\n",0,0,0 || 0);

    //NOT --> !
    printf ("NOT operator\n");
    printf("e1=%d , !e1=%d\n",e1,!e1);
    printf("e1=%d , !e1=%d\n",100,!100);

}

