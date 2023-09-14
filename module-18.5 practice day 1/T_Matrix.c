#include<stdio.h>
#include<stdlib.h>
int main(){
    int  N;
    scanf("%d", &N);
    int A[N][N];
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            scanf("%d", &A[i][j]);
        }
    }
    int sumOfPrimary = 0;
    int sumOfSecondary = 0;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(i==j){
                sumOfPrimary=sumOfPrimary+ A[i][j];
            }else if(i+j == N-1){
                sumOfSecondary=sumOfSecondary+A[i][j];
            }
        }
    }
    int sumOfP = abs(sumOfPrimary);
    int sumOfS = abs(sumOfSecondary);
    printf("%d", sumOfP+sumOfS);
    return 0;
}