#include <stdio.h>
#include<limits.h>
int main()
{
    int N;
    scanf("%d", &N);
    int A[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &A[i]);
    }
    int max_idx = INT_MIN , min_idx = INT_MAX;

    for(int i = 0; i < N; i++){
      if(A[i] < min_idx){
        min_idx = A[i];
      }
      if(A[i] > max_idx){
         max_idx = A[i];
      }
    }

    for(int i = 0; i < N; i++){
      if(A[i] == max_idx){
        A[i] = min_idx;
      }
      else if(A[i] == min_idx){
        A[i] = max_idx;
      }
    }

    for(int i = 0; i < N; i++){
      printf("%d ", A[i]);
    }
    
    return 0;
}