#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char S[1001];
    scanf("%s", &S);
    int capital = 0;
    int small = 0;
    for(int i = 0; i < strlen(S); i++){
        if(S[i] >='A' && S[i] <= 'Z'){
            capital++;
        }
        else{
            small++;
        } 
    }
    printf("%d %d", capital, small);
    return 0;
}
