//
//  main.c
//  Gross Pay
//
//  Created by Hsin Tai on 10/14/16.
//  Copyright © 2016 Hsin Tai. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    //declare variables
    float hours;                //hours worked
    float pay_rate;             //wage in dollars per hour
    float gross_pay;            //total pay including overtime
    
    //get user input
    printf("Enter number of hours worked and the pay rate: ");
    scanf("%f %f", &hours, &pay_rate);
    
    //calculate gross pay
    if (hours <= 40)
        gross_pay = hours * pay_rate;
    else
        gross_pay = 40 * pay_rate + pay_rate * 1.5 * (hours - 40);
    
    //print output
    printf("The gross pay is $%.2f\n", gross_pay);
    
    
    return 0;
}

/*
 Enter number of hours worked and the pay rate: 25 10
 The gross pay is $250.00
 
 Enter number of hours worked and the pay rate: 50 10
 The gross pay is $550.00
*/