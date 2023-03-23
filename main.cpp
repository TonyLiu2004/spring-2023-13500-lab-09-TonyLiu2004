#include <iostream>

#include "coord3d.h"
#include "funcs.h"

int main()
{
  Coord3D p = {10, 20, 30};
  std::cout << length(&p) << "\n"; // would print 37.4166
  return 0;
}
