﻿#pragma once

#include "Triangle.h"

//равнобедренный
//a==c, A==C
class  Iso_Triangle :public Triangle {
public:
	DLLCLASSES_API Iso_Triangle(int a_, int b_, int A_, int B_);
};
