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
    for (int i = 0; i < static_cast<int>(str.length()); i++)
        vec_str.push_back(str[i]);

    ASSERT_EQ(vec_str, graph.get_graph());
}

TEST(Galkin_Vladislav_PseudographicsTest, Invalid_value) {
    // Check number less zero
    int num = -15;
    Pseudographics graph(num);

    std::string str = "error#invalid value#error#";
    std::vector<char> vec_str;
    for (int i = 0; i < static_cast<int>(str.length()); i++)
        vec_str.push_back(str[i]);

    ASSERT_EQ(vec_str, graph.get_graph());
}

TEST(Galkin_Vladislav_PseudographicsTest, Check_all_numbers) {
    int num = 1234567890;
    Pseudographics graph(num);

    std::string str = "... ._. ._. ... ._. ._. ._. ._. ._. ._.#..| ._| ._| |_";
    std::string str1 = "| |_. |_. ..| |_| |_| |.|#..| |_. ._| ..| ._| |_| ..";
    std::string str2 = "| |_| ..| |_|#";

    std::vector<char> vec_str;
    for (int i = 0; i < static_cast<int>(str.length()); i++)
        vec_str.push_back(str[i]);
    for (int i = 0; i < static_cast<int>(str1.length()); i++)
        vec_str.push_back(str1[i]);
    for (int i = 0; i < static_cast<int>(str2.length()); i++)
        vec_str.push_back(str2[i]);
    // line constraint 80 sumbols

    ASSERT_EQ(vec_str, graph.get_graph());
}

TEST(Galkin_Vladislav_PseudographicsTest, Check_get_Up_Mid_Down_str) {
    int num = 94;
    Pseudographics graph(num);

    std::string strUp = "._. ...";
    std::string strMid = "|_| |_|";
    std::string strDown = "..| ..|";
    std::vector<char> vec_strUp, vec_strMid, vec_strDown;
    for (int i = 0; i < static_cast<int>(strUp.length()); i++) {
        vec_strUp.push_back(strUp[i]);
        vec_strMid.push_back(strMid[i]);
        vec_strDown.push_back(strDown[i]);
    }
    // Checking each line separately
    ASSERT_EQ(graph.get_Up_graph(), vec_strUp);
    ASSERT_EQ(graph.get_Mid_graph(), vec_strMid);
    ASSERT_EQ(graph.get_Down_graph(), vec_strDown);
}
