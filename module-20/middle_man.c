#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int arr[1001];
    for(int i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<N; i++){
        for(int j=i+1; j<N; j++){
            // printf("%d %d\n", i, j);
            if(arr[i] >= arr[j]){
            int tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
        }
        }
    }


    for(int i=0; i<N; i++){
        if(N%2==0){
             if(i==N/2-1){
                printf("%d ", arr[(N/2)-1]);
             }
             else if(i==(N/2)){
                printf("%d", arr[(N/2)]);
             }
        }
        else{
            if(i==(N+1)/2-1){
                printf("%d", arr[(N+1)/2-1]);
            }
        }
    }
    return 0;
}