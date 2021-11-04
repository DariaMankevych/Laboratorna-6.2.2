// Laboratorna 6.2(2).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <conio.h>
#include <cstdlib>
#include <ctime>
using namespace std;
void Create(int* a, const int n, int Low, int High, int i)
{
	a[i] = Low + rand() % (High - Low + 1);
	if (i < n - 1)
		Create(a, n, Low, High, i + 1);
}
int Kil(int* a, const int n, int i, int m, int S)
{
	if (i % 2 == 0) {
		m++;
		S += a[i];
	}
	if (i < n - 1)
		Kil(a, n, i + 1, m, S);
	else return S;
}
void Print(int* a, const int n, int i) {
	cout << setw(4) << a[i];
	if (i < n - 1)
		Print(a, n, i + 1);
	else
		cout << endl;

}
int main() {
	srand((unsigned)time(NULL));

	const int n = 10;
	int a[n];
	int S;
	int Low = 15;
	int High = 85;

	Create(a, n, Low, High, 0);
	S = Kil(a, n, 0, 0, 0);
	Print(a, n, 0);
	cout << " Вивід" << 2. * S / n << endl;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
