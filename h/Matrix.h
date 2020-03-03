//
// Created by mohammadhossein on 2/26/20.
//

#ifndef APHW2_MATRIX_H
#define APHW2_MATRIX_H

#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <fstream>
#include <array>
#include <memory>

class Matrix {
private:
    std::array<size_t, 2> size{0,0};
    std::vector<std::vector<double>> data;

public:
    Matrix (const Matrix& a);
    Matrix (std::vector<std::vector<double>> d);
    Matrix (size_t m, size_t n, bool ones=true);
    Matrix (std::unique_ptr<std::unique_ptr<double[]>[]>& a, size_t m, size_t n);
    Matrix ();
    Matrix operator+(Matrix& a);
    Matrix operator*(Matrix& a);
    Matrix operator*(Matrix&& a);
    std::vector<double>& operator[](size_t i);
    std::array<size_t, 2> getSize();
    double det();
    Matrix _det(Matrix &a, size_t i, size_t j);
    Matrix inv();
    Matrix T();
    Matrix delCol(size_t i);
    Matrix col(size_t i);
    void save(const char*);
    void load(const char*);
    void show();
};


#endif //APHW2_MATRIX_H