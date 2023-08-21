//Incrementing and Decrementing operators
#include <stdio.h>
void main()
{
int x = 10;
int y;
int z;

//prefix format
y=++x;//first increment x and then assign to y. y = 11. x = 11
printf ("x = %d and y=%d\n", x, y);

//postfix format
z= x++; // assign x to z then increment x. z = 11 and x becomes 12
printf ("x=%d and z=%d\n", x, z);

//Decrementing uses
y =--x;//first decrement x and then assign to y
printf("x = %d, y=%d\n", x, y);

z = x--;//assign to z first value of x then decrement x
printf("x = %d, z=%d\n",x, z);

}