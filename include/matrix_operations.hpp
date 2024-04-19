#pragma once
// cpp

// 3rd party
#include <eigen3/Eigen/Dense>

// Local libs
class MatrixOperations
{
public:
    // DEFAULT CONSTRUCTOR
    MatrixOperations();

    // FUNCTION THAT WILL CREATE 2 EIGEN MATRICES.
    // Eigen::MatrixXd represents a class within the Eigen library.
    Eigen::MatrixXd multiply(const Eigen::MatrixXd &matrix_1, const Eigen::MatrixXd &matrix_2) const;
};

//*************************************************************************//
// WE MUST NOT DECLARE THIS FUNCTION AS VOID B/C OF ERROR PROVIDED BELOW   //
// WHEN COMPILING IN THE CPP FILE:                                         //
//"declaration is incompatible with void"                                  //
// TO AVOID THIS ERROR, WE MUST NOT DECLARE VOID, BUT ENSURE WE "RETURN"   //
// A VALUE IN THE CPP FILE.                                                //
//*************************************************************************//