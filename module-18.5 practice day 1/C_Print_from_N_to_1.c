#include<stdio.h>
void recursion(int n){
    int i=n;
    if(i == 0) return;
    printf("%d", i);
    if(i > 1){
        printf(" ");
    }
    recursion(i-1);
}
int main(){
    int n;
    scanf("%d", &n);
    recursion(n);
    return 0;
}