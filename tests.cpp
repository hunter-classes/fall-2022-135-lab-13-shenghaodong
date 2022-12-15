#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// Tests
TEST_CASE("Task A"){
    CHECK(printRange(0, 10) == "0 1 2 3 4 5 6 7 8 9 10 ");
    CHECK(printRange(0, 5) == "0 1 2 3 4 5 ");
    CHECK(printRange(-2, 10) == "-2 -1 0 1 2 3 4 5 6 7 8 9 10 ");
}

TEST_CASE("Task B"){
    CHECK(sumRange(0, 5) == 0+1+2+3+4+5);
    CHECK(sumRange(0, 7) == 0+1+2+3+4+5+6+7);
    CHECK(sumRange(-2, 5) == -2+-1+0+1+2+3+4+5);
}

TEST_CASE("Task C"){
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
    CHECK(sumArray(arr, 3) == 12 + 17 - 5);
    CHECK(sumArray(arr, 7) == 12 + 17 - 5 +3 +7 -15 + 27);
}

TEST_CASE("Task D"){
CHECK(isAlphanumeric("dghaisyudgwuygdyuawwgd") == true);
CHECK(isAlphanumeric("- das=dsa - =213- 23 / 21 ~") == false);
}

TEST_CASE("Task E"){
CHECK(nestedParens(("((()))")) == true);
CHECK(nestedParens("(((((((((((((((())))))))))))))))") == true);
CHECK(nestedParens("(((((((((((((((()))") == false);
}

/*
std::string printRange(int left, int right);
int sumRange(int left, int right);
int sumArray(int *arr, int size);
bool isAlphanumeric(std::string s);
bool nestedParens(std::string s);
*/