// Copyright 2021 Galkin-Vladislav

#include "include/Pseudographics.h"
#include <string>
#include <vector>

Pseudographics::Pseudographics(int num) {
    std::string s_num = std::to_string(num);
    if (s_num[0] == '-') {
        vecUp = { 'e', 'r', 'r', 'o', 'r', '#' };
        vecMid = { 'i', 'n', 'v', 'a', 'l', 'i', 'd',
' ', 'v', 'a', 'l', 'u', 'e', '#' };
        vecDown = { 'e', 'r', 'r', 'o', 'r', '#' };
    } else {
        while (s_num.length() != 0) {
            char c = s_num[0];
            s_num.erase(0, 1);
            switch (c) {
            case'0': {
                vecUp.push_back('.'); vecUp.push_back('_');
                vecUp.push_back('.');
                vecMid.push_back('|'); vecMid.push_back('.');
                vecMid.push_back('|');
                vecDown.push_back('|'); vecDown.push_back('_');
                vecDown.push_back('|');
                break;
            }
            case'1': {
                vecUp.push_back('.'); vecUp.push_back('.');
                vecUp.push_back('.');
                vecMid.push_back('.'); vecMid.push_back('.');
                vecMid.push_back('|');
                vecDown.push_back('.'); vecDown.push_back('.');
                vecDown.push_back('|');
                break;
            }
            case'2': {
                vecUp.push_back('.'); vecUp.push_back('_');
                vecUp.push_back('.');
                vecMid.push_back('.'); vecMid.push_back('_');
                vecMid.push_back('|');
                vecDown.push_back('|'); vecDown.push_back('_');
                vecDown.push_back('.');
                break;
            }
            case'3': {
                vecUp.push_back('.'); vecUp.push_back('_');
                vecUp.push_back('.');
                vecMid.push_back('.'); vecMid.push_back('_');
                vecMid.push_back('|');
                vecDown.push_back('.'); vecDown.push_back('_');
                vecDown.push_back('|');
                break;
            }
            case'4': {
                vecUp.push_back('.'); vecUp.push_back('.');
                vecUp.push_back('.');
                vecMid.push_back('|'); vecMid.push_back('_');
                vecMid.push_back('|');
                vecDown.push_back('.'); vecDown.push_back('.');
                vecDown.push_back('|');
                break;
            }
            case'5': {
                vecUp.push_back('.'); vecUp.push_back('_');
                vecUp.push_back('.');
                vecMid.push_back('|'); vecMid.push_back('_');
                vecMid.push_back('.');
                vecDown.push_back('.'); vecDown.push_back('_');
                vecDown.push_back('|');
                break;
            }
            case'6': {
                vecUp.push_back('.'); vecUp.push_back('_');
                vecUp.push_back('.');
                vecMid.push_back('|'); vecMid.push_back('_');
                vecMid.push_back('.');
                vecDown.push_back('|'); vecDown.push_back('_');
                vecDown.push_back('|');
                break;
            }
            case'7': {
                vecUp.push_back('.'); vecUp.push_back('_');
                vecUp.push_back('.');
                vecMid.push_back('.'); vecMid.push_back('.');
                vecMid.push_back('|');
                vecDown.push_back('.'); vecDown.push_back('.');
                vecDown.push_back('|');
                break;
            }
            case'8': {
                vecUp.push_back('.'); vecUp.push_back('_');
                vecUp.push_back('.');
                vecMid.push_back('|'); vecMid.push_back('_');
                vecMid.push_back('|');
                vecDown.push_back('|'); vecDown.push_back('_');
                vecDown.push_back('|');
                break;
            }
            case'9': {
                vecUp.push_back('.'); vecUp.push_back('_');
                vecUp.push_back('.');
                vecMid.push_back('|'); vecMid.push_back('_');
                vecMid.push_back('|');
                vecDown.push_back('.'); vecDown.push_back('.');
                vecDown.push_back('|');
                break;
            }
            }
            if (s_num.length() != 0) {
                vecUp.push_back(' ');
                vecMid.push_back(' ');
                vecDown.push_back(' ');
            } else {
                vecUp.push_back('#');
                vecMid.push_back('#');
                vecDown.push_back('#');
            }
        }
    }
}

Pseudographics::~Pseudographics() {
    vecUp.clear();
    vecMid.clear();
    vecDown.clear();
}

std::vector<char> Pseudographics::get_graph() {
    std::vector<char> vecRes;
    vecRes = vecUp;
    vecRes.insert(vecRes.end(), vecMid.begin(), vecMid.end());
    vecRes.insert(vecRes.end(), vecDown.begin(), vecDown.end());
    return vecRes;
}

std::vector<char> Pseudographics::get_Up_graph() {
    std::vector<char> vecRes;
    vecRes.insert(vecRes.begin(), vecUp.begin(), vecUp.end() - 1);
    return vecRes;
}

std::vector<char> Pseudographics::get_Mid_graph() {
    std::vector<char> vecRes;
    vecRes.insert(vecRes.begin(), vecMid.begin(), vecMid.end() - 1);
    return vecRes;
}

std::vector<char> Pseudographics::get_Down_graph() {
    std::vector<char> vecRes;
    vecRes.insert(vecRes.begin(), vecDown.begin(), vecDown.end() - 1);
    return vecRes;
}
