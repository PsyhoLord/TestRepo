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
	// Задаем координаты точки
	x = y1;
	y = x1;
	//Move(Board);

}

// Делаем шаг в сторону на 1 клетку(вверх, вправо, вниз, влево)
void Model::Move(int x, int y, int **Board)
{
	//cout << "point = " << *(*(Board + p.x) + p.y) << endl;
	// Проверяем на корректность точку 
	if (Chek_Fishka(x, y, Board) == true)
	{
		// Вывод значения точки
		//cout << "point = " << *(*(Board + p.x) + p.y) << endl;
		// 
		if ((y >= 0) && (y < length))
			if ((x - 1 >= 0) && (x < length))
			{
				// Если значение куда мы хотим пойти пустое, то ходим
				if (*(*(Board + x - 1) + y) == 0)
				{
					// В место куда мы можем пойти записываем "3"
					*(*(Board + x - 1) + y) = 3;
					Counter++;
				}

				//Если, туда, куда мы хочем пойти, занято фишкой, то смотрим куда мы можем перепрыгнуть
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

		//Печатаем матрицу
		//Print(Board);
		if (Counter == 0)
		{
			//cout << endl << "Moves not found." << endl;
		}
		else; //cout << endl << "Counter moves: " << Counter << endl;
	}
	//Если значения точки не коректны, то выводими сообщение 
	else;//cout << "Error..." << endl;
}

// Вычисляем куда можно прыгнуть
int Model::Jumping(int x, int y, int **Board)
{
	int xtemp, ytemp;
	// Прыжок вверх
	// Проверка на выход за грницы поля
	if ((y >= 0) && (y < length))
		if ((x - 2 >= 0) && (x < length))
		{
			// Проверка на место куда можно прыгнуть
			if (*(*(Board + x - 2) + y) == 0)
				// Проверка на значение в месте перед прыжком(там должна быть фишка)
				if ((*(*(Board + x - 1) + y) == 1) || (*(*(Board + x - 1) + y)) == 2)
				{
					// Заносим в поле куда мы можем пойти
					*(*(Board + x - 2) + y) = 3;
					Counter++;
					xtemp = x - 2;
					ytemp = y;
					// И ищем дальше куда мы можем прыгнуть
					Jumping(xtemp, ytemp, Board);
				}
		}

	// Прыжок вправо
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

	//Прыжок вниз
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

	//Прыжок влево
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




// Печатаем матрицу

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

//Проверяем фишку на корректность 
bool Model::Chek_Fishka(int x, int y, int ** Board)
{
//	int F = *(*(Board + p.x) + p.y);
//
//	// Проверка на значение(белая, черная) фишки
//	if ((F == 1) || (F == 2) || (F == 4))
//	{
//
//		// Выход за рамки поля
//		if ((p.x >= 0) && (p.y >= 0) && (p.x < length) && (p.y < length))
//		{
//			
	return true;
//		}
//	}
//	else return false;
}

