#include <iostream>
#include <iomanip>

using namespace std;

void create(int* arr, int SIZE, double MIN, double MAX)
{
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = (MAX - MIN) * rand() / RAND_MAX + MIN;
    }
}

void print(int* arr, int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }
}

int Dob(int* a, const int size)
{
    int S = 0;
    for (int i = 0; i < size; i++)
        if (i % 2 == 0)
            S *= a[i];
    return S;
}

int Sum(int* a, const int size)
{
    int sum = 0;
    int firstZero = -1;
    int lastZero = 0;
    for (int k = 0; k < size; k++)
    {
        if (a[k] == 0 && firstZero != -1)
        {
            lastZero = k;
        }
        else if(a[k] == 0 && firstZero == -1)firstZero = k;
    }
    cout << " first and last zeros: " << firstZero << " " << lastZero << " " << endl;
    for (int i = firstZero; i < lastZero; i++)
            sum += a[i];
    return sum;
}

void sort(int* arr, const int SIZE)
{
    for (int i = 0; i < SIZE - 1; i++)
    {
        int min = arr[i];
        int imin = i;
        for (int j = i + 1; j < SIZE; j++)
            if (min < arr[j])
            {
                min = arr[j];
                imin = j;
            }
        arr[imin] = arr[i];
        arr[i] = min;
    }
}
int main()
{
    setlocale(LC_ALL,"ru");
    srand((unsigned)time(NULL));

    double MIN, MAX;
    int SIZE;

    cout << "Введіть розмір масиву (SIZE): "; cin >> SIZE;
    cout << "Введіть діапазон елементів масиву (MIN): "; cin >> MIN;
    cout << "Введіть діапазон елементів масиву (MAX): "; cin >> MAX;
    cout << endl;

    int* arr = new int[SIZE];
    create(arr, SIZE, MIN, MAX);

    print(arr, SIZE);
    cout << endl;
    cout << "Добуток елементів масиву з парними номерами: " << Dob(arr, SIZE) << endl;
    cout << "Суму елементів масиву, розташованих між першим і останнім нульовими елементами " << Sum(arr, SIZE) << endl;
    sort(arr, SIZE);
    cout << endl;
    print(arr, SIZE);

    delete[] arr;

    return 0;
}