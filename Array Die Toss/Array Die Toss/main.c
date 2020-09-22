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
    int random_num;                         //hold random number generated
    int count = 0;                          //amount of tosses
    int tally[] = {0, 0, 0, 0, 0, 0, 0};    //array of die toss
    
    //seed random number generator
    srand((time(NULL)));
    
    //toss die and tally results
    for (count = 0; count < 60; count++) {
        random_num =  rand() % 6 + 1;
        tally[random_num]++;
    }
    
    //output results
    printf("Number     Tosses\n");
    for (int i = 1; i <= 6; i++)
        printf("%3i         %3i\n", i, tally[i]);
    return 0;
}

/*
 Number     Tosses
 1            12
 2             7
 3            16
 4             9
 5             9
 6             7
 */