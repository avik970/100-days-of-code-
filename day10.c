// Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include<stdio.h>
int main() {

    int side1 , side2 , side3;

    printf("enter three sides: ");
    scanf("%d %d %d" , &side1 ,  &side2 ,&side3);

    if(side1 == side2 && side2 == side3){

        printf("triangle is equilateral");
    }
    else if(side1 == side2 || side2 == side3 || side3 == side1 ){

        printf("triangle is isosceles");
    }
    else{
        printf("triangle is scalene");
    }
    return 0;
}