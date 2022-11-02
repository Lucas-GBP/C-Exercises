#include "file_handling.h"
#include <stdio.h>
#include <stdlib.h>

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
    printf("Done!\n");

    exit(EXIT_SUCCESS);
}
