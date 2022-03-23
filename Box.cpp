#include "Box.h"

void Box::setheight(float h)
{
  height = h;
}
void  Box:: setlength(float l)
{
  length = l;
}
void  Box:: setwidth(float w)
{
  width  = w;
}

float  Box:: getheigth()
{
  return heigth;
}
float  Box:: getwidth()
{
  return width;
}
float  Box::getlength()
{
  return length;
}
int  Box::calcVolume()
{
  return heigth * length * width;
}