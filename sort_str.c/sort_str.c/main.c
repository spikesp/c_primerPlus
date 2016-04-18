//
//  main.c
//  sort_str.c
//
//  Created by spike on 16/4/6.
//  Copyright © 2016年 ___spike___. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#define SIZE 81
#define LIM 20
#define HALT " "
void stsrt(char *strings[1], int num);//The function for sort strings

int main(int argc, const char * argv[]) {
    
    char input[LIM][SIZE];
    char *ptstr[LIM];
    int ct = 0;
    int k;
    
    printf("Input up to %d lines, and I will sort them.\n",LIM);
    printf("To stop, press the Enter key at a line's start.\n");
    while(ct < LIM && gets(input[ct])!= NULL && input[ct][0] != '\0')
          {
              ptstr[ct] = input[ct];   /*let the pointer point to string that to be input */
              ct++;
          }
          stsrt(ptstr, ct);//Call the function of sort string
          puts("\nHere's the sorted list:\n");
          for ( k = 0; k < ct; k++)
              puts(ptstr[k]);//The pointer after sorted
          
          return 0;
}

void stsrt (char *strings[], int num)
{
    char *temp;
    int top, seek;
    
    for (top = 0; top < num-1; top++)
        for (seek = top + 1; seek < num; seek++)
            if(strcmp(strings[top],strings[seek]) > 0)
            {
                temp = strings[top];
                strings[top] = strings[seek];
                strings[seek] = temp;
                
            }
}
