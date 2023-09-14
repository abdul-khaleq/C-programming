#include<stdio.h>
char sumation(int num1, int num2){
    printf("input 2 numbers to add them together\n");
    int sum = num1+num2;
    return sum;
}
int main(){
    int num1,num2;
    scanf("%d %d", &num1,&num2);
    int sum = sumation(num1, num2);
    printf("%d", sum);
    return 0;
}



// #include<stdio.h>
// char phitron(){
//     int n = 0;
//     scanf("%d", &n);
//     int phitron = n*n;
//     return phitron;
// }
// int main(){
//     int p = phitron();
//     printf("%d", p);
//     return 0;
// }





// #include<stdio.h>
// void inputYourname(char str[]){
//     printf("How are you, %s\nHope you are doing well!", str);
//     return;
// }
// int main(){
//     char str[100];
//     scanf("%s", &str);
//     inputYourname(str);
//     return 0;
// }





// #include<stdio.h>
// void loop(){
//     for(int i=1;i<=10;i++){
//  printf("%d\n", i);
//     }
   
//     return;
// }
// int main(){
//     loop();
//     return 0;
// }