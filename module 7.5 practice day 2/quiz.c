#include <stdio.h>
int main()
{
    int a = 1;
    int b = 2;
    int temp = a;
    a = b;
    b = temp;
    printf("%d = %d", a,b);


    return 0;
}