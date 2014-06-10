#pragma once
//ref
class Model
{

public:
	Model();

	int length;
	struct pointer
	{
		int x, y;
	}p;
	int Counter;

	void Get_Move();
	void Get_Move(int x1, int y1);
	void Move(int **Board);
	int Jumping(pointer p, int **Board);
	void Print(int **Board);
	bool Chek_Fishka(pointer p, int **Board);
};

