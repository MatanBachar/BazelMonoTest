#include "gtest/gtest.h"
#include "HelloShow.h"

TEST(HelloTest, WhatsUp) {
    EXPECT_EQ(WatUp("Bazel"), "WaaaaaaaaaaaaaaaaaaaaaatUp Bazel");
}