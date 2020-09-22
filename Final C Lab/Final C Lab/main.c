//
//  main.c
//  Final C Lab
//
//  Created by Hsin Tai on 2/24/17.
//  Copyright © 2017 Hsin Tai. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    // declare variables
    int a[20];          //array to hold random integers
    int pos = 0;        //number of positive numbers
    int neg = 0;        //number of negative numbers
    int zero = 0;       //number of zeroes
    int sum = 0;        //the sum of all th numbers in the array
    float avg = 0;      //the average of all the numbers in the array
    
    //seend random num generator
    srand(time(NULL));
    
    //fill array with random int from -50 to 50
    for(int i = 0; i < 20; i++)
    {
        a[i] = rand() % 101 - 50;
        if (i == 10){
            printf("\n");
        }
        printf("%3i ", a[i]);
    }
    printf("\n");
    
    //determine pos, neg, zero, sum, and avg
    for (int i = 0; i < 20; i++) {
        if (a[i] > 0)
            pos++;
        else if (a[i] < 0)
            neg++;
        else
            zero++;
        sum += a[i];
    }
    
    avg = sum / 20.0;
    
    //print output
    printf("Positives: %i\n", pos);
    printf("Negatives: %i\n", neg);
    printf("Zeroes: %i\n", zero);
    printf("Sum: %i\n", sum);
    printf("Average: %.2f\n", avg);
    return 0;
}

/*
 6 -10  14 -33 -41 -50  38 -14 -50  14
 17 -10 -39  12   1  33   4 -20 -44   7
 Positives: 10
 Negatives: 10
 Zeroes: 0
 Sum: -165
 Average: -8.25
 */
