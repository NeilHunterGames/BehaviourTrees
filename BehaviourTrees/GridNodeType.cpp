#include "GridNodeType.h"

void GridNodeType::SetGridNodeType(char t)
{
	type = t;
}

void GridNodeType::SetGridNodeWeight(char t)
{
	switch (t)
	{
		case 'S':
		case 'D':
			weight = 1;
			break;
		case 'G':
			weight = 2;
			break;
		case 'H':
			weight = 3;
			break;
		case 'R':
			weight = 4;
			break;
	}
}