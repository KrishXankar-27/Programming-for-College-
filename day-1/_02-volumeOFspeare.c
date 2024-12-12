#include <stdio.h>
void main(){

double r , R;
double pi = 3.14159;
double V;

printf("please enter the radis of spear :- ");
scanf("%lf" , &r);

R = r * r * r;

V = (4.0/3.0)*pi*R;

printf("your ans is %lf" , V); 

}
