#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "coord3d.h"

// add your tests here
TEST_CASE("Length") {
    Coord3D p = {10, 20, 30};
    CHECK(length(&p)==37.4166);
}