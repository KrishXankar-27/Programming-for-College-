/*
5. Write a program to determine whether a character entered by the user is
lowercase or not.
*/

#include <stdio.h>
int main(){
    char le;
    printf("enter a letter:- ");
    scanf("%c" , &le);
    if (le >= "A" && "Z" <= le)
    {
    printf("your alphabet is capital\n");
    }
    else
    {
    printf("your alphabet is small\n");
    }
    
    return 0;
}