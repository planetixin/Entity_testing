#include "Scene.h"


namespace sce
{
	struct transform
	{
		olc::vd2d pos = { 0, 0 };
		olc::vd2d vel = { 0, 0 };
	};

	Scene::Scene(olc::PixelGameEngine* _pge)
	{
		pge = _pge;

		entt::entity entity = m_Registry.create();
		m_Registry.emplace<transform>(entity);
	}

	Scene::~Scene()
	{

	}

	void Scene::Update(float fElapsedTime)
	{
		auto view = m_Registry.view<transform>();
		//drawEntities
		for (auto entity : view) {

			auto& trans = view.get<transform>(entity);
			trans.pos += trans.vel * fElapsedTime;
			if(trans.pos.x < pge->ScreenWidth()  / 2 && trans.pos.x > -pge->ScreenWidth()  / 2 &&
			   trans.pos.y < pge->ScreenHeight() / 2 && trans.pos.y > -pge->ScreenHeight() / 2)
				pge->DrawCircle(trans.pos.x + pge->ScreenWidth()/2, trans.pos.y + pge->ScreenHeight()/2, 20);
		}
	}

}
