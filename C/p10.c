//Operators and Expressions in C
#include <stdio.h>
void main()
{
    int x = 1;
    int y = 2;
    int z = 3;

//Using Arithmetic operators
    
    x = x + y;
    z = z - y;
    y = y / 2;
    z = z % x;
    
    z = z * x + y;
    printf("Before combined operators: x=%d, y=%d and z=%d\n", x, y, z);

//Reset to original values
    x = 1;
    y = 2;
    z = 3;
//Using Arithmetic operators   
    x += y; //x=x+y:
    z -= y; //z=z-y;
    y /= 2; //z=z/2;
    z %= x; //z=z%x;

// BE CAREFUL: z *= x + Y; NOT THE SAME AS: z = z* x + y; but rather equal to z = z * (x + y);
//z=z*x+y;
    z *= x;
    z += y;

    printf ("After combined operators: x=%d, y=%d and z=%d\n", x, y, z);
}