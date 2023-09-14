#include<stdio.h>

long long int sum = 0;
int recursion(int i, int n, int a[]){
    if(i==n) return;
        sum = sum + a[i];
        recursion(i+1, n, a);
    }
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    recursion(0, n, a);
    long long int sumation = abs(sum);
    printf("%lld\n", sumation);
    return 0;
}