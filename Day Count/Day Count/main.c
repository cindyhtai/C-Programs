//
//  main.c
//  Day Count
//
//  Created by Hsin Tai on 1/9/17.
//  Copyright © 2017 Hsin Tai. All rights reserved.
//

#include <stdio.h>

int calculate_days();       //prototype

int main(int argc, const char * argv[]) {
    // declare variables
    int m;              //user inputs month
    int d;              //user inputs day
    int y;              //user inputs year
    int day_num;        //number of days since 12/31/1999
    
    //get user input
    printf("Enter a date (m/d/yyyy): ");
    scanf("%i/%i/%i", &m, &d, &y);
    while (m <= 0 || m > 12)
    {
        printf("Invalid month. Please enter another number for the month: ");
        scanf("%i", &m);
    }
    while (d <= 0 || d > 30)
    {
        printf("Invalid day. Please enter another number for the day: ");
        scanf("%i", &d);
    }
    while (y < 2000)
    {
        printf("Invalid year. Please enter another number for the year: ");
        scanf("%i", &y);
    }
    
    //call function
    day_num = calculate_days(m, d, y);
    
    //print ouput
    if (day_num == 1)
        printf("%i/%i/%i: %i day\n", m, d, y, day_num);
    else
        printf("%i/%i/%i: %i days\n", m, d, y, day_num);
    
    return 0;
}

int calculate_days(int m, int d, int y){
    return 365 * (y - 2000) + 30 * (m - 1) + d;
}

/*
 Enter a date (m/d/yyyy): 5/28/2005
 5/28/2005: 1973 days
 
 Enter a date (m/d/yyyy): 3/0/2000
 Invalid day. Please enter another number for the day: 27
 3/27/2000: 87 days
*/