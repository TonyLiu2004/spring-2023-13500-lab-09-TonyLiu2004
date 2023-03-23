#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "coord3d.h"

// add your tests here
TEST_CASE("Length") {
    Coord3D p = {10, 20, 30};
    CHECK(round(length(&p)-37.4166) == 0);
}

TEST_CASE("FartherFromOrigin"){
    Coord3D pointP = {10, 20, 30};
    Coord3D pointQ = {-20, 21, -22};
    Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);
    CHECK(ans == &pointP);
}

TEST_CASE("Velocity Move"){
    Coord3D pos = {0, 0, 100.0};
    Coord3D vel = {1, -5, 0.2};
    move(&pos, &vel, 2.0); 
        // prints: 2 -10 100.4
    CHECK(pos.x == 2);
    CHECK(pos.y == -10);
    CHECK(pos.z == 100.4);
}

TEST_CASE("Dynamic Memory add and delete"){
    Coord3D *ppos = createCoord3D(10, 20, 30);
    Coord3D *pvel = createCoord3D(5.5, -1.4, 7.77);
    move(ppos, pvel, 10.0);

    CHECK(round((*ppos).x -65) == 0);
    CHECK(round((*ppos).y -6)== 0);
    CHECK(round((*ppos).z -107.7)== 0);

    deleteCoord3D(ppos); // release memory
    deleteCoord3D(pvel);
}