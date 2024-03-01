#include <iostream>
#include <iomanip>
using namespace std;

const int rows = 9;
const int columns = 16;

void runMouse(int, int, int, int, int[][16]);

int main()
{

	int mouseshape = 99;
	int cheeseshape = 55;
	int wallshape = 22;
	int boundary = 11;

	int maze[rows][columns] = {
		{boundary, boundary, boundary, boundary, boundary, boundary, boundary, boundary, boundary, boundary, boundary, boundary, boundary, boundary, boundary, boundary},
		{boundary, 0, 0, 0, wallshape, 0, 0, 0, wallshape, 0, wallshape, 0, 0, 0, 0, boundary},
		{boundary, 0, wallshape, 0, wallshape, 0, wallshape, 0, wallshape, 0, wallshape, 0, wallshape, wallshape, wallshape, boundary},
		{boundary, wallshape, wallshape, 0, wallshape, 0, wallshape, 0, wallshape, 0, wallshape, 0, wallshape, wallshape, wallshape, boundary},
		{boundary, 0, 0, 0, 0, 0, wallshape, 0, 0, 0, wallshape, 0, 0, 0, 0, boundary},
		{boundary, 0, wallshape, wallshape, wallshape, 0, wallshape, 0, wallshape, 0, wallshape, 0, wallshape, wallshape, 0, boundary},
		{boundary, 0, wallshape, wallshape, wallshape, 0, wallshape, 0, wallshape, 0, wallshape, 0, wallshape, wallshape, 0, boundary},
		{boundary, cheeseshape, wallshape, 0, 0, 0, 0, 0, wallshape, 0, 0, 0, wallshape, wallshape, mouseshape, boundary},
		{boundary, boundary, boundary, boundary, boundary, boundary, boundary, boundary, boundary, boundary, boundary, boundary, boundary, boundary, boundary, boundary},
	};

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout << setw(2) << setfill('0') << maze[i][j] << " ";
		}
		cout << endl;
	}

	runMouse(mouseshape, cheeseshape, wallshape, boundary, maze);

	return 0;
}

void runMouse(int mouseshape, int cheeseshape, int wallshape, int boundary, int maze[][16])
{

	int t1 = 0, t2 = 0, i = 7, j = 14, a = 0, b = 0;
	char x;
	while (maze[a][b] != maze[7][1])
	{
		cout << "\nUse WASD to move the mouse : ";
		cin >> x;
		system("cls");

		switch (x)
		{
		case 'w':
		{
			--t1;
			a = i + t1, b = j + t2;
			if (maze[a][b] == 0 || maze[a][b] == cheeseshape || maze[a][b] == 01)
			{
				maze[a][b] = mouseshape;
				maze[a + 1][b] = 01;
				for (int k = 0; k < rows; k++)
				{
					for (int l = 0; l < columns; l++)
					{
						cout << setw(2) << setfill('0') << maze[k][l] << " ";
					}
					cout << endl;
				}
				break;
			}
			else
			{
				++t1;
				a = i + t1, b = j + t2;
				cout << "\nOops, cannot move there.\n\n";
				for (int k = 0; k < rows; k++)
				{
					for (int l = 0; l < columns; l++)
					{
						cout << setw(2) << setfill('0') << maze[k][l] << " ";
					}
					cout << endl;
				}
				break;
			}
		}
		case 's':
		{
			++t1;
			a = i + t1, b = j + t2;
			if (maze[a][b] == 0 || maze[a][b] == cheeseshape || maze[a][b] == 01)
			{
				maze[a][b] = mouseshape;
				maze[a - 1][b] = 01;
				for (int k = 0; k < rows; k++)
				{
					for (int l = 0; l < columns; l++)
					{
						cout << setw(2) << setfill('0') << maze[k][l] << " ";
					}
					cout << endl;
				}
				break;
			}
			else
			{
				--t1;
				a = i + t1, b = j + t2;
				cout << "\nOops, cannot move there.\n\n";
				for (int k = 0; k < rows; k++)
				{
					for (int l = 0; l < columns; l++)
					{
						cout << setw(2) << setfill('0') << maze[k][l] << " ";
					}
					cout << endl;
				}
				break;
			}
		}
		case 'a':
		{
			--t2;
			a = i + t1, b = j + t2;
			if (maze[a][b] == 0 || maze[a][b] == cheeseshape || maze[a][b] == 01)
			{
				maze[a][b] = mouseshape;
				maze[a][b + 1] = 01;
				for (int k = 0; k < rows; k++)
				{
					for (int l = 0; l < columns; l++)
					{
						cout << setw(2) << setfill('0') << maze[k][l] << " ";
					}
					cout << endl;
				}
				break;
			}
			else
			{
				++t2;
				a = i + t1, b = j + t2;
				cout << "\nOops, cannot move there.\n\n";
				for (int k = 0; k < rows; k++)
				{
					for (int l = 0; l < columns; l++)
					{
						cout << setw(2) << setfill('0') << maze[k][l] << " ";
					}
					cout << endl;
				}
				break;
			}
		}
		case 'd':
		{
			++t2;
			int a = i + t1, b = j + t2;
			if (maze[a][b] == 0 || maze[a][b] == cheeseshape || maze[a][b] == 01)
			{
				maze[a][b] = mouseshape;
				maze[a][b - 1] = 01;
				for (int k = 0; k < rows; k++)
				{
					for (int l = 0; l < columns; l++)
					{
						cout << setw(2) << setfill('0') << maze[k][l] << " ";
					}
					cout << endl;
				}
				break;
			}
			else
			{
				--t2;
				int a = i + t1, b = j + t2;
				cout << "\nOops, cannot move there.\n\n";
				for (int k = 0; k < rows; k++)
				{
					for (int l = 0; l < columns; l++)
					{
						cout << setw(2) << setfill('0') << maze[k][l] << " ";
					}
					cout << endl;
				}
				break;
			}
		}
		}
	}
	cout << "Congratulations! You won.";
}
