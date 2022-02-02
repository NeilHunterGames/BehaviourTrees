#pragma once

#ifndef __GRID_NODE__
#define __GRID_NODE__

#include "GridNodeType.h"

class GridNode
{
public:
	GridNode(int r, int c, char t)
	{
		row = r;
		col = c;
		type = new GridNodeType(t);
	}
	~GridNode() { }
	int GetRow() { return row; }
	int GetCol() { return col; }
	GridNodeType* GetType() { return type; }
	
private:
	GridNodeType * type;
	int row;
	int col;
};

#endif /*defined (__GRID_NODE__)*/