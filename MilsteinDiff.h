//
//  MilsteinDiff.h
//  schema
//
//  Created by Loic Tudela on 08/05/2015.
//  Copyright (c) 2015 Loic Tudela. All rights reserved.
//

#ifndef __schema__MilsteinDiff__
#define __schema__MilsteinDiff__

#include <stdio.h>

#pragma once
#include "diffusion.h"
#include <vector>

class MilsteinDiff :
public Diffusion
{
public:
    MilsteinDiff(void);
    ~MilsteinDiff(void);
    MilsteinDiff(double ,double ,double);
    MilsteinDiff(double);
    virtual void previsionxy();
    virtual double montecarlo13(int,int);
    virtual double montecarlo14(int,int);
};

#endif /* defined(__schema__MilsteinDiff__) */
