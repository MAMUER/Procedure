#include <iostream>
using namespace std;

//Пифагоровы числа

int main()
{
    setlocale(LC_ALL, "rus");

    int m, n;

	int SIZE;

    cout << "Введите первое натуральное число\n" << endl;
    cin >> m;

    cout << "\nВведите второе натуральное число\n" << endl;
    cin >> n;

	if (m <= 0 or n <= 0)
	{
		cout << "\nОшибка\n";
	}

    else
    {
		int начало, конец;

		if (n > m)
		{
			if ((n - m) == 1)
			{
				cout << "\nОшибка\n";
				goto end;
			}

			else
			{
				начало = m;
				конец = n;
				SIZE = n - m;
			}			
		}

		else if (m > n)
		{
			if ((m - n) == 1)
			{
				cout << "\nОшибка\n";
				goto end;
			}

			else
			{
				начало = n;
				конец = m;
				SIZE = m - n;
			}
		}		

		cout << "\nПифогоровы числа от " << m << " до " << n << ":" << endl;

		int* arr = new int[(SIZE + 1)]{};

		int i = 0;

		for (начало; начало <= конец; начало++)
		{
			for (i;;)
			{
				arr[i] = pow(начало, 2);
				i++;
				break;
			}
		}

		int втор_слог = 1;

		int сумма = 2;

		for (int пер_слог = 0; пер_слог <= (SIZE - 2);)
		{
			for (втор_слог; втор_слог <= (SIZE - 1);)
			{
				for (сумма; сумма <= SIZE;)
				{
					if (arr[сумма] > (arr[пер_слог] + arr[втор_слог]))
					{
						break;
					}

					else if ((arr[пер_слог] + arr[втор_слог]) == arr[сумма])
					{
						cout << "\n" << sqrt(arr[пер_слог]) << ", " << sqrt(arr[втор_слог]) << ", " << sqrt(arr[сумма]) << endl;
					}
					сумма++;
				}
				втор_слог++;
				сумма = (втор_слог + 1);				
			}
			пер_слог++;
			втор_слог = (пер_слог + 1);
			сумма = (пер_слог + 2);
		}

		delete[] arr;		
    }    

end:
	int k = 0;

    return 0;
}