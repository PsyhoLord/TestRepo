#pragma once
//ref
class Model
{

public:
	Model();

	int length;
		int x, y;
		int Counter;
	
	void Get_Move();
	void Get_Move(int x1, int y1, int **Board);
	void Move(int x, int y, int **Board);
	int Jumping(int x, int y, int **Board);
	void Print(int **Board);
	bool Chek_Fishka(int x, int y, int **Board);
};

