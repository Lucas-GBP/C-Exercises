#include "pointers.h"

/*
1. Write a program in C to show the basic declaration of pointer.
Go to the editor Expected Output :
 Pointer : Show the basic declaration of pointer :                                                            
-------------------------------------------------------                                                       
 Here is m=10, n and o are two integer variable and *z is an integer                                          
                                                                                                              
 z stores the address of m  = 0x7ffd40630d44                                                                  
                                                                                                              
 *z stores the value of m = 10                                                                                
                                                                                                              
 &m is the address of m = 0x7ffd40630d44                                                                      
                                                                                                              
 &n stores the address of n = 0x7ffd40630d48                                                                  
                                                                                                              
 &o  stores the address of o = 0x7ffd40630d4c                                                                 
                                                                                                              
 &z stores the address of z = 0x7ffd40630d50     
*/

void basic_declarition(void){
    int m = 10;
    int n, o;
    int* z = &m;

    printf(
        "Pointer : Show the basic declaration of pointer :\n"
        "-------------------------------------------------------\n"
        "Here is m=10, n and o are two integer variable and *z is an integer\n"
        "\n"
        "z stores the address of m  = %p\n"
        "*z stores the value of m = %d\n"
        "&m is the address of m = %p\n"
        "&n stores the address of n = %p\n"
        "&o  stores the address of o = %p\n"
        "&z stores the address of z = %p\n", 
    (void*)z, *z, (void*)&m, (void*)&n, (void*)&o, (void*)&z);
}
