#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <fstream>
#include <limits>
#include <string>

class ScalarConverter {
    public:
        static void convert(const std::string& literal);
        ScalarConverter(); // Prevent instantiation
        ScalarConverter(const ScalarConverter& other);
        ScalarConverter& operator=(const ScalarConverter& rhs);
        ~ScalarConverter();

    private:
        static bool checkPseudoLiterals(const std::string& literal);
        static void fromChar(const std::string& literal);
        static void fromInt(const std::string& literal);
        static void fromFloat(const std::string& literal);
        static void fromDouble(const std::string& literal);
};

#endif