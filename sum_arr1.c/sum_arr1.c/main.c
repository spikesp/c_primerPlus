//
//  main.c
//  sum_arr1.c
//
//  Created by spike on 16/4/4.
//  Copyright © 2016年 ___spike___. All rights reserved.
//

#include <stdio.h>
#define SIZE 10
int sum(int ar[], int n);

int main(int argc, const char * argv[]) {
   
    int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
    long answer;
    
    answer = sum (marbles,SIZE);
    printf("The total number of marbles is %d.\n", answer);
    printf("The size of marbles is %zd bytes.\n", sizeof marbles);
    
    return 0;
}

int sum (int ar[], int n) // what is the size of array
{
    int i;
    int total = 0;
    
    for ( i = 0; i < n; i++)
        total += ar[i];
    printf("The size of ar is %zd bytes.\n", sizeof ar);
    return total;
}
