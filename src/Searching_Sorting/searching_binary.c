#include "searching_sorting.h"
#include <stdio.h>

/*
1. Write a C program to find the position of a target value within a sorted array using Binary search.
Binary Search : In computer science, a binary search or half-interval search algorithm finds the position
of a target value within a sorted array. The binary search algorithm can be classified as a dichotomies
divide-and-conquer search algorithm and executes in logarithmic time.
*/
#define ARRAY_LENGTH 9

void searching_binary(void){
    int array[ARRAY_LENGTH] = {
        6, 12, 17, 23, 38, 45, 77, 84, 90
    };
    int target = 23;

    unsigned int index = (ARRAY_LENGTH-1)/2;
    unsigned int last_index;
    if(target > array[index]){
        last_index = (ARRAY_LENGTH-1);
    } else {
        last_index = 0;
    }
    printf("Index: %d\tLast Index: %d\n", index, last_index);

    while (array[index] != target) {
        unsigned next_index;
        if(last_index > index){
            next_index = (last_index - index)/2+1;
        } else {
            next_index = (index - last_index)/2;
        }

        if(next_index == 0){
            break;
        }
        last_index = index;

        if(array[index] > target){
            index -= next_index;
        } else {
            index += next_index;
        }
        
        printf("Index: %d\tLast Index: %d\n", index, last_index);
    }

    if(array[index] == target){
        printf("Target: %d\tIndex: %d\n", target, index);
    } else {
        printf("Target: %d\tNot Finded.\n", target);
    }
}
