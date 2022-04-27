#include <iostream>
using namespace std;

//Задача 1 СПИННЕРЫ
/*
int main()
{
    setlocale(LC_ALL, "rus");

    int A, B, C;

    int N = 0;

    cout << "Введите стоимость основания спиннера\n" << endl;
    cin >> A;

    cout << "\nВведите стоимость одной лопасти\n" << endl;
    cin >> B;

    cout << "\nВведите максимальную стоимость спиннера\n" << endl;
    cin >> C;

    if (A <= 0 or B <= 0 or C <= 0 or A > 2 * pow(10, 9) or B > 2 * pow(10, 9) or C > 2 * pow(10, 9) or A > C)
    {
        cout << "\nОшибка\n";
    }

    else
    {
        N = (C - A) / B;
        cout << "\nМаксимальное число лопастей = " << N << endl;
    }

    return 0;
}
*/


//Задача 2 СНОВА СПИННЕРЫ
/*
int main()
{
    setlocale(LC_ALL, "rus");

    int три_лопасти = 0, четыре_лопасти = 0;

    int M;

    cout << "Введите количество лопастей\n" << endl;
    cin >> M;

    if (M <= 0 or M > 2 * pow(10, 9))
    {
        cout << "\nОшибка\n";
    }

    else
    {
        if (M < 3)
        {
            cout << "\nСпиннеров с тремя лопостями = 0" << endl;
            cout << "\nСпиннеров с четырьмя лопостями = 0" << endl;
        }

        for (int i = M / 3; i >= 0; i--)
        {
            int j = 0;

            j = M - (i * 3);

            if (j % 4 == 0)
            {
                три_лопасти = i;
                четыре_лопасти = j / 4;
                cout << "\nСпиннеров с тремя лопостями = " << три_лопасти << endl;
                cout << "\nСпиннеров с четырьмя лопостями = " << четыре_лопасти << endl;
                cout << "===================================";
            }            
        }        
    }

    return 0;
}
*/