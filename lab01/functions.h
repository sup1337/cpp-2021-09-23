//
// Created by laszlo.hunor on 9/23/2021.
//

#ifndef CPP_2021_FUNCTIONS_H
#define CPP_2021_FUNCTIONS_H
#include <string>
int countBits(int number);
bool setBits(int& number , int order);
double mean(double array[],int numElements);
double stddev(double array[],int numElements);
std::pair<double ,double>max2(double array[],int numElements);
int countWords(std::string text);
std::string code(std::string text);
std::string deCode(std::string text);
std::string capitalizeWords(std::string text);





#endif //CPP_2021_FUNCTIONS_H
