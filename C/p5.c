//Declaring and Using Enum Data Type in C/C++
// Enum: Enumerated data types.
// This is used to define named constants i.e. give names to integer constants

//How to define enums?
//enum «name» { enumeration list } [variable name];

#include <stdio.h>
/*
const int Sunday=0;
const int Monday=1
*/

enum days {
    sunday,
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday,
};

void main ()
{
    enum days mydays;
    
    mydays=sunday;

    printf("sunday=%d\n",mydays);

    mydays=tuesday;

    printf("tuesday=%d\n",mydays);

}