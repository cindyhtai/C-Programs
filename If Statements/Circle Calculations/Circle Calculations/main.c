//
//  main.c
//  Circle Calculations
//
//  Created by Hsin Tai on 9/28/16.
//  Copyright © 2016 Hsin Tai. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
   
    // declare variables
    float radius;           //user input
    float diameter;         //radius * 2
    float area;             //pi * radius * radius
    float circumference;    //2 * pi * radius
    
    //get user input
    printf("Enter the radius of a circle in inches: ");
    scanf("%f", &radius);
    
    //check user input
    if (radius <= 0)
        printf("Invalid input.\n");
    else
    {
        //calculate diameter
        diameter = 2 * radius;
        
        //calculate area
        area = M_PI * radius * radius;
        
        //calculate circumference
        circumference = 2 * M_PI * radius;
        
        //print output
        printf("\nThe diameter is %.3f inches.", diameter);
        printf("\nThe area is %.3f inches^2.", area);
        printf("\nThe circumference is %.3f inches.\n", circumference);
    }
    
    return 0;
}

/*
 Enter the radius of a circle in inches: 10
 
 The diameter is 20.000 inches.
 The area is 314.159 inches^2.
 The circumference is 62.832 inches.
 
 Enter the radius of a circle in inches: -2
 Invalid input.
*/