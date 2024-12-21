/*
2. Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user.
*/

#include <stdio.h>
int main(){
    int sub1 , sub2 , sub3;
    printf("please enter your 1st subject number:-");
    scanf("%d" , &sub1);
    printf("please enter your 2nd subject number:-");
    scanf("%d" , &sub2);
    printf("please enter your 3rd subject number:-");
    scanf("%d" , &sub3);

    if ((sub1 + sub2 + sub3) >= 40 && (sub1 >= 33 && sub2 >= 33 && sub3 >= 33))
    {
        printf("yours subject 1 %d subject 2 %d subject 3 %d score is this so you pass\n" , sub1,sub2,sub3);
    }
    else{
        printf("sorry you fail\n");
    }
    
    return 0;
}