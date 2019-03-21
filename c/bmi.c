#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int getnumber(char* message, float* variable) {
  printf("%s", message);
  return (int)scanf("%f", variable);
}

int goodbye() {
  fprintf(stderr, "Should be a valid number\n");
  exit(1);
}

float bmi(float height, float weight) {
  height /=100;
  return weight / (height * height);
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

  getnumber("Enter weight: ", &weight) || goodbye();
  getnumber("Enter height: ", &weight) || goodbye();

  printf("%s\n", judge(bmi(height, weight)));

  return 0;
}