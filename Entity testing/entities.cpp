#include "entities.h"

entity::entity()
{
	comp::transform* com = new comp::transform();
	Compoments.push_back(com);
}

entity::~entity()
{
	
}

void entity::Update(float fElapsedTime, olc::PixelGameEngine* pge)
{
	for (auto& com : Compoments)
	{
		com->Update(fElapsedTime, pge);
	}
}
