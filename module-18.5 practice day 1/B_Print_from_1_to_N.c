#include<stdio.h>
void recursion(int i, int n){
    if(i == n+1) return;
    printf("%d\n", i);
    recursion(i+1,n);
}
int main(){
    int n;
    scanf("%d", &n);
    recursion(1, n);
    return 0;
}