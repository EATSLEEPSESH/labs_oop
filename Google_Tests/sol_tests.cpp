#include <gtest/gtest.h>
#include "solution.h"
#include <string>
class ItoBstring : public ::testing::TestWithParam<std::tuple<int, std::string>> {
};

TEST_P(ItoBstring, CheckITBS) {
    auto [value, expected] = GetParam();
    EXPECT_EQ(int_to_binary_string(value), expected);
}

INSTANTIATE_TEST_SUITE_P(
        ItoBstringCases,
        ItoBstring,
        ::testing::Values(
                std::make_tuple(12,"00000000000000000000000000001100"),
                std::make_tuple(1492,"00000000000000000000010111010100"),
                std::make_tuple(99919239,"00000101111101001010010110000111"),
                std::make_tuple(0,"00000000000000000000000000000000"),
                std::make_tuple(-123,"Введено отрицательное число"),
                std::make_tuple(-12412,"Введено отрицательное число"),
                std::make_tuple(1000000000,"00111011100110101100101000000000")
                )
        );
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}