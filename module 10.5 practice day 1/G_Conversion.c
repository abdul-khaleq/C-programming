#include <stdio.h>
int main()
{
    char a[100001];
    scanf("%s", &a);
    for(int i = 0; i <= strlen(a)-1; i++){
        if(a[i] >= 65 && a[i] <= 90){
            printf("%c", a[i]+32);
        }else if(a[i] >= 97 && a[i] <= 122){
            printf("%c", a[i]-32);
        }
        else{
            printf(" ");
        }
    }
    
    return 0;
}