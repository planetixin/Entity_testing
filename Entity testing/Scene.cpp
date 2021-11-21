#include "Scene.h"


namespace sce
{
	struct transform
	{
		olc::vd2d pos = { 0, 0 };
		olc::vd2d vel = { 0, 0 };
	};

	Scene::Scene()
	{
		entity ent = entity();
		entities.push_back(ent);
	}

	Scene::~Scene()
	{

	}

	void Scene::Update(float fElapsedTime, olc::PixelGameEngine* pge)
	{
		for (auto& ent : entities)
		{
			ent.Update(fElapsedTime, pge);
		}
	}

}
