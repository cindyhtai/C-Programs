//
//  main.c
//  Book Order
//
//  Created by Hsin Tai on 11/1/16.
//  Copyright © 2016 Hsin Tai. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //declare variables
    int books_num;
    float book_price;
    float tax;
    float shipping;
    float order_total;
    
    //get and check user input
    printf("Enter the number of books: ");
    scanf("%i", &books_num);
   
    while (books_num < 0) {
        printf("Invalid input. Please enter the number of books: ");
        scanf("%i", &books_num);
    }
    
    printf("Enter the price of the books: ");
    scanf("%f", &book_price);
    
    //calculate tax
    tax = .07 * book_price;
    
    //calculate shipping
    shipping = 2 * books_num;
    
    //calculate order total
    order_total = book_price + tax + shipping;
    
    //display result
    printf("\nThe order total is $.2f\n", order_total);
    
    return 0;
}
