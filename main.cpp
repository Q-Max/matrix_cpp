#include "QMatrix.hpp"
#include <iostream>
int main(void) {
  // initializer_list constructor
  QMatrix::Vector A{0, 1, 2, 3};
  QMatrix::Vector B{3, 2, 1, 0};
  // support cout
  std::cout << A << B;

  /*
    QMatrix::Matrix<int> A;
    QMatrix::Matrix<int> B;
    QMatrix::Matrix<int> C = B;
    QMatrix::Matrix<float> FA;
    QMatrix::Matrix<float> FB;
  */

  /*
    cout << A + B << endl;
    cout << A - B << endl;
    cout << A * B << endl;
  */
  return 0;
}
