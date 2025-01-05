// 6. Write a recursive function to calculate the sum of first ‘n’ natural numbers

#include <stdio.h>
int sum_of_n (int num ){
   int sum = 0;
   for (int i = 1; i <= num; i++)
   {
    sum += i;
   }
   return sum;
}
int main(){
    printf("please enter a number :- ");
    int num;
    scanf("%d" , &num);
    printf("the sum of %d number is %d\n" , num , sum_of_n(num));
    return 0;
}

