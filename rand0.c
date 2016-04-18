//
//  rand0.c
//  r_drive0.c
//
//  Created by spike on 16/4/10.
//  Copyright © 2016年 ___spike___. All rights reserved.
//

#include "rand0.h"

static unsigned long int next = 1;
int rand0(void)
{
    next = next * 1103515245 + 12345;
    return (unsigned int)(next/65536) % 32768;
}
