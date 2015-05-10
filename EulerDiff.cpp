//
//  EulerDiff.cpp
//  schema
//
//  Created by Loic Tudela on 07/05/2015.
//  Copyright (c) 2015 Loic Tudela. All rights reserved.
//

#include "EulerDiff.h"



EulerDiff::EulerDiff(void) : Diffusion()
{
    
}


EulerDiff::~EulerDiff(void)
{
}

EulerDiff::EulerDiff(double x, double y,double delta) : Diffusion(x,y,delta)
{
}

EulerDiff::EulerDiff(double delta) : Diffusion(delta)
{
}

void EulerDiff::previsionxy()
{
    double *p = new double[2];
    p = simulecouplegauss();
    m_x = m_x + k*(theta-m_x)*(m_delta) + sigma*sqrt(m_x*m_delta)*p[1];
    m_x = fabs(m_x);
    x_sum = m_x + x_sum;
    double gauss = rho * sqrt(m_delta)*p[1] + sqrt(1-rho*rho)*sqrt(m_delta)*p[2];
    m_y = m_y + kappa*(mu-m_y)*m_delta+nu*sqrt(m_y)*gauss;
    m_y = fabs(m_y);
    y_sum = m_y + y_sum;
}

/*
 N est l'horizon 
 MC est pour calculer l'espérance
 */

double EulerDiff::montecarlo13(int N,int MC)
{
    m_x = x_0;
    y_sum = y_0;
    m_x = x_0;
    m_y = y_0;
    double res = 0;
    for (int j=1; j<=MC; j++)
    {
        for (int i=1; i<=N; i++)
        {
            this->previsionxy();
        }
        res = res + exp(-(x_sum+y_sum)*m_delta);
        x_sum = x_0;
        y_sum = y_0;
        m_x = x_0;
        m_y = y_0;
    }
    return (res+0.0)/MC;
    
}

double EulerDiff::montecarlo14(int N,int MC)
{
    m_x = x_0;
    y_sum = y_0;
    m_x = x_0;
    m_y = y_0;
    double res = 0;
    for (int j=1; j<=MC; j++)
    {
        for (int i=1; i<=N; i++)
        {
            this->previsionxy();
        }
        res = res + exp(-(x_sum+y_sum)*m_delta*m_y);
        x_sum = x_0;
        y_sum = y_0;
        m_x = x_0;
        m_y = y_0;
    }
    return (res+0.0)/MC;
    
}