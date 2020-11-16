//6.3 рекурсивний спосіб
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
        
            return pow(a[i],2) + Sum(a, size, i + 1);
    }
    else
        return 0;
}

int main()
{
    srand((unsigned)time(NULL));
    const int n = 60;
    int a[n];
    int Low = -14;
    int High = 7;

    Create(a, n, Low, High, 0);
    Print(a, n, 0);
    cout << "sum" << Sum(a, n, 0) << endl;
    Print(a, n, 0);
    return 0;
}