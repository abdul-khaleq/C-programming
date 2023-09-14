#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int k = n-1, q = 1;
    for(int i=1; i<=(n*2)-1; i++){
        for(int a=1; a<= k; a++){
        printf(" ");
        }
        for(int b=1; b<=q; b++){
        printf("%d", b);
        }
        if(i < n){
            k--;
            q=q+2;
        }else{
            k++;
            q=q-2; 
        }
        
        printf("\n");
    }
    return 0;
}