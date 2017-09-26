#include <Rcpp.h>
#include "nlopt.hpp"

// [[Rcpp::export]]
int test(int a) 
{
    return a++;
    return a++;
}