#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int rightValue = n % 10;
    int leftValue = n / 10;
    if(rightValue % leftValue == 0){
    printf("YES");
    }else if(leftValue % rightValue == 0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}