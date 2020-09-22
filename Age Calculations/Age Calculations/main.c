//
//  main.c
//  Age Calculations
//
//  Created by Hsin Tai on 10/4/16.
//  Copyright © 2016 Hsin Tai. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
 
    // declare variables
   float name;
    int birth_year;
    int user_age;
    int result;
    
    //get user input
    printf("Enter your name and birth year: ");
    scanf("%f%i", &name, &birth_year);
    
    //calculations
    user_age = 2016 - birth_year;
    result =  50 * (birth_year * 2 + 5) + user_age - 250 / 100;
    
    //print output
    printf("\nThe result is %i\n", result);

    
    return 0;
}
