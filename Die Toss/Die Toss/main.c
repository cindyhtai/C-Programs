//
//  main.c
//  Die Toss
//
//  Created by Hsin Tai on 10/31/16.
//  Copyright © 2016 Hsin Tai. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[]) {
   
    //declare variables
    int num1 = 0;                       //die lands on 1
    int num2 = 0;                       //die lands on 2
    int num3 = 0;                       //die lands on 3
    int num4 = 0;                       //die lands on 4
    int num5 = 0;                       //die lands on 5
    int num6 = 0;                       //die lands on 6
    int random_num;                     //hold random number generated
    int count = 0;                      //amount of tosses
    
    //seed random number generator
    srand((time(NULL)));
    
    //toss die and tally results
    while (count < 60) {
        random_num =  rand() % 6 + 1;
        if (random_num == 1)
            num1++;
        else if (random_num == 2)
            num2++;
        else if (random_num == 3)
            num3++;
        else if (random_num == 4)
            num4++;
        else if (random_num == 5)
            num5++;
        else
            num6++;
        count++;
    }

    //output results
    printf("Number     Tosses\n");
    printf(" 1           %i\n", num1);
    printf(" 2           %i\n", num2);
    printf(" 3           %i\n", num3);
    printf(" 4           %i\n", num4);
    printf(" 5           %i\n", num5);
    printf(" 6           %i\n", num6);
        
    return 0;
}

/*
 Number     Tosses
 1           8
 2           16
 3           12
 4           8
 5           7
 6           9
*/
