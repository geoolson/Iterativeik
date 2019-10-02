#ifndef ITERIK
#define ITERIK

const int X = 0;
const int Y = 1;
const int Z = 2;

class IterativeIK
{
  public:
    IterativeIK(float errorMargin);
    ~IterativeIK();
    void EE(float position[3]);
    float position[3];
    float errorMargin;
};

#endif
