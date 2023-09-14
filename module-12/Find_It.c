#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int N;
    scanf("%d", &N);
    int A[1001];
    for(int i = 0; i < N; i++){
        scanf("%d", &A[i]);
    }
    int X;
    scanf("%d", &X);
    int count = 0;
    for(int i = 0; i < N; i++){
        if(A[i] == X){
            count++;
        }
    }
    printf("%d ", count);
    return 0;
}