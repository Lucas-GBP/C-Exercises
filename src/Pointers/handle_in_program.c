#include "pointers.h"

/*
2. Write a program in C to demonstrate how to handle the pointers in the program. Go to the editor
Expected Output :

Address of m : 0x7ffcc3ad291c
Value of m : 29                                                                                              
                                                                                                            
Now ab is assigned with the address of m.                                                                    
Address of pointer ab : 0x7ffcc3ad291c                                                                       
Content of pointer ab : 29                                                                                   
                                                                                                            
The value of m assigned to 34 now.                                                                           
Address of pointer ab : 0x7ffcc3ad291c                                                                       
Content of pointer ab : 34                                                                                   
                                                                                                            
The pointer variable ab is assigned with the value 7 now.                                                    
Address of m : 0x7ffcc3ad291c                                                                                
Value of m : 7 
*/

void handle_in_program(void){
    int m = 29;
    print_var(&m, "m");

    int* ab = &m;
    printf("\nNow ab is assigned with the address of m.\n");
    print_var(ab, "ab");

    m = 34;
    printf("\nThe value of m assigned to 34 now.\n");
    print_var(&m, "m");

    *ab = 7;
    printf("\nThe pointer variable ab is assigned with the value 7 now.\n");
    print_var(ab, "ab");
    
}

void print_var(int* var, const char* s){
    printf(
        "Address of %s : %p\n"
        "Value of %s : %d\n",
        s, (void*)var, s, *var
    );
}
