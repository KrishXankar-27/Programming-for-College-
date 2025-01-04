#include<stdio.h>
int factorial(int num);

int factorial(int num){
    if (num == 1 || num == 0){
        return 1;
    }  
    return num*factorial(num-1);
    
}

int main(){
    int num;
    printf("please enter a value to see his factorial:- ");
    scanf("%d" ,&num);
    printf("your %d number factorial is %d" , num ,    factorial(num));
    return 0;
}
