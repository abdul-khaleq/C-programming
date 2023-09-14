// #include<stdio.h>  
// void passByValue(int num) {    
//     num=num+100;    
// }    
// int main() {    
//     int x=100;    
//     printf("Before changing in fun %d\n", x);    
//     passByValue(x);   
//     printf("After changing in passByValue fun %d \n", x);    
// return 0;  
// }  





#include<stdio.h>
void swap(int *a, int *b) {
 int tmp;
 tmp = *a;
 *a = *b;
 *b = tmp;
} 
int main() {
 int a = 1, b = 2;
 printf("Before swap- a = %d b = %d\n", a, b);
 swap(&a, &b);
 printf("After swap- a = %d b = %d\n", a, b);
 return 0;
}