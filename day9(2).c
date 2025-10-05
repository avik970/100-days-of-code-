/*Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:
90-100: Grade A
80-89: Grade B
70-79: Grade C
60-69: Grade D
below 60: Grade F. */

#include<stdio.h>
int main() {

    int a;

    printf("enter your percentage: ");
    scanf("%d" , &a);

    if(a >= 90 && a <= 100 ){
        printf("Grade A");
    }
    else if(a >= 80 && a <= 89 ){
        printf("Grade b");
    }
     else if(a >= 70 && a <= 79 ){
        printf("Grade c");
    }
     else if(a >= 60 && a <= 69 ){
        printf("Grade d");
    }
    else{
        printf("Grade F");
    }

    return 0;
}