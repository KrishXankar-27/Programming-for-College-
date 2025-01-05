#include<stdio.h>
#include<math.h>
int main(){
    int num;
    printf("please enter a value :- ");
    scanf("%d" ,&num);
    int total = pow(num,2);
    // square(num);
    printf("%d" , total);
    return 0;
}
// double square (double num){
    // double total = pow(num,2);
//     printf("%lf" , total);
// }