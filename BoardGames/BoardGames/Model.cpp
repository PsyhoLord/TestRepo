#include "Model.h"
#include <iostream>

using namespace std;


Model::Model()
{
}

Model::Model(int x1, int y1)
{
	// ������ ���������� �����
	p.x = y1;
	p.y = x1;

}

// ������ ��� � ������� �� 1 ������(�����, ������, ����, �����)
void Model::Move(int **Board)
{
	cout << "point = " << *(*(Board + p.x) + p.y) << endl;
	// ��������� �� ������������ ����� 
	if (Chek_Fishka(p, Board) == true)
	{
		// ����� �������� �����
		//cout << "point = " << *(*(Board + p.x) + p.y) << endl;
		// 
		if ((p.y >= 0) && (p.y < length))
		if ((p.x - 1 >= 0) && (p.x < length))
		{
			// ���� �������� ���� �� ����� ����� ������, �� �����
			if (*(*(Board + p.x - 1) + p.y) == 0)
			{
				// � ����� ���� �� ����� ����� ���������� "3"
				*(*(Board + p.x - 1) + p.y) = 3;
				Counter++;
			}

			//����, ����, ���� �� ����� �����, ������ ������, �� ������� ���� �� ����� ������������
			else Jumping(p, Board);
		}

		if ((p.y >= 0) && (p.y + 1 < length))
		if ((p.x >= 0) && (p.x < length))
		{
			if (*(*(Board + p.x) + p.y + 1) == 0)
			{
				*(*(Board + p.x) + p.y + 1) = 3;
				Counter++;

			}
			else Jumping(p, Board);
		}
		if ((p.y >= 0) && (p.y < length))
		if ((p.x >= 0) && (p.x + 1 < length))
		{
			if (*(*(Board + p.x + 1) + p.y) == 0)
			{
				*(*(Board + p.x + 1) + p.y) = 3;
				Counter++;
			}
			else Jumping(p, Board);
		}
		if ((p.y - 1 >= 0) && (p.y < length))
		if ((p.x >= 0) && (p.x < length))
		{
			if (*(*(Board + p.x) + p.y - 1) == 0)
			{
				*(*(Board + p.x) + p.y - 1) = 3;
				Counter++;
			}
			else Jumping(p, Board);
		}

		//�������� �������
		//Print(Board);
		if (Counter == 0)
		{
			cout << endl << "Moves not found." << endl;
		}
		else cout << endl << "Counter moves: " << Counter << endl;
	}
	//���� �������� ����� �� ��������, �� �������� ��������� 
	else cout << "Error..." << endl;
}

// ��������� ���� ����� ��������
int Model::Jumping(pointer p, int **Board)
{
	pointer ptemp;
	// ������ �����
	// �������� �� ����� �� ������ ����
	if ((p.y >= 0) && (p.y < length))
	if ((p.x - 2 >= 0) && (p.x < length))
	{
		// �������� �� ����� ���� ����� ��������
		if (*(*(Board + p.x - 2) + p.y) == 0)
			// �������� �� �������� � ����� ����� �������(��� ������ ���� �����)
		if ((*(*(Board + p.x - 1) + p.y) == 1) || (*(*(Board + p.x - 1) + p.y)) == 2)
		{
			// ������� � ���� ���� �� ����� �����
			*(*(Board + p.x - 2) + p.y) = 3;
			Counter++;
			ptemp.x = p.x - 2;
			ptemp.y = p.y;
			// � ���� ������ ���� �� ����� ��������
			Jumping(ptemp, Board);
		}
	}

	// ������ ������
	if ((p.y >= 0) && (p.y + 2 < length))
	if ((p.x >= 0) && (p.x < length))
	{
		if (*(*(Board + p.x) + p.y + 2) == 0)
		if ((*(*(Board + p.x) + p.y + 1) == 1) || (*(*(Board + p.x) + p.y + 1) == 2))
		{
			*(*(Board + p.x) + p.y + 2) = 3;
			Counter++;
			ptemp.x = p.x;
			ptemp.y = p.y + 2;
			Jumping(ptemp, Board);
		}
	}

	//������ ����
	if ((p.y >= 0) && (p.y < length))
	if ((p.x >= 0) && (p.x + 2 < length))
	{
		if (*(*(Board + p.x + 2) + p.y) == 0)
		if ((*(*(Board + p.x + 1) + p.y) == 1) || (*(*(Board + p.x + 1) + p.y) == 2))
		{
			*(*(Board + p.x + 2) + p.y) = 3;
			Counter++;
			ptemp.x = p.x + 2;
			ptemp.y = p.y;
			Jumping(ptemp, Board);
		}
	}

	//������ �����
	if ((p.y - 2 >= 0) && (p.y < length))
	if ((p.x >= 0) && (p.x < length))
	{
		if (*(*(Board + p.x) + p.y - 2) == 0)
		if ((*(*(Board + p.x) + p.y - 1) == 1) || (*(*(Board + p.x) + p.y - 1) == 2))
		{
			*(*(Board + p.x) + p.y - 2) = 3;
			Counter++;
			ptemp.x = p.x;
			ptemp.y = p.y - 2;
			Jumping(ptemp, Board);
		}
	}

	return 0;
}


Model::~Model()
{

}

// �������� �������

void Model::Print(int **Board)
{
	cout << endl;
	for (int i = 0; i < length; i++)
	{
		cout << endl;
		for (int j = 0; j < length; j++)
		{
			cout << *(*(Board + i) + j) << " ";
		}
	}
	cout << endl;
}

//��������� ����� �� ������������ 
bool Model::Chek_Fishka(pointer p, int ** Board)
{
	int F = *(*(Board + p.x) + p.y);

	// �������� �� ��������(�����, ������) �����
	if ((F == 1) || (F == 2) || (F == 4))
	{

		// ����� �� ����� ����
		if ((p.x >= 0) && (p.y >= 0) && (p.x < length) && (p.y < length))
		{
			return true;
		}
	}
	else return false;
}