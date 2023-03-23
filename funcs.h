#pragma once
#include "coord3d.h"

//returns the length of the coordinate point
double length(Coord3D *p);
Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2);
void move(Coord3D *ppos, Coord3D *pvel, double dt);
void deleteCoord3D(Coord3D *p);
Coord3D* createCoord3D(double x, double y, double z);