/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   float marks1,marks2,avg;
   
  printf("Enter your marks for subject 1: ");
  scanf("%f",&marks1);
   
  printf("Enter your marks for subject 1: ");
  scanf("%f",&marks2);
  
  avg = ( marks1 + marks2 ) / 2;
     
  printf("The average is %.1f",avg);
   
  return 0;
}

