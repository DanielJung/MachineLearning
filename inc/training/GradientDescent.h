/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   GradientDescent.h
 * Author: daniel
 *
 * Created on January 19, 2018, 2:33 PM
 */

#pragma once

#include <functional>
#include <vector>

std::vector<double> GradientDescent(std::function<double(const std::vector<double>&)> f, std::function<std::vector<double>(const std::vector<double>&)> df, const std::vector<double>& x0);