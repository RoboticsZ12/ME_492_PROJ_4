#include "matrix_operations.hpp"
#include <iostream>
#include <eigen3/Eigen/Dense>
#include <vector>
using namespace std; 

// THIS IS THE EMPTY CONSTRUCTOR. 
MatrixOperations::MatrixOperations()
{}

Eigen::MatrixXd MatrixOperations::multiply(const Eigen::MatrixXd &matrix_1, const Eigen::MatrixXd &matrix_2)const
{
    return matrix_1*matrix_2;
}

//******************************************************************//
// KEEP IN MIND, IF YOU DO NOT DEFINE VOID IN HEADER,               //
// THEN YOU MUST USE "RETURN" STATEMENT WITHIN THE FUNCTION.        //
// IF YOU DO NOT DECLARE "RETURN" WITHIN A NON-VOID FUNCTION,       //
// THEN THE FOLLOWING ERROR WILL HAPPEN,                            //
// "warning: no return statement in function returning non-void"    //
//******************************************************************//