#include <cstring>
#include <iostream>
#include <string>

#define TEST_ASSERT(value, expected) \
    if (!((value) == (expected))) { \
        printf("Failed test assertion on line %d\n", __LINE__); \
        printf("Expected: %s = %ld\n", #value, static_cast<long>(expected)); \
        printf("Actual:   %s = %ld\n", #value, static_cast<long>(value)); \
        exit(1); \
    }

#define TEST_ASSERT_CSTR(value, expected) \
    if (strcmp(value, expected)) { \
        printf("Failed cstring test assertion on line %d\n", __LINE__); \
        printf("Expected: %s = %s\n", #value, expected); \
        printf("Actual:   %s = %s\n", #value, value); \
        exit(1); \
    }

#define TEST_ASSERT_STR(value, expected) \
    if (value.compare(expected)) { \
        printf("Failed string test assertion on line %d\n", __LINE__); \
        printf("Expected: %s = %s\n", #value, expected.c_str()); \
        printf("Actual:   %s = %s\n", #value, value.c_str()); \
        exit(1); \
    }

using namespace std;

void test_foo() {
    TEST_ASSERT(true, true)
}

int main() {
    test_foo();
    cout << "All tests passed." << endl;
    return 0;
}

