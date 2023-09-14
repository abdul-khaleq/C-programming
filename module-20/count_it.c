#include<stdio.h>
#include<string.h>
int main(){
    char s[1001];
    gets(s);
    int smallAlphabets = 0;
    int capitalAlphabets = 0;
    int spaces = 0;
    for(int i=0; i< strlen(s);i++){
        if(s[i] >= 97 && s[i] <= 122){
            smallAlphabets++;
        }else if(s[i] >= 65 && s[i] <= 90){
            capitalAlphabets++;
        }else{
            spaces++;
        }
    }
    printf("Capital - %d \n", capitalAlphabets);
    printf("Small - %d \n", smallAlphabets);
    printf("Spaces - %d \n", spaces);
    return 0;
}