#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    int const SIZE = 8;

    int i = 0;

    int j = 0;

    int массив[SIZE]
    {
    29, 25, 3, 49, 9, 37, 21, 43
    };

    //поиск максимального элемента массива
    int макс_знач = массив[0];

    for (int k = 1; k < SIZE; k++)
    {
        if (массив[k] > макс_знач)
        {
            макс_знач = массив[k];
        }
    }
    
    //вспомогательный массив
    int* корзина = new int[макс_знач + 1]{};

    //распределим числа по карманам
    for (i = 0; i < SIZE; i++)
    {
        корзина[массив[i]]++;
    }      

    //сортировка чисел в карманах
    for (i = 0,j; i < (макс_знач + 1); i++)
    {
        for (i,j; корзина[i] > 0; (корзина[i])--)
        {
            массив[j++] = i;
        }
    }

    for (int z = 0; z < SIZE; z++)
    {
        cout << массив[z] << " ";
    }

    cout << "\n" << endl;

    delete[] корзина;

    return 0;
}