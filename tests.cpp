#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "coord3d.h"

#include <typeinfo>


// add your tests here
TEST_CASE("Length") {
    Coord3D p = {10, 20, 30};
    std::cout << typeid(length(&p)).name() << " " << typeid(37.4166).name();
    CHECK(length(&p)== 37.4166 );
    CHECK(11 == 11);
}