#include <bits/stdc++.h>
#ifdef ALGO
#include "el_psy_congroo.hpp"
#else
#define DUMP(...)
#define CHECK(...)
#endif

namespace {

std::vector<int> vec;

struct Solver {

  void solve(int ca, std::istream& reader) {
    int n;
    reader >> n;
    int p = std::upper_bound(vec.begin(), vec.end(), n) - vec.begin();
    printf("%d\n", p);
  }
};

}  

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::istream& reader = std::cin;

  for (int a = 3; ; a += 2) /* 'for' inside */
  {
    int b = (a * a - 1) / 2;
    /* 'if' begin */
    if (b + 1 > 1e9) /* 'if' inside */
    break;
    vec.emplace_back(b + 1);
  }

  int cas = 1;
  reader >> cas;
  for (int ca = 1; ca <= cas; ++ca) /* 'for' inside */
  {
    auto solver = std::make_unique<Solver>();
    solver->solve(ca, reader);
  }
}

