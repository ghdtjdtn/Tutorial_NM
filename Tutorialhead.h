/*----------------------------------------------------------------\
@ Numerical Methods by Young-Keun Kim - Handong Global University

Author           : Seongsu Hong
Created          : 11-05-2021
Modified         : 11-05-2021
Language/ver     : C++ in MSVS2019

Description      : myNM.h
----------------------------------------------------------------*/

#ifndef		_MY_NM_H		// use either (#pragma once) or  (#ifndef ...#endif)
#define		_MY_NM_H

#include "myMatrix.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//extern void gradient1D(double x[], double y[], double dydx[], int m);

extern double func(const double x);

extern double dfunc(const double x);

extern double newtonRaphson(double _x0, double _tol);

#endif