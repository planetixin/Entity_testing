#include "entities.h"

entity::entity()
{
	comp::transform* com = new comp::transform();
	Components.push_back(com);
}

entity::~entity()
{
	
}

void entity::Update(float fElapsedTime, olc::PixelGameEngine* pge)
{
	for (auto& com : Components)
	{
		com->Update(fElapsedTime, pge);
	}
}
