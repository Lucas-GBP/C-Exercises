#include "file_handling.h"
#include <stdio.h>

/*
2. Write a program in C to read an existing file.
Test Data :
Input the file name to be opened : test.txt
Expected Output :
The content of the file test.txt is  :                                                                       
This is the content of the file test.txt.

*/

void read_file(void){
    //Create and open "test.txt" for whriting and reading
    FILE* f_ptr = fopen("test.txt", "r");
    if(!f_ptr){
        printf("Failed to open \"test.tsxt\"\n");
        exit(EXIT_FAILURE);
    }

    printf("File content:\n");
    char c = (char)fgetc(f_ptr);
    while(c != EOF){
        printf("%c", c);
        c = (char)fgetc(f_ptr);
    }

    fclose(f_ptr);

}
