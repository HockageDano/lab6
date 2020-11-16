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
int Sum(int* a, const int size)
{
    int S = 0;
    for (int i = 0; i < size; i++)
            S += pow(a[i],2);
    return S;
}
int main()
{
    srand((unsigned)time(NULL));
    const int n = 60;
    int a[n];
    int Low = -14;
    int High = 7;
    Create(a, n, Low, High);
    Print(a, n);
    Sum(a, n);
    cout << "sum=" << Sum(a, n) << endl;
    Print(a, n);
    system("pause");
    return 0;
}