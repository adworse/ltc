#include <stdio.h>

#define FINAL "1 bottle of beer on the wall, 1 bottle of beer.\n"\
              "Take one down, pass it around, no more bottles of beer on the wall...\n"\
              "No more bottles of beer on the wall, no more bottles of beer.\n"\
              "We've taken them down and passed them around; "\
              "now we're drunk and passed out!\n"

void drink(int bottles) {
  printf("%d bottles of beer on the wall, %d bottles of beer.\n"\
         "Take one down, pass it around, %d bottles of beer on the wall...\n",
         bottles, bottles, bottles - 1);
  if(bottles - 2) drink(bottles - 1);
}

int main() {
  drink(99);
  printf("%s", FINAL);
  return 0;
}
