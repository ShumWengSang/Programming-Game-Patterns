#include "World.h"

#include <cstdlib>

World::World()
{
	GenerateWorld();
}


World::~World()
{
}

void World::GenerateWorld()
{
	for (int height = 0; height < HEIGHT; height++)
	{
		for (int width = 0; width < WIDTH; width++)
		{
			//random hills
			if (rand() % 10 == 0)
			{
				tiles_[height][width] = &Hill;
			}
			else
			{
				tiles_[height][width] = &Grass;
			}
		}
	}

	// Lay a river.
	int x = rand() % WIDTH;
	for (int y = 0; y < HEIGHT; y++) {
		tiles_[x][y] = &Water;
	}
}

const Terrain& World::GetTile(int x, int y)
{
	return *tiles_[x][y];
}

void World::RenderWorld()
{
	for (int x = 0; x < WIDTH; x++)
	{
		for (int y = 0; y < HEIGHT; y++)
		{
			Texture tex = tiles_[x][y]->getTexture();
			tex.Render();
		}
	}
}