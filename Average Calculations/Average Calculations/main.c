//
//  main.c
//  Average Calculations
//
//  Created by Hsin Tai on 10/28/16.
//  Copyright © 2016 Hsin Tai. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // declare variables
    int sum = 0;                    //sum of all numbers
    int num;                        //number entered by user
    float avg;                      //average of the numbers
    float count;                    //amount of numbers
    
    //get user input
    printf("Enter a number: ");
    scanf("%i", &num);
    
    while (num != -999)
    {
        
        count ++;
        sum += num;
        printf("Enter a number (Enter -999 to stop): ");
        scanf("%i", &num);
        
    }
    
    //find average
    avg = sum / count;
    
    //display results
    printf("The sum of the numbers is %i", sum);
    printf("\nThe average of the numbers is %.2f\n", avg);
    

    return 0;
}

/*
 Enter a number: 1
 Enter a number (Enter -999 to stop): 2
 Enter a number (Enter -999 to stop): 3
 Enter a number (Enter -999 to stop): 4
 Enter a number (Enter -999 to stop): -999
 The sum of the numbers is 10
 The average of the numbers is 2.50
*/