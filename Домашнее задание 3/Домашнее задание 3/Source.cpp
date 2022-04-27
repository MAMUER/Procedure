#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//Заём
/*
int main()
 {
    double p , s, n, r,  S, m;
    
    setlocale (LC_ALL, "rus");

    cout << "Введите сумму заёма ";
    cin >>S;

 cout <<"\n";

    cout << "Введите на какое время взят кредит (в годах) ";
    cin >>n;

 cout <<"\n";

    cout << "Введите под какой процент был взят кредит (%) ";
    cin >> p;

    r = p / 100;

    if (p <= 0 or S <= 0 or  n <= 0)
    {
        cout << "\nОшибка\n";
    }
    else
    {
        m = (S * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1));

        cout << "\nМесячные выплаты по кредиту = "<< m<<"\n";
    }
    return 0;
 }
*/
 
//Ссуда
/*
int main()
 {
     float n, m, S;
     float p, m1 = 0, r;
    
    setlocale(LC_ALL, "rus");

    cout << "Введите сумму заёма ";
    cin >> S;

    cout << "\nВведите на какое время взят кредит (в годах) ";
    cin >> n;

    cout << "\nВведите размер ежемесячных выплат по кредиту ";
    cin >> m;

    if (m <= 0 or S <= 0 or n <= 0)
    {
        cout << "\nОшибка\n";
    }

    else  if (n * 12 * m == S)
    {
        cout << "\nПроцентная ставка = 0%\n";
    }

    else
    {
        for (p = 0.01; m1 < m; p += 0.01)
        {
            r = p / 100;

            m1 = (S * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1));           

            if ((m - m1) <= 0.01)
            {
                int c = p;

                p -= c;
                p *= 10;
                p *= 10;

                int d = p;

                float e = d;

                if (d == 0)
                {
                    cout << "\nПроцентная ставка = " << c << "%\n";
                }
                
                else if (c == 0)                
                {
                    
                    cout << "\nПроцентная ставка = " << (c + e/100) << "%\n";
                }

                else
                {                   
                    cout << "\nПроцентная ставка = " << (c + e/100) << "%\n";
                }
                break;
            }
        }
    }
    return 0;
 }
 */
 
//Копирование файла
/*
int main()
{
    setlocale(LC_ALL, "rus");

    ifstream fin;
    fin.open("text.txt");

    if (!fin.is_open())
    {
        cout << "Ошибка\n";
    }
    else
    {
        char mass;
        while (fin.get(mass))
        {
            cout << mass;
        }
    }

    fin.close();

    cout << endl;

    return 0;
}
 */

//Фильтр
/*
int main()
{    
    setlocale(LC_ALL, "rus");
        
    string path = "filtr.txt";

    string cifri = "0123456789";

    ofstream fout;
    fout.open(path);

    if (!fout.is_open())
    {
        cout << "Ошибка открытия файла!";
    }

    else
    {
        fout << "193827цазшцукщпшоseigjopwiehgoweg";
    }

    fout.close();

    ifstream fin;
    fin.open(path);

    if (!fin.is_open())
    {
        cout << "Ошибка открытия файла!";
    }

    else
    {
        char буфер;

        while (fin.get(буфер))
        {
            if (fin.eof())
            {
                fin.close();
            }

            for (int i = 0; i <= 9;)
            {
                if (буфер == cifri[i])
                {
                    cout << буфер << " ";
                    break;
                }

                else
                {
                    i++;
                }
            }            
        }
    }
    fin.close();
    return 0;
}
*/

//Сортировка букв
/*
int main()
{
    setlocale(LC_ALL, "rus");

    string path("sort.txt");
        
    int const SIZE = 30;

    string ответ;

    ofstream fout;
    fout.open(path);

    if (!fout.is_open())
    {
        cout << "Ошибка\n";
    }
    else
    {
        fout << "jъfiNHалсUbdYGpлЯYDZctФЛСGDYop";
    }

    fout.close();

    ifstream fin;
    fin.open(path);

    if (!fin.is_open())
    {
        cout << "Ошибка\n";
    }
    else
    { 
        int i = 0;

        fin >> ответ;
    }

    fin.close();    

    //Начало сортировки чисел

    char buf;    
            
    for (int j = 0; j < SIZE; )
    {
        for (int i = (j + 1);;)
        {
            if (i == SIZE)
            {
                j++;
                break;
            }

            if ((int)ответ[j] > (int)ответ[i])
            {
                buf = ответ[j];
                ответ[j] = ответ[i];
                ответ[i] = buf;

                break;
            }

            if ((int)ответ[j] <= (int)ответ[i])
            {
                i++;                 
            }
        }
    }

    //Конец сортировки чисел     

    cout << ответ << endl;

    return 0;
}
*/