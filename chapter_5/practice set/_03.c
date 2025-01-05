// 3. Write a function to calculate force of attraction on a body of mass ‘m’ exerted by earth. Consider g = 9.8m/s2
#include<stdio.h>
float force_of_attraction (int m){
    return m*9.8;
}

int main(){
    float m ;
    printf("please enter a mass :-");
    scanf("%.2f" , &m);
    printf("so the mass %.2f in the earth is %.2f" , m ,force_of_attraction(m));
    return 0;
}