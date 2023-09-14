#include<stdio.h>
int main(){
    int N,M,X;
    scanf("%d%d", &N, &M);
    int A[N][M];
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            scanf("%d", &A[i][j]);
        }
    }
    scanf("%d", &X);
    char exists = 0;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(X==A[i][j]){
                exists = 1;
            }
        }
    }
    if(exists){
        printf("will not take number");
    }else{
        printf("will take number");
    }
    return 0;
}