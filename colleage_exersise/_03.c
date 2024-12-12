#include <stdio.h> 
    int main(){
        int a,b,c,d,e,f;
        printf("enter the first & big number :- ");
        scanf("%d" , &a);
        printf("enter the seconed number :- ");
        scanf("%d" , &b);

        c = a+b;
        d = a/b;
        e = a*b;
        f = a-b;

        printf("addition :- %d\n" , c);
        printf("multipication :- %d\n" , e);
        printf("divvision :- %d\n" , d);
        printf("subtraction :- %d\n" , f);
        return 0;
    }