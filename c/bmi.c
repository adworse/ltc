#include <stdio.h>

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

  printf("Enter weight: ");
  scanf("%f", &weight);

  printf("Enter height: ");
  scanf("%f", &height);

  printf("%s\n", judge(bmi(height, weight)));

  return 0;
}