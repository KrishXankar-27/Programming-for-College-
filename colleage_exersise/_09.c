/*
 9. a program to input basic salary of an   employee and calculate its Gross

according to following:
Basic Salary <= 10000 : HRA = 20%,
DA = 80% Basic Salary <= 20000
HRA = 25%, DA = 90% Basic Salary
> 20000 : HRA = 30%, DA = 95%
*/
#include <stdio.h>
int main(){
    int salary, hra, da,total;
    printf("please enter your salary :- ");
    scanf("%d" , &salary);
    if(salary <= 10000) {
    hra = ((salary*20)/100);
    da = ((salary*80)/100);
    total = salary + hra + da ;
    printf("your basic salary is %d your HRA is %d and your DA is %d , so your total salary is %d", salary,hra,da,total);
    }
   else if(salary <= 20000) {
    hra = ((salary*25)/100);
    da = ((salary*90)/100);
    total = salary + hra + da ;
    printf("your basic salary is %d your HRA is %d and your DA is %d , so your total salary is %d", salary,hra,da,total);
    }
    else if(salary > 20000) {
    hra = ((salary*30)/100);
    da = ((salary*95)/100);
    total = salary + hra + da ;
    printf("your basic salary is %d your HRA is %d and your DA is %d , so your total salary is %d", salary,hra,da,total);
    }
    
    return 0;
}
