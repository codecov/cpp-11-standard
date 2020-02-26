#define CATCH_CONFIG_MAIN
#include "../include/catch.hpp"
#include "../src/index.cpp"

TEST_CASE("Test uncovered_if method", "[index]")
{
    REQUIRE (Index::uncovered_if() == false);
}

TEST_CASE("Test fully covered", "[index]")
{
    REQUIRE (Index::fully_covered() == true);
}