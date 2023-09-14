#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int x1[1001];
    int x2[1001];
    for(int i=0; i<n; i++){
        scanf("%d %d", &x1[i], &x2[i]);
    }
    int tiger=0;
    int pathan=0;
    for(int i=0; i<n; i++){
        if(x1[i] > x2[i] || x1[i] == x2[i]){
            tiger++;
        }if(x1[i] < x2[i] || x1[i] == x2[i]){
            pathan++;
        }
    }
    if(tiger > pathan){
        printf("Tiger");
    }else if(pathan > tiger){
        printf("Pathan");
    }else{
        printf("Draw");
    }
    
    return 0;
}