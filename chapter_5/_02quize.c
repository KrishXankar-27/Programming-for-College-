// calculate the area of a square with side a
#include<stdio.h>
#include<math.h>

int  square (int  num);
int main(){
    int num;
    printf("please enter a value :- ");
    scanf("%d" ,&num);
    square(num);
    return 0;
}
int  square (int  num){
    int total = pow(num,2);
    printf("the area of %d square %d\n is" ,num, total);
}