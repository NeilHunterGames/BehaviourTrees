#pragma once

#ifndef __GRID_NODE_TYPE__
#define __GRID_NODE_TYPE__


class GridNodeType
{
public:
	GridNodeType(char ty)
	{
		type = ty;
		SetGridNodeWeight(ty);
	}
	~GridNodeType();
	void SetGridNodeType(char t);
	void SetGridNodeWeight(char t);
	char GetType() { return type; }
	int GetWeight() { return weight; }
private:
	char type;
	int weight;
	
};

#endif /*defined (__GRID_NODE_TYPE__)*/