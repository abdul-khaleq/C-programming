#include<stdio.h>

int main(){
    // int n, k =1;
    // scanf("%d", &n);
    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j<=k; j++){
    //         printf("*");
    //     }
    //     printf("\n");
    //     k++;
    // }


    int n2, k2;
    scanf("%d", &n2);
    k2 = n2;
    for(int i = n2; i >= 1; i--){
        for(int j = 1; j<= k2; j++){
            printf("*");
        }

        printf("\n");
        k2--;
    }

    return 0;
}