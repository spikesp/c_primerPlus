//
//  main.c
//  ex10-13.9
//
//  Created by spike on 16/4/4.
//  Copyright © 2016年 ___spike___. All rights reserved.
//

#include <stdio.h>

void plusArray(int ar1[],int ar2[],int ar3[],int numArray);
int main(int argc, const char * argv[]) {
    int ar1[4] = {2,4,5,8};
    int ar2[4] = {1,0,4,6};
    int ar3[4];
    int numArray = 4;
    
    plusArray(ar1, ar2, ar3, numArray);
    printf("%d,%d,%d,%d",ar3[0],ar3[1],ar3[2],ar3[3]);
    return 0;
}

void plusArray(int ar1[],int ar2[],int ar3[],int numArray)
{
    int i;
    
    for( i = 0; i < numArray; i++)
        ar3[i] = ar1[i] + ar2[i];
    
}