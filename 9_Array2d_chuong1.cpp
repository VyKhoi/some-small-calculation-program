#include<iostream>
using namespace std;
#define ROW 10
#define COL 10
void nhap(int a[ROW][COL], int& r);
void xuat(int a[ROW][COL], int& r);
int main()
{
    int a[ROW][COL];
    int r;
    nhap(a, r);
    xuat(a, r);
    system("pause");
    return 0;

}
void nhap(int a[ROW][COL], int& r)
{
    int dem = 1;
    bool nhap;
    do {
        nhap = true;
        system("cls");
        cout << "nhap ma tran vuong cap n \n";
        cin >> r;
        if (r > ROW )
        {
            cout << "nhap sai nhap lai!! " << endl;
            nhap = false;
        }
    } while (nhap == false);
	for (int j = 0; j < r; j++)
	{
        
            if (j % 2 == 0)
            {
                for (int i = 0; i < r; i++)
                {
                    a[i][j] = dem++;
                }
            }
            else
            {
                for (int i = r - 1; i >= 0; i--)
                {
                    a[i][j] = dem++;
                }
            }   
	}
}
void xuat(int a[ROW][COL], int& r)
{
    
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}