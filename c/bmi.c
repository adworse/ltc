#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float bmi(float height, float weight) {
  height /=100;
  return weight / (height * height);
}

void check(float value) {
  if (!(int)roundf(value))
  {
    printf("Should be a valid number\n");
    exit(1);
  }
}

char* judge(float bmi) {
  if (bmi >= 25)
    return "overweight";
  else if (bmi < 18.5)
    return "underweight";
  else
    return "normal";
}

int main() {
  float height, weight;

  printf("Enter weight: ");
  scanf("%f", &weight);
  check(weight);

  printf("Enter height: ");
  scanf("%f", &height);
  check(height);

  printf("%s\n", judge(bmi(height, weight)));

  return 0;
}