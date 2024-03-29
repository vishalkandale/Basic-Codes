/*
Input Format:
Input will contain two integers,  and , separated by a newline.

Output format:
a+b
|a-b|
*/
#include <stdio.h>
#include <cstdlib>

void update(int *a,int *b) {
    int sum,diff;
    sum  = *a + *b;
    diff = abs(*a - *b);
    *a = sum;
    *b = diff;
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}