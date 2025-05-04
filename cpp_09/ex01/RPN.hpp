#pragma once
#include <iostream>
#include <string>
#include <stack>
#include <cstdlib>

void    print_error(std::string err);
void    push_to_stack(char num, std::stack<int>& rpn);
void    stak(char *calcul);