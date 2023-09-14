#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    char S[1000001];
    scanf("%s", &S);
    int sum = 0;
    for(int i = 0; i < N; i++){
        sum = sum + (S[i]-48);
    }
    printf("%d", sum);

    return 0;
}