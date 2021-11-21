#pragma once
#include "olcPixelGameEngine.h"
#include <iostream>
#include "component.h"

class entity
{
public:
	entity();
	~entity();

	void Update(float fElapsedTime, olc::PixelGameEngine* pge);
private:
	std::vector<comp::component*> Components;

};

