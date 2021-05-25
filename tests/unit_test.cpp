#include "gtest/gtest.h"

#include "../header/base.hpp"
#include "../header/add.hpp"
#include "../header/pow.hpp"
#include "../header/op.hpp"
#include "../header/sub.hpp"
#include "../header/mult.hpp"
#include "../header/div.hpp"
#include "../header/rand.hpp"
#include "../header/factory.hpp"

#include "rdudh001_tests.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
