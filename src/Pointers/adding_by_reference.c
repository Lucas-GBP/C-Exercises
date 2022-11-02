#include "pointers.h"

/*
5. Write a program in C to add numbers using call by reference. Go to the editor
Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :

The sum of 5 and 6  is 11 
*/

void adding_by_reference(void){
    int a, b, c;

    getting_input(&a, &b);
    c = adding_numbers(&a, &b);

    printf("The sum of %d and %d is %d\n", a, b, c);
}

int adding_numbers(int* a, int* b){
    return *a+*b;
}

void getting_input(int* a, int*b){
    printf("Input the first number : ");
    scanf("%d", a);
    printf("Input the second number : ");
    scanf("%d", b);
}
