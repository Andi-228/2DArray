#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int** forMatrix(int n, int m);
void printMatrix(int** matrix, int n, int m);
void fillMatrix(int** matrix, int n, int m);
void deleteMatrix(int** matrix, int n, int m);
void changeRowColoumn(int** matrix, int n, int m, int k); //Task 11


int main() {
	srand(time(NULL));
	int size1 = 5;
	int index = 2;
	int** matrix1 = forMatrix(size1, size1);
	fillMatrix(matrix1, size1, size1);
	printMatrix(matrix1, size1, size1);
	changeRowColoumn(matrix1, size1, size1, index);
	cout << "Matrix after change" << index + 1 << "row and coloumn" << endl;
	printMatrix(matrix1, size1, size1);
	deleteMatrix(matrix1, size1, size1);

	system("pause");
	return 0;
}

int** forMatrix(int n, int m)
{
	int** arr = new int* [n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[m];
	}
	return arr;
}

void printMatrix(int** matrix, int n, int m)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(7) << matrix[i][j];
		}
		cout << endl;
	}
}

void fillMatrix(int** matrix, int n, int m)
{
	for (int i = 0; i < n; i++) {
	for (int j = 0; j < m; j++) {
		matrix[i][j] = rand() % 101;
	}
}
}

void deleteMatrix(int** matrix, int n, int m)
{
	for (int i = 0; i < n; i++) {
		delete matrix[i]; // delete[] matrix[i]
	}
	delete matrix;
}

void changeRowColoumn(int** matrix, int n, int m, int k)
{
	for (int i = 0; i < n; i++) {
		int tmp = matrix[k][i];
		matrix[k][i] = matrix[i][k];
		matrix[i][k] = tmp;
	}

	/*for (int i = 0; i < n; i++);
	int tmp = matrix[k][i];
	matrix[k][i] = matrix[i][k];
	matrix[i][k] = tmp;*/
}
