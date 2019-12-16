#include <iostream>
#include <conio.h>

#define SPASI " "

using namespace std;

void CetakGaris();

int n, i, j, k;

int main()
{

	cout << "------------------\nSEGITIGA SIKU-SIKU\n------------------\n";
	cout << "Masukkan Panjang Pola : "; cin >> n;
	
	CetakGaris();
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	
	CetakGaris();
	for (i = 1; i <= n; i++)
	{
		for (j = n; j >= i; j--)
		{
			cout << "*";
		}
		cout << endl;
	}
	
	CetakGaris();
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j < i; j++)
		{
			cout << SPASI;
		}

		for (k = n; k >= i; k--)
		{
			cout << "*";
		}
		cout << endl;
	}

	CetakGaris();
	for (i = 1; i <= n; i++)
	{
		for (j = n; j > i; j--)
		{
			cout << SPASI;
		}

		for (k = 1; k <= i; k++)
		{
			cout << "*";
		}
		cout << endl;
	}


	_getch();
	return 0;
}


void CetakGaris() 
{
	for (int i = 0; i < n; i++)
	{
		cout << "-";
	}
	cout << endl;
}