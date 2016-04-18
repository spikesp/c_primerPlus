//
//  main.c
//  binary_search
//
//  Created by spike on 16/4/17.
//  Copyright © 2016年 ___spike___. All rights reserved.
//

#include <stdio.h>
int binary_search(int x, int v[], int n);

int main(int argc, const char * argv[]) {
    
    int array[] = {1,2,3,4,5,6,7,8,9};
    int value = 0;
    scanf("%d",&value);
    
    printf("%d",binary_search(value, array, 10));
    return 0;
}


int binary_search(int x, int v[], int n){
    int low, mid, high;
    low = 0;
    high = n - 1;
    
    while(low <= high){
        mid = (low + high)/2 ;
        if(x < v[mid])
            high = mid - 1;
        else if(x > v[mid])
            low = mid + 1;
        else
            return mid;
                
    }
    return -1;
}