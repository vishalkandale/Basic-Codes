#include <stdio.h>
#define pi 3.14
/* this is a multiline comment


this is ignored by my compiler 

*/
int main()
{
    int a = 8;
    const float b = 7.333;
    // pi = 7.33; //cannot do this since pi is a constant
    printf(" tab character \t\t my backslash %f", pi);
    // b = 7.22; //cannot do this since b is a constant
    //printf("hello word\n");
    //printf("the value of a is %d and the value of b is %2.4f\n", a, b,);
    //printf("%18.4f this",b);

    return 0;
}
