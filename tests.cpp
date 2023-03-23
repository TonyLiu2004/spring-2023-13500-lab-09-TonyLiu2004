#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "coord3d.h"

// add your tests here
TEST_CASE("Length") {
    Coord3D p = {10, 20, 30};
    std::cout << length(&p) << "\n";
    CHECK(double(length(&p))==double(37.4166));
}