#include <stdio.h>
int main()
{
    char A[11];
    scanf("%s", &A);
    char B[11];
    scanf("%s", &B);
    printf("%d %d\n", strlen(A),strlen(B));
    printf("%s%s\n", A,B);

    int i = 0;
    while (A[i] > 0 && B[i] > 0)
    {
        char tmp = A[0];
        A[0] = B[0];
        B[0] = tmp;
        i++;
        break;
    }
    printf("%s %s", A,B);

    return 0;
}