// Copyright 2021 Galkin Vladislav

#ifndef MODULES_PSEUDOGRAPHICS_INCLUDE_PSEUDOGRAPHICS_H_
#define MODULES_PSEUDOGRAPHICS_INCLUDE_PSEUDOGRAPHICS_H_

#pragma once
#include <iostream>
#include <string>

#include <vector>

class Pseudographics {
 private:
    std::vector<char> vecUp, vecMid, vecDown;
 public:
    explicit Pseudographics(int num);
    ~Pseudographics();
    std::vector<char> get_graph();
    std::vector<char> get_Up_graph();
    std::vector<char> get_Mid_graph();
    std::vector<char> get_Down_graph();
};

#endif  // MODULES_PSEUDOGRAPHICS_INCLUDE_PSEUDOGRAPHICS_H_
