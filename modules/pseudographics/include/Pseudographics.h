#pragma once
#include <iostream>
#include <string>
#include <vector>

class Pseudographics {
private:
	std::vector<char> vecUp, vecMid, vecDown;
public:
	Pseudographics(int num);
	~Pseudographics();
	std::vector<char> get_graph();
};