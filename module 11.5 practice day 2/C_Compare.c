#include<stdio.h>
int main(){
    char X[21], Y[21];
    scanf("%s %s", X,Y);
    int value = strcmp(X,Y);
    if(value < 0){
        printf("%s", X);
    }else if(value > 0){
        printf("%s", Y);
    }else{
        printf("%s", X);
    }

    return 0;
}