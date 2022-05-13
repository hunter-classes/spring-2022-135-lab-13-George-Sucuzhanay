#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("TASK A: PRINT ALL NUMS IN RANGE")
{
    std::string result =  printRange(1,5);
    CHECK(result == "1 2 3 4 5");
};
TEST_CASE("TASK B: Sum of numbers in range")
{
    int result = sumRange(1,3);
    CHECK(result == 6);
    CHECK(printRange(6,8) == "6 7 8");
    CHECK(printRange(10,15) == "10 11 12 13 14 15");
}
TEST_CASE("TASK C"){
    int size = 10;
    int *arr = new int[size]; // allocate array dynamically
    arr[0] = 12;
    arr[1] = 17;
    arr[2] = -5;
    arr[3] = 3;
    arr[4] = 7;
    arr[5] = -15;
    arr[6] = 27;
    arr[7] = 5;
    arr[8] = 13;
    arr[9] = -21;

    CHECK(sumArray(arr, 10) == 43);
    CHECK(sumArray(arr, 5) == 34); // add up the first 5 elements
    CHECK(sumArray(arr, 9) == 64);
}

TEST_CASE("TASK D"){
    CHECK(isAlphanumeric("ASFGFRHFUJHF") == true);
    CHECK(isAlphanumeric("sdfghyffrhtrgdfd") == true);
    CHECK(isAlphanumeric("vbt feg efef") == false);
}
TEST_CASE("TASK E"){
    CHECK(nestedParens("()") == true);
    CHECK(nestedParens("") == true);
    CHECK(nestedParens("(()") == false);
}