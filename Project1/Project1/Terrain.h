#pragma once
#include <iostream>
using namespace std;
struct Texture
{
	void Render()
	{
		cout << "Rendering amazing Texture!" << endl;
	}
	//empty class used for show
};

class Terrain
{
private:
	int movementCost;
	bool isWater_b;
	Texture texture;
public:
	Terrain();
	~Terrain();

	int GetMovementCost() const { return movementCost; }
	bool isWater() const { return isWater_b; }
	const Texture& getTexture() const { return texture; }
};

