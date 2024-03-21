//
// Created by Олександр Пірожак on 13.03.2024.
//

#include "gtest/gtest.h"
#include "../Train.h"

TEST(TrainTestSuite, TrainTest) {
    Train train;
    train.FromFile("test.txt");
    std::string res = "221122211121";
    EXPECT_EQ(train.ToString(), res);
}

