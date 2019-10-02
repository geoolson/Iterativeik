#ifndef ITERIK
#define ITERIK
#include <vector>

const int X = 0;
const int Y = 1;
const int Z = 2;

class IterativeIK
{
  public:
    IterativeIK(float errorMargin, std::vector<float> axes, std::vector<float>positions);
    ~IterativeIK();
    void EE(float position[3]);
    float EEPosition[3];
    float errorMargin;
    std::vector <float> axes;
    std::vector <float> positions;
};

#endif
