//
//  main.c
//  Hollow Square 2D Array
//
//  Created by Hsin Tai on 12/20/16.
//  Copyright © 2016 Hsin Tai. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //declare variable
    int num;
    
    //get array row and column
    printf("Enter a number from 3 to 10 for rows and columns: ");
    scanf("%i", &num);
    while (num < 3 || num > 10) {
        printf("Invalid input. Please enter a number from 3 to 10: ");
        scanf("%i", &num);
    }
    
    //declare array
    char a[num][num];
    
    //print l
    for (int i = 0; i < num; i++) {
        a[i][0] = *;
        printf(")
    }
    

    return 0;
}
