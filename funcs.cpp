#include <iostream>
#include "funcs.h"
#include <cmath>
#include "coord3d.h"

// add functions here

//returns the length of the coordinate point
double length(Coord3D *p){
    return sqrt(pow(p->x,2)+pow(p->y,2)+pow(p->z,2));
}