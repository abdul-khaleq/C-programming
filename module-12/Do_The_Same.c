#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N;
    int K;
    scanf("%d %d", &N, &K);
       for(int i = 1; i <=K; i++){
        for(int i = 1; i <=N;i++){
        printf("%d ", i);
       }
       printf("\n");
       }
    return 0;
}