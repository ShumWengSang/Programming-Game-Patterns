#pragma once
#include "Terrain.h"

#define HEIGHT 50
#define WIDTH 50
class World
{
public:
	World();
	~World();

	void GenerateWorld();

	const Terrain& GetTile(int x, int y);
	void RenderWorld();
private:
	Terrain * tiles_[HEIGHT][WIDTH];

	Terrain Grass;
	Terrain Hill;
	Terrain Water;
};

