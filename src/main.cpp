#include <eigen3/Eigen/Dense>
#include <iostream>
#include "matrix_operations.hpp"
using namespace std;

int main()
{
    // CREATING INSTANCE FOR CLASS "MATRIX_OPERATIONS"
    MatrixOperations Matvalue;

    // CREATES TWO MATRICES. 
    Eigen::MatrixXd matrix_1(3,3);
    Eigen::MatrixXd matrix_2(3,2);

    // MAT_1
    matrix_1 << 1,2,3,
                4,5,6,
                7,8,9;
    // MAT_2
    matrix_2 << 5,5,
                2,8,
                4,4;

    std::cout << "matrix product is: \n" << Matvalue.multiply(matrix_1,matrix_2) << std::endl;

return 0;
}
