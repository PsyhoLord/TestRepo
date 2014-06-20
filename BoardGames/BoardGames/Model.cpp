#include "Model.h"
#include <iostream>

using namespace std;


Model::Model()
{
}

Model::Model(int x1, int y1)
{
	// Задаем координаты точки
	p.x = y1;
	p.y = x1;

}

// Делаем шаг в сторону на 1 клетку(вверх, вправо, вниз, влево)
void Model::Move(int **Board)
{
	cout << "point = " << *(*(Board + p.x) + p.y) << endl;
	// Проверяем на корректность точку 
	if (Chek_Fishka(p, Board) == true)
	{
		// Вывод значения точки
		//cout << "point = " << *(*(Board + p.x) + p.y) << endl;
		// 
		if ((p.y >= 0) && (p.y < length))
		if ((p.x - 1 >= 0) && (p.x < length))
		{
			// Если значение куда мы хотим пойти пустое, то ходим
			if (*(*(Board + p.x - 1) + p.y) == 0)
			{
				// В место куда мы можем пойти записываем "3"
				*(*(Board + p.x - 1) + p.y) = 3;
				Counter++;
			}

			//Если, туда, куда мы хочем пойти, занято фишкой, то смотрим куда мы можем перепрыгнуть
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

		//Печатаем матрицу
		//Print(Board);
		if (Counter == 0)
		{
			cout << endl << "Moves not found." << endl;
		}
		else cout << endl << "Counter moves: " << Counter << endl;
	}
	//Если значения точки не коректны, то выводими сообщение 
	else cout << "Error..." << endl;
}

// Вычисляем куда можно прыгнуть
int Model::Jumping(pointer p, int **Board)
{
	pointer ptemp;
	// Прыжок вверх
	// Проверка на выход за грницы поля
	if ((p.y >= 0) && (p.y < length))
	if ((p.x - 2 >= 0) && (p.x < length))
	{
		// Проверка на место куда можно прыгнуть
		if (*(*(Board + p.x - 2) + p.y) == 0)
			// Проверка на значение в месте перед прыжком(там должна быть фишка)
		if ((*(*(Board + p.x - 1) + p.y) == 1) || (*(*(Board + p.x - 1) + p.y)) == 2)
		{
			// Заносим в поле куда мы можем пойти
			*(*(Board + p.x - 2) + p.y) = 3;
			Counter++;
			ptemp.x = p.x - 2;
			ptemp.y = p.y;
			// И ищем дальше куда мы можем прыгнуть
			Jumping(ptemp, Board);
		}
	}

	// Прыжок вправо
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

	//Прыжок вниз
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

	//Прыжок влево
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

// Печатаем матрицу

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

//Проверяем фишку на корректность 
bool Model::Chek_Fishka(pointer p, int ** Board)
{
	int F = *(*(Board + p.x) + p.y);

	// Проверка на значение(белая, черная) фишки
	if ((F == 1) || (F == 2) || (F == 4))
	{

		// Выход за рамки поля
		if ((p.x >= 0) && (p.y >= 0) && (p.x < length) && (p.y < length))
		{
			return true;
		}
	}
	else return false;
}