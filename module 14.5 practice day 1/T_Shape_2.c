#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int K = N-1;
    int K2 = 1;
    for(int i = 1; i <=N; i++){
        for(int a=1; a<=K; a++){
            printf(" ");
        }
        for(int b = 1; b <=K2; b++){
            printf("*");
        }
        printf("\n");
        K--;
        K2 = K2+2;
    }
    return 0;
}