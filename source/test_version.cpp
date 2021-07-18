#include "gtest/gtest.h"
#include "lib.h"


TEST(Unit, checks_if_version_is_not_negative) {
    const auto v = version();
    ASSERT_GT(v, 0);
}
