//
//  main.c
//  animals
//
//  Created by spike on 16/4/1.
//  Copyright © 2016年 ___spike___. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>

int main(int argc, const char * argv[]) {
    
    char  ch;
    printf ("Give me a letter of the alphabet, and I will give ");
    printf ("an animal name\nbegining with that letter.\n");
    printf ("Please type in a letter: type # to end my act.\n");
    while((ch = getchar())!= '#')
          {
              if ('\n' == ch)
                  continue;
              if (islower(ch))
                  switch(ch)
              {
                    case 'a':
                   printf("argali, a wild sheep of Asia\n");
                   break;
                    case 'b':
                   printf("babirusa, a wild pig of Malay\n");
                   break;
                   
                  default:
                      printf("That's a stumper!");
                   
        
                  
          }
          else
          printf(" I recognize only lowercase letters.\n");
          while (getchar()!= '\n')
          continue;
          }
          printf("Please type another letter or a #.\n");
    return 0;
}
              