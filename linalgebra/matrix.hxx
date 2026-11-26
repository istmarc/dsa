#pragma once

#include <bits/stdc++.h>

using namespace std;

// Row major mxn matrix
template<typename T>
struct matrix{
  size_t _m;
  size_t _n;
  vector<T> _x;

  matrix(size_t m, size_t n) : _m(m), _n(n) {_x = vector<T>(m*n);}
  T& operator[](size_t k) {return _x[k];}
  T& operator()(size_t i, size_t j) {return _x[i*_m+j];}
};

