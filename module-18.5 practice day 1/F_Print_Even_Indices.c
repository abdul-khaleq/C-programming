#include<stdio.h>
void recursion(int i, int n, int a[]){
    if(i < 0 ) return;
        if(i % 2==0){
            printf("%d ", a[i]);
        }
        
        recursion(i-1, n, a);
    
}
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    recursion(n-1, n, a);
    return 0;
}