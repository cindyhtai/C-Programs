//
//  main.c
//  Leap Year Calculation
//
//  Created by Hsin Tai on 10/14/16.
//  Copyright © 2016 Hsin Tai. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
   
    // declare variables
    int year;               //user inputs year
    
    //user input
    printf("Enter a year: ");
    scanf("%i", &year);
    
    //check for leap year
    if (year % 400 == 0)
        printf("This is a leap year.\n");
    else if (year % 100 == 0)
        printf("This is not a leap year.\n");
    else if (year % 4 == 0)
        printf("This is a leap year.\n");
    else
        printf("This is not a leap year.\n");
  
    return 0;
}

/*
 Enter a year: 2000
 This is a leap year.
 
 Enter a year: 1900
 This is not a leap year.
 
 Enter a year: 2016
 This is a leap year
 
 Enter a year: 2017
 This is not a leap year.
*/