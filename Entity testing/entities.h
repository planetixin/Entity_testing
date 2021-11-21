#pragma once
#include "olcPixelGameEngine.h"
#include <iostream>
#include "compoment.h"

class entity
{
public:
	entity();
	~entity();

	void Update(float fElapsedTime, olc::PixelGameEngine* pge);
private:
	std::vector<comp::compoment*> Compoments;

};

