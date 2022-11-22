#pragma once
#include<iostream>
using namespace std;

void GetVolumeSurface(double x, double y, double z, double* volume, double* surface) {

	*volume = x * y * z;
	*surface = x * y * 2 + z * y * 2 + x * z * 2;
}
