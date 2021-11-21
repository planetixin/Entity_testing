#pragma once
#include "olcPixelGameEngine.h"

namespace comp
{
	class component
	{
	public:
		component();
		~component();

		virtual void Update(float fElapsedTime, olc::PixelGameEngine* pge);


	};

	class transform : public component
	{
	public:
		transform()
		{

		}

		void Update(float fElapsedTime, olc::PixelGameEngine* pge) override
		{
			pge->FillCircle(pos.x + pge->ScreenWidth() / 2, pos.y + pge->ScreenHeight() / 2, 10.0f);
		}
		
	private:
		olc::vd2d pos = { 0,0 };
	};

	class Sprite : public component
	{
	public:
		Sprite()
		{

		}

		void Update(float fElapsedTime, olc::PixelGameEngine* pge) override
		{
			
		}

	private:
		olc::Sprite* sprite;
	};
}
}

