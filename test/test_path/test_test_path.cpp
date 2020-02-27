#define CATCH_CONFIG_MAIN
#include "../../include/catch.hpp"
#include "../../src/test_path/test_path.cpp"

TEST_CASE("Test uncovered_if method", "[test-path]")
{
    REQUIRE(TestPath::uncovered_if() == false);
}

TEST_CASE("Test fully covered", "[test-path]")
{
    REQUIRE(TestPath::fully_covered() == true);
}