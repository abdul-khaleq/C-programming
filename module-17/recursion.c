#include<stdio.h>
void fun(int count){
    printf("fun\n");
    if(count < 5){
        fun(count+1);
    }
}
int main(){
    fun(1);
    return 0;
}