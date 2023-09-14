#include <stdio.h>
int main()
{
    char n;
    scanf("%c", &n);
    if(n == 122){
        printf("%c", 97);
    }else{
        printf("%c", n+1);
    }

    return 0;
}