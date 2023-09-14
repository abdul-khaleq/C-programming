#include <stdio.h>
int main()
{
    int x;
    scanf("%c", &x);
    if(x >= 48 && x <= 57){
        printf("IS DIGIT\n");
    }else{
        printf("ALPHA\n");
        if(x >= 97 && x<= 122){
            printf("IS SMALL\n");
        }else{
            printf("IS CAPITAL\n");
        }
    }
    
    return 0;
}