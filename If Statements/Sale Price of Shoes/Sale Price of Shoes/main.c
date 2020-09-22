//
//  main.c
//  Sale Price of Shoes
//
//  Created by Hsin Tai on 10/17/16.
//  Copyright © 2016 Hsin Tai. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
   
    // declare variables
    int num_of_shoes;               //pairs of shoes
    float shoe_cost;                //cost before discount
    float final_cost;               //cost after discount
    float avg_shoe_price;           //average show price after discount
    
    //get user input
    printf("Enter the # of pairs of shoes and the total cost of all shoes: ");
    scanf("%i %f", &num_of_shoes, &shoe_cost);
    
    //calculate final price
    if (num_of_shoes == 1)
        final_cost = .85 * shoe_cost;
    else if (num_of_shoes == 2)
        final_cost = .8 * shoe_cost;
    else
        final_cost = .75 * shoe_cost;
        
    //calculate average shoe price
    avg_shoe_price = final_cost / num_of_shoes;
    
    //print output
    printf("The final cost is $%.2f.\n", final_cost);
    printf("The average price per pair of shoes is $%.2f.\n", avg_shoe_price);
    
    return 0;
}

/*
 Enter the # of pairs of shoes and the total cost of all shoes: 1 10
 The final cost is $8.50.
 The average price per pair of shoes is $8.50.
 
 Enter the # of pairs of shoes and the total cost of all shoes: 2 100
 The final cost is $80.00.
 The average price per pair of shoes is $40.00.
 
 Enter the # of pairs of shoes and the total cost of all shoes: 10 200
 The final cost is $150.00.
 The average price per pair of shoes is $15.00.
*/