#include<iostream>
using namespace std;
void sum(int** a, int** b, int** c, int d1, int c1, int d2, int c2);
void xuat2(int** array, int r, int c);
void nhap2(int** array, int r, int c);
void tich(int** a, int** b, int** c, int d1, int c2);
int main()
{
	srand(time(0));
	int d1, c1, d2, c2;
	int** a, ** b, ** c;

	cout << "nhap ";
	cin >> d1 >> c1 >> d2 >> c2;

	// nhap ma tran
	a = new int* [d1];
	for (int i = 0; i < d1; i++)
	{
		a[i] = new int[c1];
	}
	b = new int* [d2];
	for (int i = 0; i < d2; i++)
	{
		b[i] = new int[c2];
	}
	c = new int* [d1];
	for (int i = 0; i < d1; i++)
	{
		c[i] = new int[c1];
	}
	nhap2(a, d1, c1);
	nhap2(b, d2, c2);
	xuat2(a, d1, c1);
	cout << endl << "mang b " << endl;
	xuat2(b, d2, c2);
	cout << "mang c chua tinh " << endl;
	xuat2(c, d1, c1);
	cout << endl;
	tich(a, b, c, d1, c2);
	xuat2(c, d1, c1);
	for (int i = 0; i < d1; i++)
	{
		delete[] a[i];
		delete[] b[i];
		delete[] c[i];
	}
	delete[]a;
	delete[]b;
	delete[]c;
	a = b = c = NULL;
}
void xuat2(int** array, int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << array[i][j] << "\t";
		}
		cout << endl;
	}

}
void nhap2(int** array, int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			array[i][j] = rand() % 10;
		}
		cout << endl;
	}

}
void sum(int** a, int** b, int** c, int d1, int c1, int d2, int c2)
{
	for (int i = 0; i < d1; i++)
	{
		for (int j = 0; j < c1; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
}
void tich(int** a, int** b, int** c, int d1, int c2)
{
	for (int i = 0; i < d1; i++)
	{
		for (int j = 0; j < c2; j++)
		{
			c[i][j] = 0;
			for (int k = 0; k < d1; k++)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
}