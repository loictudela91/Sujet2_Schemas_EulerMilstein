//
//  Diffusion.cpp
//  schema
//
//  Created by Loic Tudela on 07/05/2015.
//  Copyright (c) 2015 Loic Tudela. All rights reserved.
//

#include "Diffusion.h"
#include <cstdlib>

/*
Les fonctions mathématiques sont implémentées en premier ci-dessous
 
*/

double uniform01()
{
    return (rand()+0.0) / (double)RAND_MAX;
}


double* simulecouplegauss()
{
    double* p = new double[2];
    double X1 = uniform01();
    double X2 = uniform01();
    p[1] = sqrt(-2 * log(X1))*cos(2 * M_pi*X2);
    p[2] = sqrt(-2 * log(X2))*sin(2 * M_pi*X1);
    return p;
}
/*
Ici les méthodes et constructeurs de la classe mère sont implémentées
 
*/

Diffusion::Diffusion(void)
{
    m_x = x_0;
    m_y = y_0;
    m_delta = 0.001;
    x_sum = x_0;
    y_sum = y_0;
}


Diffusion::~Diffusion(void)
{
}

Diffusion::Diffusion(double x,double y,double delta)
{
    m_x = x;
    m_y = y;
    m_delta = delta;
    x_sum = x;
    y_sum = y;
}

Diffusion::Diffusion(double delta)
{
    m_x = x_0;
    m_y = y_0;
    m_delta = delta;
    x_sum = x_0;
    y_sum = y_0;
}

void Diffusion::previsionxy()
{
}

double Diffusion::montecarlo13(int N,int MC)
{
    return 0;
}

double Diffusion::montecarlo14(int N,int MC)
{
    return 0;
}

double Diffusion::getx()
{
    return m_x;
}

double Diffusion::gety()
{
    return m_y;
}

double Diffusion::getxsum()
{
    return x_sum;
}

double Diffusion::getysum()
{
    return y_sum;
}