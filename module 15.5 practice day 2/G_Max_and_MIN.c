#include<stdio.h>
#include<limits.h>

void findMinMax(){
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i = 0; i < n; i++){
    scanf("%d", &ar[i]);
    }
    int max = INT_MIN, min = INT_MAX;
    for(int i = 0; i < n; i++){
        if(ar[i] > max){
            max = ar[i];
        }else if(ar[i] < min){
            min =ar[i];
        }

    }
    printf("%d %d\n", min, max);
    return;
}

int main(){
    findMinMax();
    return 0;
}