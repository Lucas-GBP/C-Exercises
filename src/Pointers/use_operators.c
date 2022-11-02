#include "pointers.h"

/*
3. Write a program in C to demonstrate the use of &(address of) and *(value at address) operator. Go to the editor
Expected Output :

Pointer : Demonstrate the use of & and * operator :                                                          
--------------------------------------------------------                                                      
m = 300                                                                                                      
fx = 300.600006                                                                                              
cht = z                                                                                                      
                                                                                                            
Using & operator :                                                                                           
-----------------------                                                                                       
address of m = 0x7ffda2eeeec8                                                                                
address of fx = 0x7ffda2eeeecc                                                                               
address of cht = 0x7ffda2eeeec7                                                                              
                                                                                                            
Using & and * operator :                                                                                     
-----------------------------                                                                                 
value at address of m = 300                                                                                  
value at address of fx = 300.600006                                                                          
value at address of cht = z                      

Using only pointer variable :                                                                                
----------------------------------                                                                            
address of m = 0x7ffda2eeeec8                                                                                
address of fx = 0x7ffda2eeeecc                                                                               
address of cht = 0x7ffda2eeeec7                                                                              
                                                                                                            
Using only pointer operator :                                                                                
----------------------------------                                                                            
value at address of m = 300                                                                                  
value at address of fx= 300.600006                                                                           
value at address of cht= z     
*/

void use_operators(void){
    int m = 300;
    double fx = 300.600006;
    char cht = 'z';

    int* m_ptr = &m;
    double* fx_ptr = &fx;
    char* cht_ptr = &cht;

    printf("Pointer : Demonstrate the use of & and * operator :\n"
        "--------------------------------------------------------\n"
        "m = %d\n"
        "fx = %f\n"
        "cht = %c\n"
        "\n"
        "Using & operator :\n"
        "-----------------------"
        "address of m = %p\n"
        "address of fx = %p\n"
        "address of cht = %p\n"
        "\n"
        "Using & and * operator :\n"
        "-----------------------------\n"
        "m = %d\n"
        "fx = %f\n"
        "cht = %c\n"
        "\n"
        "Using only pointer variable :\n"
        "---------------------------------\n"
        "address of m = %p\n"
        "address of fx = %p\n"
        "address of cht = %p\n"
        "\n"
        "Using only pointer operator :\n"
        "----------------------------------\n"
        "m = %d\n"
        "fx = %f\n"
        "cht = %c\n"
        "\n"
        ,
        m, fx, cht,
        &m, &fx, &cht,
        *(&m), *(&fx), *(&cht),
        m_ptr, fx_ptr, cht_ptr,
        *m_ptr, *fx_ptr, *cht_ptr
    );
}