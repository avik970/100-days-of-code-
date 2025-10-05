//Write a program to find profit or loss percentage given cost price and selling price.

#include<stdio.h>
int main() {

    float costprice , sellingprice , profit , loss;


    printf("enter selling pice: ");
    scanf("%f" , &sellingprice);

    printf("enter cost price: ");
    scanf("%f" , &costprice );
 


    if(sellingprice > costprice){

        profit = sellingprice - costprice;

        printf("profit = %f\n" , sellingprice - costprice);
        printf("profit percentage = %f\n" , (profit / costprice) * 100);
    }
    else {

        loss = costprice - sellingprice;

        printf("loss = %f\n" , costprice - sellingprice );
        printf("loss percentage = %f\n" , (loss / costprice) * 100 );
    }

    return 0;


}


/*
1. Profit = SP – CP

2. Loss = CP – SP

3. Profit % = (Profit ÷ CP) × 100

4. Loss % = (Loss ÷ CP) × 100   */