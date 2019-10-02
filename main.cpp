#include <iostream>
#include "iterativeik.h"

int main(){
  std::cout << "hello world" << std::endl;
  std::vector <float> axes(1);
  std::vector <float> positions(1);
  axes[0] = 5;
  IterativeIK ik = IterativeIK(5.0f, axes, positions);
  return 0;
}
