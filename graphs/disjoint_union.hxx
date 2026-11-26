#pragma once

#include <bits/stdc++.h>

using namespace std;

// Union find disjoint set
struct dsu{
  vector<size_t> p, s;
  dsu(size_t n) : p(n), s(n, 1) {iota(p.begin(), p.end(), 0);}
  size_t find(size_t x) {return p[x]==x? x : p[x] = find(p[x]);}
  bool join(size_t a, size_t b) {
    a = find(a);
    b = find(b);
    if (a == b) return false;
    if (s[a]<s[b]) swap(a, b);
    p[b]=a;
    s[a]+=s[b];
    return true;
  }
  size_t size(size_t x) {return s[find(x)];}
}
