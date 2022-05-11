#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/*
int main()
 {
    double p , s, n, r,  S, m;
    
    setlocale (LC_ALL, "rus");
    
    cin >>S;

 cout <<"\n";

   
    cin >>n;

 cout <<"\n";

    
    cin >> p;

    r = p / 100;

    if (p <= 0 or S <= 0 or  n <= 0)
    {
        cout << "\nОшибка\n";
    }
    else
    {
        m = (S * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1));

        cout << "\n = "<< m<<"\n";
    }
    return 0;
 }
*/
 
/*
int main()
 {
     float n, m, S;
     float p, m1 = 0, r;
    
    setlocale(LC_ALL, "rus");

    
    cin >> S;

   
    cin >> n;

    
    cin >> m;

    if (m <= 0 or S <= 0 or n <= 0)
    {
        cout << "\nОшибка\n";
    }

    else  if (n * 12 * m == S)
    {
        
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
                    cout << "\n = " << c << "%\n";
                }
                
                else if (c == 0)                
                {
                    
                    cout << "\n = " << (c + e/100) << "%\n";
                }

                else
                {                   
                    cout << "\n = " << (c + e/100) << "%\n";
                }
                break;
            }
        }
    }
    return 0;
 }
 */

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
        cout << "Ошибка";
    }

    else
    {
        fout << "193827öàçøöóêùïøîseigjopwiehgoweg";
    }

    fout.close();

    ifstream fin;
    fin.open(path);

    if (!fin.is_open())
    {
        cout << "Ошибка";
    }

    else
    {
        char g;

        while (fin.get(g))
        {
            if (fin.eof())
            {
                fin.close();
            }

            for (int i = 0; i <= 9;)
            {
                if (g == cifri[i])
                {
                    cout << g << " ";
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

/*
int main()
{
    setlocale(LC_ALL, "rus");

    string path("sort.txt");
        
    int const SIZE = 30;

    string g;

    ofstream fout;
    fout.open(path);

    if (!fout.is_open())
    {
        cout << "Ошибка\n";
    }
    else
    {
        fout << "dfgdgg";
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

        fin >> g;
    }

    fin.close();    

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

            if ((int)g[j] > (int)g[i])
            {
                buf = g[j];
                g[j] = g[i];
                g[i] = buf;

                break;
            }

            if ((int)g[j] <= (int)g[i])
            {
                i++;                 
            }
        }
    }
  
    cout << g << endl;

    return 0;
}
*/
