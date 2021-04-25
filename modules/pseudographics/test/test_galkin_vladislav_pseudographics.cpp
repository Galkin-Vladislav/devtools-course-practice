// Copyright 2021 Galkin Vladislav

#include <gtest/gtest.h>

#include <string>
#include <vector>

#include "include/Pseudographics.h"

TEST(Galkin_Vladislav_PseudographicsTest, Check_Zero_and_get_graph) {
    int num = 0;
    Pseudographics graph(num);

    std::string str = "._.#|.|#|_|#";
    std::vector<char> vec_str;
    for (int i = 0; i < str.length(); i++) vec_str.push_back(str[i]);

    ASSERT_EQ(vec_str, graph.get_graph());
}

TEST(Galkin_Vladislav_PseudographicsTest, Invalid_value) {
    // Check number less zero
    int num = -15;
    Pseudographics graph(num);

    std::string str = "error#invalid value#error#";
    std::vector<char> vec_str;
    for (int i = 0; i < str.length(); i++) vec_str.push_back(str[i]);

    ASSERT_EQ(vec_str, graph.get_graph());
}

TEST(Galkin_Vladislav_PseudographicsTest, Check_all_numbers) {
    int num = 1234567890;
    Pseudographics graph(num);

    std::string str = "... ._. ._. ... ._. ._. ._. ._. ._. ._.#..| ._| ._| |_| |_. |_. ..| |_| |_| |.|#..| |_. ._| ..| ._| |_| ..| |_| ..| |_|#";
    std::vector<char> vec_str;
    for (int i = 0; i < str.length(); i++) vec_str.push_back(str[i]);

    ASSERT_EQ(vec_str, graph.get_graph());
}
