//
//  main.c
//  parta.c
//
//  Created by spike on 16/4/10.
//  Copyright © 2016年 ___spike___. All rights reserved.
//

#include <stdio.h>
void report_count();
void accumulate (int k);
int count = 0;


int main(int argc, const char * argv[]) {
    
    int value;
    register int i;
    
    printf("Enter a positive integer(0 to quit):");
    while (scanf("%d", &value) == 1 && value > 0)
    {
        ++count;
        for (i = value; i >= 0; i--)
            accumulate(i);
        printf("Enter a positive integer(0 to quit);");
        
    }
    report_count();

    return 0;
}

void report_count()
{
    printf("Loop executed %d times\n", count);
}