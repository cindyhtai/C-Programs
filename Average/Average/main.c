//
//  main.c
//  Average
//
//  Created by Hsin Tai on 10/13/16.
//  Copyright © 2016 Hsin Tai. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //declare variables
    int num1, num2, num3;       //three user input numbers
    int largest;                //largest number of the 3
    int smallest;               //smallest number of the 3
    float average;              //average of the 3
    
    // user input
    printf("Please input three numbers separated by spaces: ");
    scanf("%i %i %i", &num1, &num2, &num3);
    
    //find largest number
    if (num1 > num2 && num1 > num3)
        largest = num1;
    else if (num2 > num3)
        largest = num2;
    else largest = num3;
    
    //find smallest number
    if (num1 < num2 && num1 < num3)
        smallest = num1;
    else if (num2 < num3)
        smallest = num2;
    else smallest = num3;
    
    //calculate average
    average = (num1 + num2 + num3) / 3.0;
    
    //print output
    printf("\nThe largest number is %i.", largest);
    printf("\nThe smallest number is %i.", smallest);
    printf("\nThe average is %.2f.\n", average);
    
    return 0;
}

/*
 Please input three numbers separated by spaces: 1 2 3
 The largest number is 3.
 The smallest number is 1.
 The average is 2.00.
 Please input three numbers separated by spaces: 10 10 100
 The largest number is 100.
 The smallest number is 10.
 The average is 40.00.
*/