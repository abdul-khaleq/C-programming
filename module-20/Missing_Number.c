#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    // int a[1001];
    // for(int i=0;i<n*4;i++){
    //     scanf("%d", &a[i]);
    // }
    // for(int i=0;i<n*4;i++){
    //     if(i%4 ==0 && i !=0){
    //         printf("\n");
    //     }
    //     printf("%d ", a[i]);

    // }
    int s[n][4];
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            scanf("%d", &s[i][j]);
        }
    }
    int sum[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            printf("%d ", s[i][j]);
            

        }
        printf("\n");
    }
    return 0;
}