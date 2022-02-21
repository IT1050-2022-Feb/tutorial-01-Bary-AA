/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  float m1,m2=0;
  float avg=0;

  printf("Enter Marks of subject 1 ");
  scanf("%f", &m1);

  printf("Enter Marks of subject 2 ");
  scanf("%f", &m2);  
  
  avg= (m1+m2)/2;

  printf("average= %.2f", avg);

  return 0;
}

