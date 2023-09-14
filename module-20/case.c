#include<stdio.h>

int main()
{
    int n,s,a,b,c;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        scanf("%d %d %d %d", &s , &a, &b, &c);
        int sum=s-a-b-c;
    printf("%d\n",sum);
    }
    
}