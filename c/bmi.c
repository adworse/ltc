#include <stdio.h>
#include <stdlib.h>

char c;
void getnumber(char* message, float* variable) {
  printf("%s", message);
  if (!(int)scanf("%f", variable)) {
    while((c = getchar()) != '\n' && c != EOF)
      /* discard */ ;
    getnumber("Should be a valid number, try again: ", variable);
  }
}

float bmi(float height, float weight) {
  height /=100;
  return weight / (height * height);
}

char* judge(float bmi) {
  if (bmi >= 25)
    return "overweight";
  if (bmi < 18.5)
    return "underweight";
  return "normal";
}

int main() {
  float height, weight;

  getnumber("Enter weight: ", &weight);
  getnumber("Enter height: ", &height);

  printf("%s\n", judge(bmi(height, weight)));

  return 0;
}