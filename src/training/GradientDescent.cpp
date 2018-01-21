/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "GradientDescent.h"

#include <iostream>
#include <cmath>
#include <cblas.h>

using namespace std;

std::vector<double> GradientDescent(std::function<double(const std::vector<double>&)> f, std::function<std::vector<double>(const std::vector<double>&)> df, const std::vector<double>& x0) {
    std::vector<double> xn(x0);
    double fx = f(xn);
    std::vector<double> dfx(x0.size());
    
    for(size_t i=0; i<1500; ++i) {
        cout<<i<<endl;
        dfx = df(xn);
        
        double dfnorm = 0.0;
        for(size_t k=0; k<dfx.size(); ++k) {
            dfnorm+=dfx[k]*dfx[k];
        }
        dfnorm = sqrt(dfnorm);
        if(dfnorm<1e-6)     break;
        

    }
    
    return xn;
}