#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int K = N-1;
    int K2 = 1;
    for(int i = 1; i <=(2*N)+1; i++){
        for(int a=1; a<=K; a++){
            printf(" ");
        }
        for(int b = 1; b <=K2; b++){
            printf("*");
        }
        if(i<N){
        K--;
        K2 = K2+2;
        }
        if(i>N){
        K++;
        K2 = K2-2;
        }
        printf("\n");
        
    }
    return 0;
}