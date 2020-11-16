#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int size, const int Low, const int High, int i)
{
    a[i] = Low + rand() % (High - Low + 1);
    if (i < size - 1)
        Create(a, size, Low, High, i + 1);
}
void Print(int* a, const int size, int i)
{
    cout << setw(4) << a[i];
    if (i < size - 1)
        Print(a, size, i + 1);
    else
        cout << endl;
}
void Swap(int* a, const int size, int i)
{
    if (i < size / 2)
    {
        swap(a[i], a[size - i - 1]);
        Swap(a, size, ++i);
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int const n = 21;
    int Low = -10;
    int High = 20;
    int a[n];
    Create(a, n, Low, High, 0);
    Print(a, n, 0);
    Swap(a, n, 0);
    Print(a, n, 0);
    system("pause");
    return 0;
}