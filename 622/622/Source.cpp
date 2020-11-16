#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        a[i] = Low + rand() % (High - Low + 1);
}
void Print(int* a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << a[i];
    cout << endl;
}
void Swap(int* a, const int size)
{
    for (int i = 0; i < size / 2; i++)
        swap(a[i], a[size - i - 1]);
}
int main()
{
    srand((unsigned)time(NULL));
    int const n = 21;
    int Low = -10;
    int High = 20;
    int a[n];
    Create(a, n, Low, High);
    Print(a, n);
    Swap(a, n);
    Print(a, n);
    system("pause");
    return 0;
}