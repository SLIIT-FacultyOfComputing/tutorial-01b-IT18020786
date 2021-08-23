#include <stdio.h>

int main() {
  float mark1,mark2;
  float avg;

  printf("Enter mark of 1st subject:");
  scanf("%f",&mark1);

  printf("Enter mark of 2nd subject:");
  scanf("%f",&mark2);

  avg=(mark1+mark2)/2;
  printf("average is:%2.f",avg);
  
  return 0;
}