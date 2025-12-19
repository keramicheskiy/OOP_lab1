#include <gtest/gtest.h>
#include "turkification.h"

TEST(TurkificationTest, UndefinedBehaviour) {
    EXPECT_THROW(turkify(-1), std::runtime_error);
    EXPECT_THROW(turkify(100), std::runtime_error);
}

TEST(TurkificationTest, Units) {
    EXPECT_EQ(turkify(0), "sıfır");
    EXPECT_EQ(turkify(1), "bir");
    EXPECT_EQ(turkify(6), "altı");
    EXPECT_EQ(turkify(9), "dokuz");
}

TEST(TurkificationTest, Tens) {
    EXPECT_EQ(turkify(10), "on");
    EXPECT_EQ(turkify(30), "otuz");
    EXPECT_EQ(turkify(50), "elli");
    EXPECT_EQ(turkify(80), "seksen");
}

TEST(TurkificationTest, CompositeNumbers) {
    EXPECT_EQ(turkify(67), "altmış yedi");
    EXPECT_EQ(turkify(14), "on dört");
    EXPECT_EQ(turkify(41), "kırk bir");
    EXPECT_EQ(turkify(88), "seksen sekiz");
}
