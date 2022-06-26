#pragma once
#ifndef _ISO_TRIANGLE_H_
#define _ISO_TRIANGLE_H_

#include "Triangle.h"

//равнобедренный
//a==c, A==C
class Iso_Triangle :public Triangle {
public:
	Iso_Triangle(int a_, int b_, int A_, int B_);
};


#endif // !_ISO_TRIANGLE_H_
