#include <iostream>
using namespace std;

//Имя
/*
int main()
 {
	setlocale (LC_ALL, "rus");

	cout << "Николаенко Михаил Григорьевич\n";
	return 0;
 }
*/ 

//Арифметика
/*
int main()
{
setlocale(LC_ALL, "rus");
double a, b;
cout << "\nВведите первое число ";
cin >> a;
cout << "\nВведите второе число ";
cin >> b;
cout << "\nСумма чисел "<<a+b<<"\n";
cout << "\nРазность чисел "<<a-b << "\n";
cout << "\nПроизведение чисел "<<a*b << "\n";
if (b != 0)
{
	cout << "\nЧастное чисел "<<a / b << "\n";
}
else
{
	cout << "\nДелить на ноль нельзя\n";
}
		return 0;
	}
*/

//Уравнение
/*
int main()
{
	setlocale(LC_ALL, "rus");
	double c, b, x;

	cout << "\nВведите c ";
	cin >> c;

	cout << "\nВведите b ";
	cin >> b;
	if (b != 0)
	{
		x = c / -b;
		cout << "\nx="<<x<<"\n";
	}
	if (b == 0 or (b == 0 and c == 0))
	{
		cout << "\nx-любое число\n";
	}

	return 0;
}
*/

//Ещё уравнение
 /*
 int main()
 {
	setlocale(LC_ALL, "rus");
	double a, c, b, x1, D, x2,x;

	cout << "\nВведите a ";
		cin >> a;
	
		cout << "\nВведите b ";
		cin >> b;

		cout << "\nВведите c ";
		cin >> c;

		D = b * b - 4 * a * c;

		if ((a==0) and b!= 0)
		{
			x = c / -b;
			cout << "\nx="<<x<<"\n";
		}
				if (b==0 and a == 0 and c==0)
				{
					cout << "\nx-любое число\n";
				}

				if (D<0)
				{
					cout << "\nОшибка\n";
				}
				if ((D>=0) and ((b and a)!=0 ))
				{

					x1 = (-b + sqrt(D)) / (2 * a);
					x2 = (-b - sqrt(D)) / (2 * a);
					cout << "\nx1 = " << x1 << "\n";
					cout << "\nx2 = " << x2 << "\n";
				}
	return 0;
 }
 */
 
//Лампа со шторой
/*
int main()
 {
	setlocale(LC_ALL, "rus");
	bool a, c, b;

	cout << "\nНа улице день? (Да = 1, Нет = 0) ";
			cin >> a;

			cout << "\nШторы закрыты? (Да = 1, Нет = 0) ";
			cin >> b;

			cout << "\nЛампа включена? (Да = 1, Нет = 0) ";
			cin >> c;

			if ((c == 1) or (a == 1 and b == 0))
			{
				cout <<"\nВ комнате светло\n";
			}

			else
			{
				cout <<"\nВ комнате темно\n";
			}
	return 0;
 }
*/ 