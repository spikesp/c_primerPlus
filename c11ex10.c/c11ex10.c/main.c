//
//  main.c
//  c11ex10.c
//
//  Created by spike on 16/4/6.
//  Copyright © 2016年 ___spike___. All rights reserved.
//

#include <stdio.h>
#include <string.h>
char get_choice (void);
char get_first(void);
void stsrt(char *strings[], int num);//function of string sort


int main(void){
    
    
    int choice;
    char originString[11][20];
    char *ptstr[20];
    int ct = 0;
    int k;
    
    printf("Please input your string:");
    scanf("%10s", originString);
    
    
    while((choice = get_choice ()) != 'q')
    {
        switch(choice)
        {
            case 'a':puts(originString);
                break;
            case 'b':while(ct < 20 && originString[ct]!='\0')
            {
                ptstr[ct] = originString[ct];
                ct++;
            }
                stsrt(ptstr,ct);
                puts("\nHere's the sorted list: \n");
                for (k = 0; k < ct; k++)
                    puts(ptstr[k]);
                break;
            
                
            default:printf("Program error!\n");
                break;
        }
    }
 
    return 0;
}

char get_choice(void)
{
    int ch;
    
    printf("Enter the letter of your choice:\n");
    printf("a. original     b.ASNC sorted\n");
    printf("c. length sorted  d.first word print\n");
    printf("q.quit\n");
    ch = get_first ();
    
    while((ch < 'a' || ch > 'd') && ch != 'q')
    {
        printf("Please respond with a, b, c, d, or q.\n");
        ch = get_first ();
    }
    return ch;
}

char get_first(void)//use for loop
{
    int ch;
    
    ch = getchar();
    while (getchar()!= '\n')
        continue;
    return ch;
}

void stsrt(char *strings[],int num)
{
    char *temp;
    int top,seek;
    
    for (top = 0; top < num-1; top++)
        for (seek = top + 1; seek < num; seek++)
            if(strcmp(strings[top],strings[seek]) >0)
            {
                temp = strings[top];
                strings[top] = strings[seek];
                strings[seek] = temp;
            }
}