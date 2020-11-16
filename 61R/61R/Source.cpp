//6.1 рекурсивний спосіб
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
int Sum(int* a, const int size, int i)
{
    if (i < size)
    {
        if (a[i] > 0 && (a[i] % 4 != 0))
            return a[i] + Sum(a, size, i + 1);
        else
            return Sum(a, size, i + 1);
    }
    else
        return 0;
}
void Null(int* a, const int size, int i)
{
    if (a[i]>0 && (a[i] % 4 != 0))
        a[i] = 0;
    if (i < size - 1)
        Null(a, size, i + 1);
}
int main()
{
    srand((unsigned)time(NULL));
    const int n = 20;
    int a[n];
    int Low = -14;
    int High = 7;

    Create(a, n, Low, High, 0);
    Print(a, n, 0);
    cout << "sum" << Sum(a, n, 0) << endl;
    Null(a, n, 0);
    Print(a, n, 0);
    return 0;
}