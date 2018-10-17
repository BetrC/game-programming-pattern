#pragma once
#include "pch.h"

// Œ∆¿Ì
class Texture {};

class Terrain {
public:
	Terrain(int m, bool iW, Texture tex)
		: moveCost(m),
		isWater_(iW),
		texture(tex)
	{}

	int getMoveCost() const {
		return moveCost;
	}

	bool isWater() const {
		return isWater_;
	}

	const Texture& getTexture() const {
		return texture;
	}

private:
	int moveCost;
	bool isWater_;
	Texture texture;
};