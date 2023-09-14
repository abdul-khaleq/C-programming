#include<stdio.h>
int main(){
    int A,B,C;
    scanf("%d %d %d", &A, &B, &C);
    if(A==0 || B==0 || C==0 || A!=B || A!=C || B!=C ){
        printf("No");
    }else{
        printf("Yes");
    }
    return 0;
}