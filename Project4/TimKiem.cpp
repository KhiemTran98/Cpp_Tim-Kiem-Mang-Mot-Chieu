#include <iostream>
#include <conio.h>
using namespace std;

int LinearSearch1(int a[], int n, int x) //Tuyen tinh
{
	int i = 0;
	while ((i < n) && (a[i] != x)) i++;
	if (i == n)	return -1;
	return i;
}

int LinearSearch2(int a[], int n, int x) //Linh canh
{
	int i = 0;
	a[n] = x;
	while (a[i] != x) i++;
	if (i == n)	return -1;
	return i;
}

int LinearSearch(int a[], int x)
{
	int i = 0;
	a[7] = x;
	while ((a[i] != x)) i++;
	if (i == 7)	return -1;
	return i + 1;
}

int BinarySearch(int a[], int x)
{
	int l = 0, r = 6, m;
	do {
		m = (l + r) / 2;
		cout << endl;
		if (x == a[m])
		{
			cout << "l=" << l << " r=" << r << " m=" << m;
			return m + 1;
		}
		else
			if (x < a[m])
			{
				cout << "l=" << l << " r=" << r << " m=" << m;
				r = m - 1;
			}
			else
			{
				cout << "l=" << l << " r=" << r << " m=" << m;
				l = m + 1;
			}
	} while (l <= r);
	return -1;
}

void main()
{
	int x, a[] = { 1,2,3,5,6,7,9 };
	cout << "Mang: 1,2,3,5,6,7,9";
	do {
		cout << "\n\nNhap so can tim: ";
		cin >> x;
		cout << "\nTIM KIEM TUYEN TINH";
		int ls = LinearSearch(a, x);
		if (ls == -1) cout << "\nKhong tim thay";
		else cout << "\nTim thay o vi tri " << ls;
		cout << "\n\nTIM KIEM NHI PHAN";
		int bs = BinarySearch(a, x);
		if (bs == -1) cout << "\nKhong tim thay";
		else cout << "\nTim thay o vi tri " << bs;
		cout << "\n\nNhan Esc de dung, phim khac de tim tiep";
	} while (_getch() != 27);
}