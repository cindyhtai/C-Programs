//
//  main.c
//  Fraction Project
//
//  Created by Hsin Tai on 2/7/17.
//  Copyright © 2017 Hsin Tai. All rights reserved.
//

#include <stdio.h>

struct fraction_type{
    int numer;
    int denom;
};

void print_fraction (struct fraction_type);
struct fraction_type reduce(struct fraction_type x);
struct fraction_type add(struct fraction_type x, struct fraction_type y);

int main(int argc, const char * argv[]) {
    // declare variables
    struct fraction_type frac1;     //user inputs first fraction
    struct fraction_type frac2;     //uer inputs second fraction
    struct fraction_type sum;       //sum of fraction 1 and fraction 2
    
    //get user input
    printf("Enter a fraction (#/#): ");
    scanf("%i/%i", &frac1.numer, &frac1.denom);
    printf("Enter another fraction (#/#): ");
    scanf("%i/%i", &frac2.numer, &frac2.denom);
    
    //add fractions
    sum = add(frac1, frac2);
    
    //print output
    printf("The sum of fractions 1 and 2 is: ");
    print_fraction(sum);
    printf("\n");
    
    return 0;
}

void print_fraction (struct fraction_type x){
    printf("%i/%i", x.numer, x.denom);
}

struct fraction_type reduce(struct fraction_type x){
    int smallest;
    if (x.numer < x.denom){
        smallest = x.numer;
    }
    else{
        smallest = x.denom;
    }
    for (int i = smallest; i > 1; i--){
        if (x.numer % i == 0 && x.denom % i == 0){
            x.numer /= i;
            x.denom /= i;
        }
    }
    return x;
}

struct fraction_type add(struct fraction_type x, struct fraction_type y){
    struct fraction_type temp;
    temp.numer = x.numer * y.denom + y.numer * x.denom;
    temp.denom = x.denom * y.denom;
    temp = reduce (temp);
    return temp;
}

/*
 Enter a fraction (#/#): 2/3
 Enter another fraction (#/#): 1/5
 The sum of fractions 1 and 2 is: 13/15
 
 Enter a fraction (#/#): 1/9
 Enter another fraction (#/#): 2/3
 The sum of fractions 1 and 2 is: 7/9
 
 Enter a fraction (#/#): 1/12
 Enter another fraction (#/#): 5/9
 The sum of fractions 1 and 2 is: 23/36
*/