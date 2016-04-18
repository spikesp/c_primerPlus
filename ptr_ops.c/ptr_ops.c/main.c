//
//  main.c
//  ptr_ops.c
//
//  Created by spike on 16/4/4.
//  Copyright © 2016年 ___spike___. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int urn[5] = {100, 200, 300, 400, 500};
    int * ptr1, * ptr2, * ptr3;
    
    ptr1 = urn; //assignment an address to the pointer
    ptr2 = &urn[2]; // the same of upper line
                    // get the value of the pointer point to
                    // and get the address of pointer
    printf("pointer value, dereferenced pointer, pointer address:\n");
    printf("ptr1 = %p, *ptr1 =%d, &ptr1 =%p\n", ptr1, *ptr1, &ptr1);
    
    //plus of pointer
    ptr3 = ptr1 + 4;
    printf("\nadding an int to a pointer:\n");
    printf("ptr1 + 4 = %p, *(ptr1 + 3) = %d\n",
           ptr1 + 4, *(ptr1 + 3));
    ptr1++;
    printf("\nvalues after ptr1++\n");
    printf("ptr1 = %p, *ptr1 = %d, &ptrl = %p\n",
    ptr1, *ptr1, &ptr1);
    
    ptr2--;
    printf("\n values after --ptr2\n");
    printf("ptr2 = %p, *ptr2 =%d, &ptr2 = %p\n",
           ptr2, *ptr2, &ptr2);
    
    --ptr1;
    ++ptr2;
    printf("\nPointers reset to original values:\n");
    printf("ptr1 = %p, ptr2 = %p\n", ptr1, ptr2);
    
    //a pointer minus another pointer
    printf("\nsubtracting one pointer from another:\n");
    printf("ptr2 =%p, ptr1 =%p, ptr2 - ptr1 = %d\n",
           ptr2, ptr1, ptr2 - ptr1);
    
    //a pointer minus an interger
    printf("\n subtracting an int from a pointer:\n");
    printf("ptr3 = %p, ptr3 -2 = %p\n",
           ptr3, ptr3 -2);
    return 0;
}
