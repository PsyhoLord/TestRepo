#include "Model.h"
//#include "stdafx.h"
#include <iostream>
using namespace std;

Model::Model()
{
	length = 8;
	//pointer p;
	Counter = 0;
}
//	

int	Table[8][8] =
{
	{ 2, 2, 2, 2, 0, 0, 0, 0 },
	{ 2, 2, 2, 2, 0, 0, 0, 0 },
	{ 2, 2, 2, 2, 0, 0, 0, 0 },
	{ 2, 2, 2, 2, 0, 0, 0, 0 },

	{ 0, 0, 0, 0, 1, 1, 1, 1 },
	{ 0, 0, 0, 0, 1, 1, 1, 1 },
	{ 0, 0, 0, 0, 1, 1, 1, 1 },
	{ 0, 0, 0, 0, 1, 1, 1, 1 }
};

void Model::Get_Move()
{
}

void Model::Get_Move(int x1, int y1, int **Board)
{
	// ������ ���������� �����
	x = y1;
	y = x1;
	//Move(Board);

}

// ������ ��� � ������� �� 1 ������(�����, ������, ����, �����)
void Model::Move(int x, int y, int **Board)
{
	//cout << "point = " << *(*(Board + p.x) + p.y) << endl;
	// ��������� �� ������������ ����� 
	if (Chek_Fishka(x, y, Board) == true)
	{
		// ����� �������� �����
		//cout << "point = " << *(*(Board + p.x) + p.y) << endl;
		// 
		if ((y >= 0) && (y < length))
			if ((x - 1 >= 0) && (x < length))
			{
				// ���� �������� ���� �� ����� ����� ������, �� �����
				if (*(*(Board + x - 1) + y) == 0)
				{
					// � ����� ���� �� ����� ����� ���������� "3"
					*(*(Board + x - 1) + y) = 3;
					Counter++;
				}

				//����, ����, ���� �� ����� �����, ������ ������, �� ������� ���� �� ����� ������������
				else Jumping(x, y, Board);
			}

		if ((y >= 0) && (y + 1 < length))
			if ((x >= 0) && (x < length))
			{
				if (*(*(Board + x) + y + 1) == 0)
				{
					*(*(Board + x) + y + 1) = 3;
					Counter++;

				}
				else Jumping(x, y, Board);
			}
		if ((y >= 0) && (y < length))
			if ((x >= 0) && (x + 1 < length))
			{
				if (*(*(Board + x + 1) + y) == 0)
				{
					*(*(Board + x + 1) + y) = 3;
					Counter++;
				}
				else Jumping(x, y, Board);
			}
		if ((y - 1 >= 0) && (y < length))
			if ((x >= 0) && (x < length))
			{
				if (*(*(Board + x) + y - 1) == 0)
				{
					*(*(Board + x) + y - 1) = 3;
					Counter++;
				}
				else Jumping(x, y, Board);
			}

		//�������� �������
		//Print(Board);
		if (Counter == 0)
		{
			//cout << endl << "Moves not found." << endl;
		}
		else; //cout << endl << "Counter moves: " << Counter << endl;
	}
	//���� �������� ����� �� ��������, �� �������� ��������� 
	else;//cout << "Error..." << endl;
}

// ��������� ���� ����� ��������
int Model::Jumping(int x, int y, int **Board)
{
	int xtemp, ytemp;
	// ������ �����
	// �������� �� ����� �� ������ ����
	if ((y >= 0) && (y < length))
		if ((x - 2 >= 0) && (x < length))
		{
			// �������� �� ����� ���� ����� ��������
			if (*(*(Board + x - 2) + y) == 0)
				// �������� �� �������� � ����� ����� �������(��� ������ ���� �����)
				if ((*(*(Board + x - 1) + y) == 1) || (*(*(Board + x - 1) + y)) == 2)
				{
					// ������� � ���� ���� �� ����� �����
					*(*(Board + x - 2) + y) = 3;
					Counter++;
					xtemp = x - 2;
					ytemp = y;
					// � ���� ������ ���� �� ����� ��������
					Jumping(xtemp, ytemp, Board);
				}
		}

	// ������ ������
	if ((y >= 0) && (y + 2 < length))
		if ((x >= 0) && (x < length))
		{
			if (*(*(Board + x) + y + 2) == 0)
				if ((*(*(Board + x) + y + 1) == 1) || (*(*(Board + x) + y + 1) == 2))
				{
					*(*(Board + x) + y + 2) = 3;
					Counter++;
					xtemp = x;
					ytemp = y + 2;
					Jumping(x, y, Board);
				}
		}

	//������ ����
	if ((y >= 0) && (y < length))
		if ((x >= 0) && (x + 2 < length))
		{
			if (*(*(Board + x + 2) + y) == 0)
				if ((*(*(Board + x + 1) + y) == 1) || (*(*(Board + x + 1) + y) == 2))
				{
					*(*(Board + x + 2) + y) = 3;
					Counter++;
					xtemp = x + 2;
					ytemp = y;
					Jumping(xtemp, ytemp, Board);
				}
		}

	//������ �����
	if ((y - 2 >= 0) && (y < length))
		if ((x >= 0) && (x < length))
		{
			if (*(*(Board + x) + y - 2) == 0)
				if ((*(*(Board + x) + y - 1) == 1) || (*(*(Board + x) + y - 1) == 2))
				{
					*(*(Board + x) + y - 2) = 3;
					Counter++;
					xtemp = x;
					ytemp = y - 2;
					Jumping(xtemp, ytemp, Board);
				}
		}

	return 0;
}




// �������� �������

void Model::Print(int **Board)
{
	//cout << endl;
	for (int i = 0; i < length; i++)
	{
		cout << endl;
		for (int j = 0; j < length; j++)
		{
			cout << *(*(Board + i) + j) << " ";
		}
	}
	//cout << endl;

}

//��������� ����� �� ������������ 
bool Model::Chek_Fishka(int x, int y, int ** Board)
{
//	int F = *(*(Board + p.x) + p.y);
//
//	// �������� �� ��������(�����, ������) �����
//	if ((F == 1) || (F == 2) || (F == 4))
//	{
//
//		// ����� �� ����� ����
//		if ((p.x >= 0) && (p.y >= 0) && (p.x < length) && (p.y < length))
//		{
//			
	return true;
//		}
//	}
//	else return false;
}

