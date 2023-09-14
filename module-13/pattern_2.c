#include<stdio.h>

int main(){
    // int n, s, k;
    // scanf("%d", &n);
    // s = n - 1;
    // k = 1;
    // for(int i = 1; i <= n; i++){
    //     for(int a = 1; a<=s; a++){
    //         printf(" ");
    //     }
    //     for(int b = 1; b<=k; b++){
    //         printf("*");
    //     }
    //     s--;
    //     k = k + 2;
    //     printf("\n");
    // }

        int n, s, k;
    scanf("%d", &n);
    s = 0;
    k = n;
    for(int i = n; i >= 1; i--){
        for(int a = 1; a<=s; a++){
            printf(" ");
        }
        for(int b = 1; b<=k; b++){
            printf("*");
        }
        s++;
        k = k - 2;
        printf("\n");
    }

    return 0;
}