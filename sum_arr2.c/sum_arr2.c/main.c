//
//  main.c
//  sum_arr2.c
//
//  Created by spike on 16/4/4.
//  Copyright © 2016年 ___spike___. All rights reserved.
//

#include <stdio.h>
#define SIZE 10
int sump (int * start, int * end);


int main(int argc, const char * argv[]) {
    
    int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
    long answer;
    
    answer = sump (marbles,marbles + SIZE);
    printf ("The total number of marbles is %d.\n", answer);
    return 0;
}

int sump (int * start, int * end)
{
    int total = 0;
    while (start < end)
    {
        total += *start;
        start++; // put the pointer to the next element
    }
    return total;
}