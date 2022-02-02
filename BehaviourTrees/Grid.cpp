#include <iostream>
#include <fstream>

#include "Grid.h"

using namespace std;


Grid::~Grid()
{
	//deleting array
	for (int i = 0; i < height; i++)
	{
		if (gridNodes[i] != nullptr)
		{
			delete gridNodes[i];
		}
	}
	delete[] gridNodes;
}

bool Grid::BuildGrid()
{
	fstream mapFile;
	mapFile.open("Map.txt");

	if (!mapFile)
	{
		cout << "Error opening file.";
		return false;
	}
	int currentRow = 0;
	int currentCol = 0;

	char currentGridNode;

	while (mapFile >> currentGridNode)
	{
		gridNodes[currentRow, currentCol] = new GridNode(currentRow, currentCol, currentGridNode);
		if (currentCol >= 9)
		{
			currentCol = 0;
			currentRow++;
			mapFile << endl;
		}
		else
		{
			currentCol++;
		}
	}
	mapFile.close();
	return true;
}

void Grid::ShowGrid()
{
	for (int row = 0; row < height; row++)
	{
		for (int col = 0; col < width; col++)
		{
			cout << gridNodes[row, col]->GetType()->GetType();
		}
		cout << endl;
	}
}