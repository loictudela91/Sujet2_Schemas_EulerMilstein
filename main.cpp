//
//  main.cpp
//  schema
//
//  Created by Loic Tudela on 07/05/2015.
//  Copyright (c) 2015 Loic Tudela. All rights reserved.
//

#include <iostream>
#include "MilsteinDiff.h"
#include "EulerDiff.h"
using namespace std;

int main(int argc, const char * argv[]) {

    EulerDiff essai(0.005);
    double moyenne1a = essai.montecarlo13(100, 1000);
    double moyenne1b = essai.montecarlo14(100, 1000);
    MilsteinDiff essai2(0.005);
    double moyenne2a = essai2.montecarlo13(100, 1000);
    double moyenne2b = essai2.montecarlo14(100, 1000);
    cout << "L'intégrale 13 par Euler vaut " << moyenne1a << endl;
    cout << "L'intégrale 14 par Euler vaut " << moyenne1b << endl;
    cout << "L'intégrale 13 par Milstein vaut " << moyenne2a << endl;
    cout << "L'intégrale 14 par Milstein vaut " << moyenne2b << endl;
    system("PAUSE");
    return 0;
}
