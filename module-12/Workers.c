#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
      int M1;
      int M2;
      int D;
      scanf("%d %d %d", &M1, &M2, &D);
      int M2worker = (M1*D)/(M2);
      printf("%d", (int)M2worker);
    return 0;
}