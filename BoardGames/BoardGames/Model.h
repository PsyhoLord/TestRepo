#pragma once
#include <iostream>

using namespace std;

class Model
{
public:
	const int length = 8;
	struct pointer
	{
		int x, y;
	}p;
	int Counter = 0;

	Model();
	Model(int x1, int y1);
	void Move(int **Board);
	int Jumping(pointer p, int **Board);
	void Print(int **Board);
	bool Chek_Fishka(pointer p, int **Board);
	~Model();



};

