//
//  main.c
//  r_drive0.c
//
//  Created by spike on 16/4/10.
//  Copyright © 2016年 ___spike___. All rights reserved.
//

#include <stdio.h>
extern int rand0(void);

int main(int argc, const char * argv[]) {
    int count;
    
    for (count = 0; count < 5; count++)
        printf("%hd\n", rand0());
    
    return 0;
}
