#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int A[1001];
    for(int i = 0; i < N; i++){
        scanf("%d", &A[i]);
    }
    int even = 0;
    int odd = 0;
    for(int i = 0; i < N; i++){
        if(A[i] % 2 == 0){
        even++;
        }else{
            odd++;
        }
    }
    printf("%d %d", even, odd);
    return 0;
}