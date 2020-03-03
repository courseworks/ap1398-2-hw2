//
// Created by mohammadhossein on 2/26/20.
//

#ifndef APHW2_APHW2_H
#define APHW2_APHW2_H

#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <fstream>
#include <array>
#include <optional>
#include "Matrix.h"

std::vector<std::vector<double>> getData(const char* filename, bool add_bias=true);
double grade(Matrix w, std::vector<double> x);
void displayOutput(Matrix dataset, Matrix w);
std::optional<double> det(Matrix& a);
std::optional<Matrix> inv(Matrix& a);
std::optional<Matrix> transpose(Matrix& a);
Matrix findWeights(const char*);
Matrix predict(const char*, Matrix& w, bool disp=false);
size_t findMinNoOfMultiplications(std::vector<Matrix>&);
void findMinimum(std::vector<size_t> t, size_t& m, size_t& a);
size_t findMinOps(size_t i, size_t j, std::vector<size_t> p, std::vector<std::vector<size_t>>& m);
#endif //APHW2_APHW2_H
