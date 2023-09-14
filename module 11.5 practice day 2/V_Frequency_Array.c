#include<stdio.h>
int main(){
    int N;
    int M;
    scanf("%d %d", &N, &M);
    char A[1000001];
    for(int i = 0; i < N; i++){
        scanf("%d", &A[i]);
    }
    int cnt[M] = {0};

    for(int i = 0; i < M; i++){
        cnt[A[i]];
    }
    for(int i = 0; i < M; i++){
        printf("%d\n", A[i]);
    }

    return 0;
}