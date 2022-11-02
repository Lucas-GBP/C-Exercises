#include "file_handling.h"
/*
[An editor is available at the bottom of the page to write and execute the scripts.]

1. Write a program in C to create and store information in a text file. Go to the editor
Test Data :
Input a sentence for the file : This is the content of the file test.txt.
Expected Output :

 The file test.txt created successfully...!! 
 */
#define MAX_LENGTH 1024

void create_file(void){
    char data[MAX_LENGTH];
    const char f_name[] = "test.txt";
    FILE* f_ptr;

    printf("Creating \"%s\"...\n", f_name);

    f_ptr = fopen(f_name, "w");
    if(!f_ptr){
        printf("Error in creating or opening file.\n");
        exit(EXIT_FAILURE);
    }
    printf("\"%s\" created.\n"
        "Insert information to be archived in \"%s\"(Max of %d char)\n"
        ,f_name, f_name, MAX_LENGTH-1
    );

    fgets(data, sizeof(data), stdin);
    fprintf(f_ptr, "%s", data);
    fclose(f_ptr);
    printf("The file test.txt created successfully...!! \n");
}
