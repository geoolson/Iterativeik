#include "iterativeik.h"

IterativeIK::IterativeIK(float errorMargin, std::vector<float> axes, std::vector<float>positions)
{
  this->errorMargin = errorMargin;
  this->axes = axes;
  this->positions = positions;
}

IterativeIK::~IterativeIK()
{

}
