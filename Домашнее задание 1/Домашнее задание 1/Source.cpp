#include <iostream>
using namespace std;

//���
/*
int main()
 {
	setlocale (LC_ALL, "rus");

	cout << "���������� ������ �����������\n";
	return 0;
 }
*/ 

//����������
/*
int main()
{
setlocale(LC_ALL, "rus");
double a, b;
cout << "\n������� ������ ����� ";
cin >> a;
cout << "\n������� ������ ����� ";
cin >> b;
cout << "\n����� ����� "<<a+b<<"\n";
cout << "\n�������� ����� "<<a-b << "\n";
cout << "\n������������ ����� "<<a*b << "\n";
if (b != 0)
{
	cout << "\n������� ����� "<<a / b << "\n";
}
else
{
	cout << "\n������ �� ���� ������\n";
}
		return 0;
	}
*/

//���������
/*
int main()
{
	setlocale(LC_ALL, "rus");
	double c, b, x;

	cout << "\n������� c ";
	cin >> c;

	cout << "\n������� b ";
	cin >> b;
	if (b != 0)
	{
		x = c / -b;
		cout << "\nx="<<x<<"\n";
	}
	if (b == 0 or (b == 0 and c == 0))
	{
		cout << "\nx-����� �����\n";
	}

	return 0;
}
*/

//��� ���������
 /*
 int main()
 {
	setlocale(LC_ALL, "rus");
	double a, c, b, x1, D, x2,x;

	cout << "\n������� a ";
		cin >> a;
	
		cout << "\n������� b ";
		cin >> b;

		cout << "\n������� c ";
		cin >> c;

		D = b * b - 4 * a * c;

		if ((a==0) and b!= 0)
		{
			x = c / -b;
			cout << "\nx="<<x<<"\n";
		}
				if (b==0 and a == 0 and c==0)
				{
					cout << "\nx-����� �����\n";
				}

				if (D<0)
				{
					cout << "\n������\n";
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
 
//����� �� ������
/*
int main()
 {
	setlocale(LC_ALL, "rus");
	bool a, c, b;

	cout << "\n�� ����� ����? (�� = 1, ��� = 0) ";
			cin >> a;

			cout << "\n����� �������? (�� = 1, ��� = 0) ";
			cin >> b;

			cout << "\n����� ��������? (�� = 1, ��� = 0) ";
			cin >> c;

			if ((c == 1) or (a == 1 and b == 0))
			{
				cout <<"\n� ������� ������\n";
			}

			else
			{
				cout <<"\n� ������� �����\n";
			}
	return 0;
 }
*/ 