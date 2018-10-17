#pragma once
#include "pch.h"
#include "Terrain.cpp"
#include "cstdlib"
#include <ctime>

const int WIDTH = 10;
const int HEIGHT = 10;
const Texture GRASS;
const Texture HILL;
const Texture WATER;


class World {
public:
	World()
		: grassTerrain(1, false, GRASS),
		hillTerrain(2, false, HILL),
		waterTerrain(3, true, WATER)
	{}

	void genrateTerrain() {

		srand((unsigned)time(NULL));

		for (int i = 0; i < WIDTH; i++) {
			for (int j = 0; j < HEIGHT; j++) {
				if (rand() % 10 == 0) {
					tiles[i][j] = &hillTerrain;
				}
				else {
					tiles[i][j] = &grassTerrain;
				}
			}
		}

		int x = rand() % 10;
		for (int y = 0; y < HEIGHT; y++) {
			tiles[x][y] = &waterTerrain;
		}
	}

	const Terrain& getTile(int x, int y) const {
		return *tiles[x][y];
	}


private:
	Terrain* tiles[WIDTH][HEIGHT];
	Terrain grassTerrain;
	Terrain hillTerrain;
	Terrain waterTerrain;
};