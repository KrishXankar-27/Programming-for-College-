/*
14. Write a ¢ program to print all numbers divisible by 3 or 5
*/
#include <stdio.h>
int main(){
int num;
    printf("ener a number");
    scanf("%d" , &num);
    printf("%d number divisible by 3 or 5 are \n" , num);    
    for(int i = 1; i<=num;i++){
    if(i%3 == 0 || i%5 == 0){
    printf("%d , " , i);
    }
    }
    return 0;
}
