#include <iostream>

#include "coord3d.h"
#include "funcs.h"

int main()
{
  Coord3D p = {10, 20, 30};
  std::cout << length(&p) << "\n"; // would print 37.4166

  std::cout << "---------------------------" << "\n";
  Coord3D pointP = {10, 20, 30};
  Coord3D pointQ = {-20, 21, -22};
  Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);
  std::cout << "fartherFromOrigin= " << ans << "\n"; 

  std::cout << "----------------------------\n";
  Coord3D pos = {0, 0, 100.0};
  Coord3D vel = {1, -5, 0.2};

  move(&pos, &vel, 2.0); // object pos gets changed
  std::cout << pos.x << " " << pos.y << " " << pos.z << "\n"; // prints: 2 -10 100.4
  
  std::cout << "----------------------------\n";
    Coord3D *ppos = createCoord3D(10, 20, 30);
    Coord3D *pvel = createCoord3D(5.5, -1.4, 7.77);

    move(ppos, pvel, 10.0);

    std::cout << "Coordinates after 10 seconds: " 
         << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << "\n";

    deleteCoord3D(ppos); // release memory
    deleteCoord3D(pvel);
  return 0;
}
