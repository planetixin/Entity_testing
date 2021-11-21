#pragma once

#include <iostream>
#include "olcPixelGameEngine.h"
#include "entities.h"

namespace sce 
{
	class Scene
	{
	public:
		Scene();
		~Scene();

		void Update(float fElapsedTime, olc::PixelGameEngine* pge);
	private:
		std::vector<entity> entities;
	};
}


