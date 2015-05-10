//
//  EulerDiff.h
//  schema
//
//  Created by Loic Tudela on 07/05/2015.
//  Copyright (c) 2015 Loic Tudela. All rights reserved.
//

#ifndef __schema__EulerDiff__
#define __schema__EulerDiff__

#include <stdio.h>

#pragma once
#include "diffusion.h"
#include <vector>

class EulerDiff :
public Diffusion
{
public:
    EulerDiff(void);
    ~EulerDiff(void);
    EulerDiff(double ,double ,double);
    EulerDiff(double);
    virtual void previsionxy();
    virtual double montecarlo13(int,int);
    virtual double montecarlo14(int,int);
};

#endif /* defined(__schema__EulerDiff__) */
