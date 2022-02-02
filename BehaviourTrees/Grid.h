#pragma once

#ifndef __GRID__
#define __GRID__

#include "GridNode.h"

class Grid
{
public:
	Grid(int w, int h)
	{
		width = w;
		height = h;
		for (int row = 0; row < height; row++)
		{
			gridNodes = new GridNode * [width];
		}
	}
	~Grid();
	bool BuildGrid();
	void ShowGrid();

private:
	int width;
	int height;
	GridNode ** gridNodes;
};

#endif /*defined (__GRID_NODE__)*/
