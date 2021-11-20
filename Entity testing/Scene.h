#pragma once

#include <iostream>
#include "olcPixelGameEngine.h"
#include "entt/entt.hpp"

namespace sce 
{
	class Scene
	{
	public:
		Scene(olc::PixelGameEngine* _pge);
		~Scene();

		void Update(float fElapsedTime);
	private:
		olc::PixelGameEngine* pge;
		entt::registry m_Registry;
	};
}


