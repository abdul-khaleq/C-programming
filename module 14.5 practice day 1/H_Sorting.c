#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[1001];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int j=0; j<n-1; j++){
        for(int k=j; k<n; k++){
            if(a[j] > a[k]){
            int tmp = a[j];
            a[j]=a[k];
            a[k]=tmp;
            }
        } 
    }
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}