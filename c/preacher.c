#include <stdio.h>
#include <unistd.h>

#define TEXT "у попа была собака, он её любил\n"\
             "она съела кусок мяса, он её убил\n"\
             "в землю закопал\n"\
             "и надпись написал, что у попа была собака, он её любил\n"\
             "она съела кусок мяса, он её убил\n"\
             "в землю закопал\n"\
             "и надпись написал, что "

void recursive_out() {
  printf("%s", TEXT);
  sleep(1);
  recursive_out();
}

int main()
{
  recursive_out();
  return 0;
}
