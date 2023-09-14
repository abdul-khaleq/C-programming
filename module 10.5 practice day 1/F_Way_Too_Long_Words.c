#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char a[101];
    for(int i = 1; i <= n; i++){
        scanf("%s", &a);
        int length = strlen(a);
    if(length > 10){
        printf("%c", a[0]);
        printf("%d", strlen(a)-2);
        printf("%c\n", a[length-1]);
    }else{
    printf("%s\n", a);
    }
    }
    return 0;
}