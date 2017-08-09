//
//  viewPort.hpp
//  RayTracer
//
//  Created by Shi, Xiyao on 6/24/17.
//  Copyright © 2017 MezMeRriZze. All rights reserved.
//
//
//mat A = randu<mat>(4,5);
//mat B = randu<mat>(4,5);
//cout << A*B.t() << endl;

#ifndef viewPort_hpp
#define viewPort_hpp

#include <stdio.h>
#include <armadillo>
#include <setjmp.h>
#include "viewPort.hpp"
using namespace std;
using namespace arma;

class ViewPort{
    
    private :
    
    mat eyePoint, lookAtPoint, upVector, distance, magnitude, dimension;
    mat upperLeft, upperRight, lowerLeft, lowerRight;
    
    void setCorners(mat upperLeft, mat upperRight, mat lowerLeft, mat lowerRight){
        this->upperLeft = upperLeft;
        this->upperRight = upperRight;
        this->lowerLeft = lowerLeft;
        this->lowerRight = lowerRight;
    }
    
    public :
    ViewPort(mat eyePoint, mat lookAtPoint, mat upVector, mat distance, mat magnitude, mat dimension){
        this->eyePoint = eyePoint;
        this->lookAtPoint = lookAtPoint;
        this->upVector = upVector;
        this->distance = distance;
        this->magnitude = magnitude;
        this->dimension = dimension;
    }
    
    
    
};

#endif /* viewPort_hpp */
