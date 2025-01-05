// 2. Write a function to convert Celsius temperature into Fahrenheit.

#include <stdio.h>
int far(int temp);
int main(){
    int temp;
    printf("enter a celcius tempreture :-");
    scanf("%d" , &temp);
    printf("the celcius tempreture %d after converting farenhite %d\n" , temp , far(temp));
    return 0;
}

int far(int temp){
    return temp*(9/5)+32;
}