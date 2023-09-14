#include <stdio.h>
int main()
{
    char S[1001];
    scanf("%s", &S);
    int i = 0, j = strlen(S) - 1;
    char palindrome[] = "YES";
    while (i < j)
    {
        if(S[i] != S[j]){
            printf("NO");
            return 0;
        }
        i++;
        j--;
    }
    printf("%s", palindrome);
    
    return 0;
}