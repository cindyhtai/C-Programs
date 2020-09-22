//
//  main.c
//  Rectangle Calculations
//
//  Created by Hsin Tai on 9/28/16.
//  Copyright © 2016 Hsin Tai. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    // declare variable
    float length;           //user input
    float width;            //user input
    float area;             //area of rectangle (length * width)
    float perimeter;        //perimeter of rectangle (2 * (length + width))
    float diagonal;         //use pythagorean theorem for rectangle diagonal
    
    //get user input
    printf("Enter the length and width of a rectangle in inches: ");
    scanf("%f %f", &length, &width);
    
    //check user input
    if (length <= 0 || width <= 0)
        printf("Invalid input.\n");
    else
    {
        //calculate area
        area = length * width;
        
        //calculate perimeter
        perimeter = 2 * (length + width);
        
        //calculate diagonal
        diagonal = sqrtf(length * length + width * width);
        
        //print output
        printf("\nThe area is %.2f inches squared.", area);
        printf("\nThe perimeter is %.2f inches.", perimeter);
        printf("\nThe diagonal is %.2f inches.\n", diagonal);
    }
    
    return 0;
}

/*
 Enter the length and width of a rectangle in inches: -1 -2
 Invalid input.
 
 Enter the length and width of a rectangle in inches: 1 2
 The area is 2.00 inches squared.
 The perimeter is 6.00 inches.
 The diagonal is 2.24 inches.
*/