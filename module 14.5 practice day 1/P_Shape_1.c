#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int K = N;
    for(int i = 1; i <=N; i++){
        for(int a = 1; a <=K; a++){
            printf("*");
        }
        printf("\n");
        K--;
    }
    return 0;
}