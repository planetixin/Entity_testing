#include <iostream>
#include <iostream>

#define OLC_PGE_APPLICATION
#include "olcPixelGameEngine.h"
#include "Scene.h"

class EntityExample : public olc::PixelGameEngine
{
public:
    EntityExample()
    {
        sAppName = "EntityDemo";
    }
protected:
    sce::Scene sce = sce::Scene();
private:
    bool OnUserCreate()
    {
        return true;
    }

    bool OnUserUpdate(float fElapsedTime)
    {
        Clear(olc::BLACK);

        sce.Update(fElapsedTime, this);



        return true;
    }
};


int main()
{
    EntityExample demo;
    if (demo.Construct(600, 400, 2, 2, false, true))
        demo.Start();
    std::cout << "Hello World!\n";
    return 0;
}
