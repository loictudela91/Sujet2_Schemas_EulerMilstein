//
//  Diffusion.h
//  schema
//
//  Created by Loic Tudela on 07/05/2015.
//  Copyright (c) 2015 Loic Tudela. All rights reserved.
//

#ifndef __schema__Diffusion__
#define __schema__Diffusion__

#include <stdio.h>

#pragma once
#include <vector>
#include "math.h"

/*
Quelques fonctions mathématiques implémentées dans le .cpp
*/

double uniform01();
double* simulecouplegauss();

const double k = 0.528905;
const double theta = 0.0319904;
const double sigma = 0.130035;
const double kappa = 0.354201;
const double mu = 0.00121853;
const double nu = 0.0238186;
const double rho = -1;
const double M_pi = 3.141592;
const double x_0 = 0.0000832349;
const double y_0 = 0.0181;



class Diffusion
{
public:
    Diffusion(void);
    ~Diffusion(void);
    Diffusion(double,double,double);
    Diffusion(double);
    virtual double montecarlo13(int,int);
    virtual double montecarlo14(int,int);
    virtual void previsionxy();
    double getx();
    double gety();
    double getxsum();
    double getysum();
protected:
    double m_x;
    double m_y;
    double m_delta;
    double x_sum;
    double y_sum;
};

#endif /* defined(__schema__Diffusion__) */
