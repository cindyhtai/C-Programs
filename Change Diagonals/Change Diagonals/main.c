//
//  main.c
//  Change Diagonals
//
//  Created by Hsin Tai on 12/14/16.
//  Copyright © 2016 Hsin Tai. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // declare variables
    char a[10][10];                 //character array
    char junk;                      //junk variable to hold enter
    char fill;                      //character used to fill array
    char d1;                        //character for diagonal 1
    char d2;                        //character for diagonal 2
    
    //get and check user input
    printf("Enter a character to fill the array: ");
    scanf("%c%c", &fill, &junk);
    printf("Enter a different character for the first diagonal: ");
    scanf("%c%c", &d1, &junk);
    while (d1 == fill) {
        printf("Please enter a different character for the first diagonal: ");
        scanf("%c%c", &d1, &junk);
    }
    printf("Enter a different character for the second diagonal: ");
    scanf("%c%c", &d2, &junk);
    while (d2 == fill || d2 == d1) {
        printf("Please enter a different character for the second diagonal: ");
        scanf("%c%c", &d2, &junk);
    }
    
    //fill and print array
    printf("Original Array:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            a[i][j] = fill;
            printf("%4c", a[i][j]);
        }
        printf ("\n");
    }
    printf ("\n");
    
    //change diagonals
    for (int i = 0; i < 10; i++){
        a[i][i] = d1;
        a[i][9-i] = d2;
    }
    
    //print new array
    printf("New array:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%4c", a[i][j]);
        }
        printf ("\n");
    }
    
    return 0;
}

/*
 Enter a character to fill the array: -
 Enter a different character for the first diagonal: X
 Enter a different character for the second diagonal: 0
 Original Array:
 -   -   -   -   -   -   -   -   -   -
 -   -   -   -   -   -   -   -   -   -
 -   -   -   -   -   -   -   -   -   -
 -   -   -   -   -   -   -   -   -   -
 -   -   -   -   -   -   -   -   -   -
 -   -   -   -   -   -   -   -   -   -
 -   -   -   -   -   -   -   -   -   -
 -   -   -   -   -   -   -   -   -   -
 -   -   -   -   -   -   -   -   -   -
 -   -   -   -   -   -   -   -   -   -
 
 New array:
 X   -   -   -   -   -   -   -   -   0
 -   X   -   -   -   -   -   -   0   -
 -   -   X   -   -   -   -   0   -   -
 -   -   -   X   -   -   0   -   -   -
 -   -   -   -   X   0   -   -   -   -
 -   -   -   -   0   X   -   -   -   -
 -   -   -   0   -   -   X   -   -   -
 -   -   0   -   -   -   -   X   -   -
 -   0   -   -   -   -   -   -   X   -
 0   -   -   -   -   -   -   -   -   X
*/
