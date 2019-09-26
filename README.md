# simple-unittest
Simple, minimalistic unit testing boilerplate for C++. Single source file; no external library required.

## Adding unit tests (examples)

```cpp
void test_func1(void) {
    TEST_ASSERT(2, 2)
}

void test_func2(void) {
    TEST_ASSERT_CSTR("foobar", "foobar");
}

...

int main() {
  ...
  test_func1();
  test_func2();
  ...
}  
```

## Build
$ g++ -std=c++11 -o boilerplate boilerplate.cpp

## Run
$ ./boilerplate
All tests passed.
