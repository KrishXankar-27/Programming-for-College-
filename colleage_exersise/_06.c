#include <stdio.h> 
    int main(){
        int a , b; 
        printf("enter the first number : ");
        scanf("%d" , &a);
        printf("enter the scoend number: ");
        scanf("%d" , &b);

        if (a<b)
        {
           printf("the seconed number  %d is bigger than the first number %d\n" , b , a);
        }
        else{
           printf("the first number  %d is bigger than the second number %d" , a , b);
        }
        

        return 0;
    }