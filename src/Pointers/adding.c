#include "pointers.h"

/*
4. Write a program in C to add two numbers using pointers. Go to the editor
Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :

The sum of the entered numbers is : 11
*/

void adding(void){
    int a, b;

    printf("Input the first number : ");
    scanf("%d", &a);
    printf("Input the second number : ");
    scanf("%d", &b);

    printf("The sum of the entered numbers is : %i\n", (*(&a)+*(&b)));
}
