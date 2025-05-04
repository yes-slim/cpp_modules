#pragma once
#include <iostream>
#include <map>
#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <cstring>

void    print_error(std::string str);
int    check_date(std::string line);
void    print_error2(std::string str);
int    check_pipe_and_after(std::string line);
int    check_valid_date(int day, int month, int year);
void    fill_nums(std::string line, std::map<std::string, double> mapp);
std::map<std::string, double>   get_data(void);