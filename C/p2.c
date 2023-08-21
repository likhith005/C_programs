#include <stdio.h>

void main ()
{
    // char type 
    printf("char size=%d byte\n",sizeof(char));
    printf("signed char size=%d byte\n",sizeof(signed char));
    printf(" unsigned char size=%d byte\n",sizeof(unsigned char));

     // int type 
    printf("int size=%d byte\n",sizeof(int));
    printf("signed int size=%d byte\n",sizeof(signed int));
    printf(" unsigned int size=%d byte\n",sizeof(unsigned int));

     // short int type 
    printf("short int size=%d byte\n",sizeof(short int));
    printf("signed short int size=%d byte\n",sizeof(signed short int));
    printf(" unsigned short int size=%d byte\n",sizeof(unsigned short int));

     // long int type 
    printf("long int size=%d byte\n",sizeof(long int));
    printf("signed long int size=%d byte\n",sizeof(signed long int));
    printf(" unsigned long int size=%d byte\n",sizeof(unsigned long int));

     // float,double type
    
    printf("float size=%d byte\n",sizeof(float));
    printf("float size=%d byte\n",sizeof(double));
    printf("long double size=%d byte\n",sizeof(long double));
}