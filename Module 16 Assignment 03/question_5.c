#include<stdio.h>
#include<string.h>
int is_palindrome(char str[]){
int i=0; 
int j=strlen(str)-1;
    
    while (i<j){
        if(str[i]!=str[j]){
            // printf("No");
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}
int main(){
    char str[1000];
    scanf("%s", &str);
    int palindrome=is_palindrome(str);
    if(palindrome){
        printf("Palindrome");
    }else{
        printf("Not Palindrome");
    }
    return 0;
}