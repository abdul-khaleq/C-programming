#include<stdio.h>
int count_before_zero(int n, int arr[]){

    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            break;
        }else{
            count++;
        }
    }
    return count;
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int count = count_before_zero(n,arr);
    printf("%d\n", count);
    return 0;
}