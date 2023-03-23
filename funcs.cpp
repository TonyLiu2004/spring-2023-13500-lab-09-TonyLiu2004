#include <iostream>
#include "funcs.h"
#include <cmath>
#include "coord3d.h"

// add functions here

//returns the length of the coordinate point
double length(Coord3D *p){
    return sqrt(pow(p->x,2)+pow(p->y,2)+pow(p->z,2));
}

Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2){
    if(length(p1) > length(p2)){
        return p1;
    }
    return p2;
}

void move(Coord3D *ppos, Coord3D *pvel, double dt){
    ppos->x = ppos->x + pvel->x * dt;
    ppos->y = ppos->y + pvel->y * dt;
    ppos->z = ppos->z + pvel->z * dt;
}

// free memory
void deleteCoord3D(Coord3D *p){
    delete p;
}

Coord3D* createCoord3D(double x, double y, double z){
    Coord3D *temp = new Coord3D;
    temp->x = x;
    temp->y = y;
    temp->z = z;
    return temp;
}