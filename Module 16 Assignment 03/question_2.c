#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int k = n-1, q = 1;
    for(int i=1; i<=n; i++){
        for(int a=1; a<= k; a++){
        printf(" ");
        }
        for(int b=1; b<=q; b++){
        printf("%d", i);
        }
            k--;
            q++;
        printf("\n");
    }
    return 0;
}