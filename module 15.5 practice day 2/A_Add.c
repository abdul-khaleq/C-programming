#include<stdio.h>

int summation(int X, int Y){
    int sum = X + Y;
    return sum;
}

int main(){
    int X, Y;
    scanf("%d %d", &X, &Y);
    int sum =summation(X, Y);
    printf("%d", sum);
    return 0;
}