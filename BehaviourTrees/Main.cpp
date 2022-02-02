#include <iostream>


#include "Grid.h"
#include "GridNode.h"
#include "GridNodeType.h"

using namespace std;

int main()
{
	Grid grid(10, 10);
	grid.BuildGrid();

	grid.ShowGrid();



	return 0;
}