#include <iostream>
using namespace std;
#define row 10
#define col 10
int main()
{
	int arr[row][col];
	int maxr, maxc, minr=0, minc=0,n;
	int value = 1;
	do {
		cout << "nhap ma tran vuong cap: \n";
		cin >> n;
		if (n<2 || n>col)
			cout << "nhap lai \n";
	}while(n<2 || n>col);
	maxr = maxc = n - 1;
	while (value <= n * n)
	{
		for (int i = minc; i <= maxc; i++)
		{
			arr[minr][i] = value++;
		}
		minr++;
		for (int i = minr; i <= maxr; i++)
		{
			arr[i][maxc] = value++;
		}
		maxc--;
		for (int i = maxc; i >= minc; i--)
		{
			arr[maxr][i] = value++;
		}
		maxr--;
		for (int i = maxr; i >= minr; i--)
		{
			arr[i][minc] = value++;
		}
		minc++;
	}
	//xuat
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	system("pause");
}