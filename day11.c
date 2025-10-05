//Write a program to display the month name and number of days using switch-case for a given month number.

#include<stdio.h>
int main() {
    int month;

    printf("enter the month number: ");
    scanf("%d" , &month);

    switch(month){

        case 1 : printf("january\n");
                 printf("31 days");
        break;             

        case 2 : printf("febuary\n");
                 printf("28 days");
        break;             

        case 3 : printf("march\n");
                 printf("31 days");
        break;             

        case 4 : printf("april\n");
                 printf("30 days");
        break;             

        case 5 : printf("may\n");
                 printf("31 days");
        break;

        case 6 : printf("june\n");
                 printf("30 days");
        break;

        case 7 : printf("july\n");
                 printf("31 days");
        break;

        case 8 : printf("august\n");
                 printf("31 days");
        break;
        
        case 9 : printf("september\n");
                 printf("30 days");
        break;             

        case 10 : printf("october\n");
                  printf("31 days");
        break;
        
        case 11 : printf("november\n");
                 printf("30 days");
        break;            
        
        case 12 : printf("december\n");
                  printf("31 days");
        break;             

        default : printf("invalid input");

    }

    return 0;
}