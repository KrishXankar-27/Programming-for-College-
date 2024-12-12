#include <stdio.h> 
    int main(){
        float radis , area , perimeter;
        float pi =  3.14159;
         printf("plese enter the radis :- ");
         scanf("%f" , &radis);

        area = pi*(radis*radis);
        perimeter = 2*(pi*radis);

        printf("your Area of a Circle is %f\n" , area);
        printf("your Perimeter (Circumference) of a Circle %f\n" , perimeter);

        return 0;
    }