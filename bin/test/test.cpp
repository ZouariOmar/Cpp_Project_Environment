//! Lance the Doxygen file comment Her (in VSC - `/** */`)

//? Include prototype declaration part
// Include the main google test header
#include <gtest/gtest.h>

// Include the tested declared functions
#include "../../project/inc/inc.hpp"

//? Main int function prototype dev part

/**
 * @brief ## The Main Testing Function
 * *
 * - Using the Google Test (gtest)
 * @param argc int
 * @param argv char **
 * @return int
 */
int main(int argc, char **argv) {
  // Init test
  testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}

TEST(TestFn00, Test00) {
  /*
  Sub_test_00...
  */
}

/**
 * @brief ### Set the up io redirection function
 * *
 * - Test app using i/o files (for large i/o data)
 */
void setup_io_redirection() {
#ifndef __TEST__
  freopen("doc/input", "r", stdin);
  freopen("out/output", "w", stdout);
#endif
}