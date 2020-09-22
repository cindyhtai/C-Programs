//
//  main.c
//  Car Repair Bill
//
//  Created by Hsin Tai on 9/29/16.
//  Copyright © 2016 Hsin Tai. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // declare variables
    float labor_hours;          //number of hours of labor
    float labor_cost;           //labor cost per hour
    float parts_cost;           //cost of parts
    float total_cost;           //total cost of repair
    float tax;                  //7% tax on all parts
    
    //get user input
    printf("Enter the number of hours of labor, the labor cost per hour, and the cost of parts: ");
    scanf("%f%f%f", &labor_hours, &labor_cost, &parts_cost);
    
    //calculations
    tax = .07 * parts_cost;
    total_cost = labor_hours * labor_cost + parts_cost + tax;
    
    //print output
    printf("\nThe total cost of the repair is $%.2f.\n", total_cost);
    
    
    return 0;
}

/*
 Enter the number of hours of labor, the labor cost per hour, and the cost of parts: 5 5 5
 
 The total cost of the repair is $30.35.
 
 
 Enter the number of hours of labor, the labor cost per hour, and the cost of parts: 10 10 10
 
 The total cost of the repair is $110.70.
 
 
 Enter the number of hours of labor, the labor cost per hour, and the cost of parts: 8 15 45
 
 The total cost of the repair is $168.15.
*/