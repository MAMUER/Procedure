#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//���
/*
int main()
 {
    double p , s, n, r,  S, m;
    
    setlocale (LC_ALL, "rus");

    cout << "������� ����� ���� ";
    cin >>S;

 cout <<"\n";

    cout << "������� �� ����� ����� ���� ������ (� �����) ";
    cin >>n;

 cout <<"\n";

    cout << "������� ��� ����� ������� ��� ���� ������ (%) ";
    cin >> p;

    r = p / 100;

    if (p <= 0 or S <= 0 or  n <= 0)
    {
        cout << "\n������\n";
    }
    else
    {
        m = (S * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1));

        cout << "\n�������� ������� �� ������� = "<< m<<"\n";
    }
    return 0;
 }
*/
 
//�����
/*
int main()
 {
     float n, m, S;
     float p, m1 = 0, r;
    
    setlocale(LC_ALL, "rus");

    cout << "������� ����� ���� ";
    cin >> S;

    cout << "\n������� �� ����� ����� ���� ������ (� �����) ";
    cin >> n;

    cout << "\n������� ������ ����������� ������ �� ������� ";
    cin >> m;

    if (m <= 0 or S <= 0 or n <= 0)
    {
        cout << "\n������\n";
    }

    else  if (n * 12 * m == S)
    {
        cout << "\n���������� ������ = 0%\n";
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
                    cout << "\n���������� ������ = " << c << "%\n";
                }
                
                else if (c == 0)                
                {
                    
                    cout << "\n���������� ������ = " << (c + e/100) << "%\n";
                }

                else
                {                   
                    cout << "\n���������� ������ = " << (c + e/100) << "%\n";
                }
                break;
            }
        }
    }
    return 0;
 }
 */
 
//����������� �����
/*
int main()
{
    setlocale(LC_ALL, "rus");

    ifstream fin;
    fin.open("text.txt");

    if (!fin.is_open())
    {
        cout << "������\n";
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

//������
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
        cout << "������ �������� �����!";
    }

    else
    {
        fout << "193827�����������seigjopwiehgoweg";
    }

    fout.close();

    ifstream fin;
    fin.open(path);

    if (!fin.is_open())
    {
        cout << "������ �������� �����!";
    }

    else
    {
        char �����;

        while (fin.get(�����))
        {
            if (fin.eof())
            {
                fin.close();
            }

            for (int i = 0; i <= 9;)
            {
                if (����� == cifri[i])
                {
                    cout << ����� << " ";
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

//���������� ����
/*
int main()
{
    setlocale(LC_ALL, "rus");

    string path("sort.txt");
        
    int const SIZE = 30;

    string �����;

    ofstream fout;
    fout.open(path);

    if (!fout.is_open())
    {
        cout << "������\n";
    }
    else
    {
        fout << "j�fiNH���UbdYGp��YDZct���GDYop";
    }

    fout.close();

    ifstream fin;
    fin.open(path);

    if (!fin.is_open())
    {
        cout << "������\n";
    }
    else
    { 
        int i = 0;

        fin >> �����;
    }

    fin.close();    

    //������ ���������� �����

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

            if ((int)�����[j] > (int)�����[i])
            {
                buf = �����[j];
                �����[j] = �����[i];
                �����[i] = buf;

                break;
            }

            if ((int)�����[j] <= (int)�����[i])
            {
                i++;                 
            }
        }
    }

    //����� ���������� �����     

    cout << ����� << endl;

    return 0;
}
*/