#pragma once
#include <iostream>
#include <stack>
#include <fstream>
#include <string>
#include <sstream>

void digitOrOp(std::stack<int>& stck,std::string input);
void polishCalc(std::stack<int>& stck, char symbol);
void clearAll(std::stack<int>& stck);