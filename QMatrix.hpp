#include <algorithm>
#include <fstream>
#include <initializer_list>
#include <vector>

namespace QMatrix {
class Vector {
  std::vector<int> i_vec;

public:
  // initializer_list constructor
  Vector(const std::initializer_list<int> &v) {
    // foreach, need begin() and end()
    for (auto &i : v)
      i_vec.push_back(i);
  }
  // arrow operator in function heading
  // friend class
  friend auto operator<<(std::ostream &os, Vector const &m) -> std::ostream & {
    for (auto &i : m.i_vec)
      os << i << ' ';
    return os << std::endl;
  }
};
} // namespace QMatrix
