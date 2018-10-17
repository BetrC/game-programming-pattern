// FlyWight.cpp : 享元模式的具体应用
// 随机生成地形
//
#pragma once
#include "pch.h"
#include <iostream>
#include "World.cpp"
using namespace std;

int main()
{
	World world;
	world.genrateTerrain();

	for (int i = 0; i < WIDTH; i++) {
		for (int j = 0; j < HEIGHT; j++) {
			cout << world.getTile(i, j).getMoveCost() << " ";
		}

		cout << endl;
	}

	return 0;
}

