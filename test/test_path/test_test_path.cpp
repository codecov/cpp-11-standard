#define CATCH_CONFIG_MAIN
#include "../../include/catch.hpp"
#include "../../src/test_path/test_path.cpp"

TEST_CASE("Test uncovered_if method", "[index]")
{
    REQUIRE(TestPath::uncovered_if() == false);
}

TEST_CASE("Test fully covered", "[index]")
{
    REQUIRE(TestPath::fully_covered() == true);
}