// function in C
#include <stdio.h>

// procedure: returning nothing 
void sayhello()
{
    printf("hello, world\n");
}


int sum(int a,int b)
{
    int result=a+b;
    return result; //return a+b

}

float average(int a,int b)
{
    int result=(a+b)/2.0f;
    return result;
}
void main()
{
    sayhello();

    int n1=10;
    int n2=20;
    int result= sum(n1,n2);
    
    printf("Sum(%d,%d)=%d\n",n1,n2,result);
    printf("average(%d,%d)=%f\n",n1,n2,average(n1,n2));

}

/*
// function in C
#include <stdio.h>
int Sum(int a,int b)
{
    int result=a+b;
    return result;
}

float average(int a,int b)
{
    int result=(a+b)/2.0f;
    return result;
}

void main()
{
int n1=10;
int n2=20;
int result=Sum(n1,n2);
printf("Sum(%d,%d)=%d\n",n1,n2,result);
printf("average(%d,%d)=%f\n",n1,n2,average(n1,n2));
}
*/