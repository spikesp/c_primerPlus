//
//  main.c
//  ptsnum
//
//  Created by spike on 16/4/4.
//  Copyright © 2016年 ___spike___. All rights reserved.
//

#include <stdio.h>
#define SIZE 4
int main(int argc, const char * argv[]) {
  
    short dates [SIZE];
    short * pti;
    short index;
    double bills[SIZE];
    double * ptf;
    
    pti = dates;// asignment the address of array to pointer
    ptf = bills;
    printf ("%23s %10s\n", "short", "double");
    for (index = 0; index < SIZE; index ++)
        printf("pointers + %d: %10p %10p\n",
               index, pti + index,ptf + index);
    return 0;
}
