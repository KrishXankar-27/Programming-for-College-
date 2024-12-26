#include <stdio.h>
int main(){
    int i, num ;
    float result =0.0;
    printf("please enter a number :- ");
    scanf("%d" ,&num);

    for ( i = 1; i <=  num; i++)
    {
        
        result += (float)i/2;
    }
    printf("%.2f" , result);
    return 0;
}