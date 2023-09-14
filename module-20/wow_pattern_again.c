#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int k=1;
    int p=n-1;
for(int i=1; i<=n; i++){
    for(int a=1; a<=p; a++){
        printf(" ");
    }
    for(int b=1; b<=k; b++){
        if(i%2 !=0){
            printf("^");
        }else{
            printf("*");
        }
    }
    printf("\n");
    k=k+2;
    p--;
}
   
    return 0;
}