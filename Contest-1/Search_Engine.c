#include<stdio.h>
int main(){
    int T;
    scanf("%d", &T);

for(int a=1;a<=T;a++){
    int N;
    int S;
    int arr[1001];
    scanf("%d", &N);
    for(int i=0;i<N;i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &S);

    int position = 0;
    for(int i=0;i<N;i++){
        if(arr[i] == S){
            position=i+1;
            break;
        }
    }
        if(position){
            printf("Case %d: %d",a,position);
        }else{
            printf("Case %d: Not Found",a);
        }
        printf("\n");
}

    return 0;
}