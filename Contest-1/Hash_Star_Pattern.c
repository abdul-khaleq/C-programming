#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d", &n);
    int fr = floor(n/2);
    for(int i=0; i<n; i++){
        for(int j=0;j<n;j++){
            if(i ==fr){
                printf("#");
            }else if(j==fr){
                printf("#");
            }else{
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}