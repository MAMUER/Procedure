#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>

using namespace std;

//�������� �������
/*
int ���_��������(int a, int b)
{
	setlocale(LC_ALL, "rus");

	//��� ���������� � ��������, ���� ���� �� ���� �� ����� �� ����� ����
	if (a == 0 and b == 0)
	{
		cout << "\n������\n" << endl;
		return 0;
	}

	else
	{
		if (a == b)
		{
			cout << "\n��� �������� = " << a << endl;
			return 0;
		}

		else
		{	
			if (a == 0)
			{
				cout << "\n��� �������� = " << b << endl;
			}

			else if (b == 0)
			{
				cout << "\n��� �������� = " << a << endl;
			}

			else
			{				

				if (a < 0)
				{
					a *= (-1);
				}

				if (b < 0)
				{
					b *= (-1);
				}

				while (a != 0 and b != 0)
				{
					if (a > b)
					{
						a = a % b;
					}

					else
					{
						b = b % a;
					}
				}				
				
				cout << "\n��� �������� = " << a + b << endl;
				return 0;
			}
		}		
	}
}

int ���_����������(int a, int b)
{
	setlocale(LC_ALL, "rus");

	//��� ���������� � ��������, ���� ���� �� ���� �� ����� �� ����� ����
	if (a == 0 and b == 0)
	{
		cout << "\n������\n" << endl;
		return 0;
	}

	else 
	{
		if (a == b)
		{
			cout << "\n��� ���������� = " << a << endl;
			return 0;
		}

		else
		{
			if (a == 0)
			{
			cout << "\n��� ���������� = " << b << endl;
			}

			else if (b == 0)
			{
			cout << "\n��� ���������� = " << a << endl;
			}

			else
			{
				if (a < 0)
				{
					a *= (-1);
				}

				if (b < 0)
				{
					b *= (-1);
				}

				while (a != b)
				{
					if (a > b)
					{
						a = a - b;
					}

					else
					{
						b = b - a;
					}
				}
				cout << "\n��� ���������� = " << a << endl;
				return 0;
			}
		}		
	}	
}

int main()
{
	setlocale(LC_ALL, "rus");

	int a, b;

	cout << "������� ������ ����� �����\n" << endl;
	cin >> a;

	cout << "\n������� ������ ����� �����\n" << endl;
	cin >> b;

	���_��������(a, b);
	���_����������(a, b);
	
	return 0;
}
*/


//������ ����������
/*
int uio(int a)
{
	setlocale(LC_ALL, "rus");

	int b = (a / 2);

	int z = 0;

	int* arr = new int[b] {};

	for (int i = 7; i <= a; )
	{
		if (i % 3 == 0 or i % 5 == 0)
		{
			i += 2;
		}
		
		else
		{
			//����� ����� �� ��� ���������� ������������ ������� �����
			for (int j = 0; j < b;)
			{
				if (arr[j] != 0)
				{
					if ((i % arr[j]) == 0)
					{
						i += 2;
						goto here;
					}

					else
					{
						j++;
					}
				}

				if (arr[j] == 0)
				{
					break;
				}
			}
			
			if (i > a)
			{
				break;
			}

			else
			{
				for (; z < a;)
				{
					arr[z] = i;
					i += 2;
					z++;
					break;
				}
			}	
		here:
			int ����� = 0;
		}
	}

	for (int g = 0; g < b; g++)
	{
		if (arr[g] != 0)
		{
			cout << arr[g] << endl;
		}		

		else
		{
			break;
		}
	}

	delete[] arr;
	return 0;
}

int main()
{
	setlocale(LC_ALL, "rus");

	int a;

	cout << "������� ����������� ����� ������ 1\n" << endl;
	cin >> a;

	if (a < 2)
	{
		cout << "\n������" << endl;
	}

	if (a == 2)
	{
		cout << "\n������� ����� �� 2 �� ��������� ���� �����:" << endl;
		cout << "\n2" << endl;
	}
		
	if (a == 3 or a == 4)
	{
		cout << "\n������� ����� �� 2 �� ��������� ���� �����:" << endl;
		cout << "\n2";
		cout << "\n3" << endl;
	}

	if (a == 5 or a==6)
	{
		cout << "\n������� ����� �� 2 �� ��������� ���� �����:" << endl;
		cout << "\n2";
		cout << "\n3";
		cout << "\n5" << endl;
	}	

	if (a > 6)
	{
		cout << "\n������� ����� �� 2 �� ��������� ���� �����:" << endl;
		cout << "\n2";
		cout << "\n3";
		cout << "\n5" << endl;

		uio(a);
		
		cout << endl;
	}	
	return 0;
}
*/


//��������� ��������� ������

//1 = 12 = 13 = 28 = 36
/*
int main()
{
	setlocale(LC_ALL, "rus");

	string path("file2.txt");

	//������ ������ � ����
	ofstream fout;
	fout.open(path);

	if (!fout.is_open())
	{
		cout << "������\n";
	}
	else
	{
		fout << "����� ��� ���� table ��� ����� ������� lamp";
	}

	fout.close();

	//������ �����
	ifstream fin;
	fin.open(path);

	if (!fin.is_open())
	{
		cout << "������\n" << endl;
	}
	else
	{
		string ���_������;

		while (!fin.eof())
		{
			getline(fin, ���_������);

			cout << ���_������;
		}

		fin.close();		
		//--------------------------------------------------------------
		//����� ������������ �����
		fin.open(path);

		string �����;

		int �����_���_������ = 0;

		int �����_���� = 0;

		cout << "\n\n����� ����� ������ �����?\n" << endl;

		//����� ����� �����, ���������� �� �������
		SetConsoleCP(1251);  //������������ ��������� �� ������� ����
		cin >> �����;
		SetConsoleCP(866);  //������������ ��������� �� ���������� ����

		while (!fin.eof())
		{
			string ���_�����;

			���_����� = "";

			fin >> ���_�����;

			if (����� == ���_�����)
			{
				�����_���_������++;
			}

			�����_����++;
		}
		
		cout << "\n" << "����� ����������� � ��������� ����� " << �����_���_������ << " ���(�)" << endl;
		
		fin.close();
		//--------------------------------------------------------------
		//����� ������� �����
		fin.open(path);

		cout << "\n����� ������� �����:\n" << endl;

		int* ����� = new int[�����_����];

		for (int i = 0; i < �����_����; )
		{
			string ���_�����;			

			���_����� = "";

			fin >> ���_�����;

			if (���_����� == "")
			{				
				break;
			}			

			�����[i] = ���_�����.size();
			i++;
		}
		fin.close();			

		int i = 0;
		int j = 1;
		for (i; i < �����_����;)
		{
			if (j == �����_����)
			{
				break;
			}

			for (j; j < �����_����; j++)
			{
				if (�����[i] < �����[j])
				{
					i = j;
					j++;
					break;
				}
			}
		}
		
		fin.open(path);

		int ������� = 1;

		while (!fin.eof())
		{
			string ���_�����;

			���_����� = "";

			fin >> ���_�����;

			if (������� == i + 1)
			{
				cout << ���_����� << " (" << ���_�����.size()<<" ��������)";
				break;
			}

			�������++;
		}

		fin.close();
		delete[] �����;		
		//--------------------------------------------------------------
		//������ �������� �� �����-�� �������
		fin.open(path);

		cout << "\n\n�� ����� ������ �������� �������: ";

		char �������;

		//����� �������� �� ������� �����
		SetConsoleCP(1251);  //������������ ��������� �� ������� ����
		cin >> �������;
		SetConsoleCP(866);  //������������ ��������� �� ���������� ����

		char ���_��������;

		cout << endl;

		int size = 0;

		while (fin.get(���_��������))
		{
			size += 1;

			if (���_�������� == ' ')
			{
				���_�������� = �������;
			}

			cout << ���_��������;
		}
		cout << endl;

		fin.close();
		//--------------------------------------------------------------
		//�������������� ������ � ������ ��������
		fin.open(path);		

		char �����;

		char* ������ = new char [size];

		for (int i = 0; fin.get(�����); i++)
		{
			������[i] = �����;
		}

		cout << "\n����, ������������ � ������ ��������:\n\n";

		for (int i = 0; i < size; i++)
		{
			cout << ������[i];
		}

		cout << endl;

		fin.close();

		delete[]������;
		//----------------------------------------------------------------------

		fin.open(path);

		cout << "\n����� ������ ������ �� ���������� �����: ";		

		char ����������;

		SetConsoleCP(1251);  //������������ ��������� �� ������� ����
				
		cin >> ����������;

		SetConsoleCP(866);  //������������ ��������� �� ���������� ����

		char ������;

		cout << endl;

		while (fin.get(������))
		{
			if (������ == ����������)
			{
				cout << ' ';
			}

			else
			{
				cout << ������;
			}
		}
		cout << endl;

		fin.close();			
	}
	return 0;
}
*/


//����

//1++++
/*
double foo(int n)
{
	double b = 0;

	for (n; n >= 1; n--)
	{
		b += sin(n);				
	}
	return b;
}

int main()
{	
	setlocale(LC_ALL, "rus");

	int n;
	double y = 0;
	
	cout << "������� ����� ����� ������ ���� = ";
	cin >> n;	

	if (n<1)
	{
		cout << "������";
	}

	else
	{
		for (n; n >= 1; n--)
		{
			y += n / foo(n);
		}

		cout << "\ny = " << y << endl;
	}
	return 0;
	}
	*/

//3+++
/*
int fact(int n)
{
	int a = 0;

	for (n;; n -= 2)
	{
		if (n > 1)
		{
			a += n * (n - 1);
		}

		else if (n == 1)
		{
			if (a == 0)
			{
				a = 1;
				break;
			}
			else
			{
				break;
			}
		}

		else if (n < 1)
		{
			break;
		}
	}
	return a;
}

double foo(int n)
{
	double b = 0;

	n *= 2;

	for (n; n >= 1;n-=2)
	{		
		b += sin(n);
	}
	return b;
}

int main()
{
	setlocale(LC_ALL, "rus");

	int n;
	double y = 1;

	cout << "������� ����� ����� ������ ���� = ";
	cin >> n;

	if (n < 1)
	{
		cout << "������";
	}

	else
	{
		for (n; n >= 1; n--)
		{
			y *= fact(n) / foo(n);
		}

		cout << "\ny = " << y << endl;
	}
	return 0;
}
*/

//4++++
/*
int fact(int k)
{
	int a = 0;

	for (k;; k -= 2)
	{
		if (k > 1)
		{
			a += k * (k - 1);			
		}

		else if (k == 1 or k == 0)
		{
			if (a == 0)
			{
				a = 1;
				break;
			}
			else
			{
				break;
			}			
		}

		else if (k < 1)
		{
			break;
		}
	}
	return a;
}

double foo(int k)
{
	double b = 0;

	for (int i = 1; i <= k;)
	{
		if (i % 2 != 0)
		{
			b += pow(i, -1);
			i++;
		}

		else
		{
			b -= pow(i,-1);
			i++;
		}
	}

	return b;
}

int main()
{
	setlocale(LC_ALL, "rus");

	int n, k;

	double y = 0;

	cout << "������� ����������� ����� = ";
	cin >> n;

	if (n < 1)
	{
		cout << "������";
	}

	else
	{
		for (k = 1; k <= n;)
		{
			y += fact(k) / foo(k);

			k++;
		}
	}	

	cout << "\ny = " << y << endl;

	return 0;
}
*/

//7+++
/*
int fact(int k,int x)
{
	int a = 0;

	int c = k + x;

	for (c;; c -= 2)
	{
		if (c > 1)
		{
			a += c * (c - 1);
		}

		else if (c == 1 or c == 0)
		{
			if (a == 0)
			{
				a = 1;
				break;
			}
			else
			{
				break;
			}
		}

		else if (c < 0)
		{
			break;
		}
	}
	return a;
}

int main()
{	
	setlocale(LC_ALL, "rus");	

	int k,x;

	double y = 0;

	cout << "������� ����� ����� = ";
	cin >> x;

	if (x < 0)
	{
		cout << "\n������\n";
	}

	else
	{
		for (k = 0;;)
		{
			y += fact(k, x) / (pow(3, k) * (3 * k + 2));

			k++;			

			double m = (int(y * 1000000));

			for (int i = 1; i <= 6; i++)
			{
				m /= 10;
			}		

			if (k >= 100)
			{
				cout << "\ny = " << m << endl;
				break;
			}			
		}
	}		

	return 0;
}
*/

//8+++
/*
double foo(double a, int n, double y, int i)
{
	double b = 0;

	if (y == 0)
	{
		b = a;
	}

	else
	{
		b = a;

		int j = 1;

		for (int k = 1; k <= (i-1); k++)
		{
			for (j; j <= n; )
			{
				b *= (a + j);
				j++;
				break;
			}			
		}		
	}	

    return b;
}

int main()
{	
	setlocale(LC_ALL, "rus");

	int n;
	double y = 0, a;

	cout << "������� ����� ����� = ";
	cin >> n;

	if (n < 0)
	{
		cout << "������";
	}

	cout << "\n������� ����� ����� = ";
	cin >> a;

	if (a == 0)
	{
		cout << "������";
	}

	else
	{
		for (int i = 1; i <= (n + 1); i++)
		{
			y += (i / foo(a, n, y, i));
		}
		cout << "\ny = " << y << endl;
	}
	return 0;
}
	*/

//10++
/*
int fact(int n)
{
	int a = 0;

	for (n;; n -= 2)
	{
		if (n > 1)
		{
			a += n * (n - 1);
		}

		else if (n == 1)
		{
			if (a == 0)
			{
				a = 1;
				break;
			}
			
			else
			{
				break;
			}
		}

		else if (n < 1)
		{
			break;
		}
	}
	return a;
}

double sinus(int i)
{
	double c = 0;

	for (int k = 1; k <= i; k++)
	{
		c += sin(10 + k * 2);		
	}

	return c;
}

double foo(int n, int i)
{
	double b = 0;
		
	b += pow(sinus(i), i);
		
	return b;
}

int main()
{
	setlocale(LC_ALL, "rus");

	int n;
	double y = 0;

	cout << "������� ����� �����  = ";
	cin >> n;

	if (n < 1)
	{
		cout << "������";
	}

	else
	{
		int i = 1;

		for (n; n >= 1; n--)
		{
			y += fact(n) / foo(n, i);	

			i++;
		}

		cout << "\ny = " << y << endl;
	}
	return 0;
}
*/

//12+++
/*
int fact(int k)
{
	int a = 0;

	for (k;; k -= 2)
	{
		if (k > 1)
		{
			a += k * (k - 1);
		}

		else if (k == 1 or k == 0)
		{
			if (a == 0)
			{
				a = 1;
				break;
			}
			else
			{
				break;
			}
		}

		else if (k < 1)
		{
			break;
		}
	}
	return a;
}

double foo(int k)
{
	double b = 0;

	for (int i = 1; i <= k;)
	{
		b += pow(i, -1);
		i++;
	}

	return b;
}

int main()
{
	setlocale(LC_ALL, "rus");

	int n, k;

	double y = 0;

	cout << "������� ����������� ����� = ";
	cin >> n;

	if (n < 1)
	{
		cout << "������";
	}

	else
	{
		for (k = 1; k <= n; k++)
		{
			y += fact(k) / pow(foo(k), k);
		}
	}

	cout << "\ny = " << y << endl;

	return 0;
}
*/

//13+++
/*
int main()
{
	setlocale(LC_ALL, "rus");

	int m, a, b, c;

	cout << "������� ����������� ����� (<27) = ";
	cin >> m;

	if (m < 1 or m > 26)
	{
		cout << "������";
	}

	else
	{
		cout << "\n���������� ����� �����, ����� ���� ������� ����� ������ �����:\n"<<endl;

		for (int y = 100; y <= 998; y++)
		{
			a = y / 100;

			b = (y / 10) % 10;

			c = y % 10;

			if ((a + b + c) == m)
			{
				cout << y <<"\n"<<endl;
			}
		}
	}
	return 0;
}
*/

//14+++
/*
int main()
{
	setlocale(LC_ALL, "rus");

	int a, b, c, d;
		
	cout << "\n��� ������������� ����� �����, � ������ ������� ��� ���� ���������� ����:\n" << endl;

	for (int y = 1023; y <= 9876; y++)
	{
		a = y / 1000;

		b = (y / 100) % 10;

		c = (y / 10) % 10;

		d = y % 10;

		if (a!=b and a!=c and a!=d and b!=c and b!=d and c!=d)
		{
			cout << y << "\n" << endl;
		}
	}		
	return 0;
}
*/

//15
/*
int fact(int k)
{
	int a = 0;

	int c = 2 * k + 1;

	for (c;; c -= 2)
	{
		if (c > 1)
		{
			a += c * (c - 1);
		}

		else if (c == 1 or c == 0)
		{
			if (a == 0)
			{
				a = 1;
				break;
			}
			else
			{
				break;
			}
		}

		else if (c < 0)
		{
			break;
		}
	}
	return a;
}

int main()
{
	setlocale(LC_ALL, "rus");

	int k;

	double x;

	double y = 0;

	cout << "������� ����� = ";
	cin >> x;

	if (x == 0)
	{
		cout << "\n������\n";
	}

	else
	{
		for (k = 0;;)
		{
			y += fact(k) / (pow(k + 1, k) * pow(x, 4 * k));

			k++;

			double m = (int(y * 1000000));

			for (int i = 1; i <= 6; i++)
			{
				m /= 10;
			}

			if (k >= 100)
			{
				cout << "\ny = " << m << endl;
				break;
			}
		}
	}

	return 0;
}
*/

//16+++
/*
int fact(int n, int x)
{
	int a = 0;

	int c = 2 * n + 1;

	for (c;; c -= 2)
	{
		if (c > 1)
		{
			a += c * (c - 1);
		}

		else if (c == 1 or c == 0)
		{
			if (a == 0)
			{
				a = 1;
				break;
			}
			else
			{
				break;
			}
		}

		else if (c < 0)
		{
			break;
		}
	}
	return a;
}

int main()
{
	setlocale(LC_ALL, "rus");

	int n;

	double e;

	double y = 0;

	cout << "������� ����� ������ ���� = ";
	cin >> e;

	if (e <= 0)
	{
		cout << "\n������\n";
	}

	else
	{
		for (n = 0;;n++)
		{
			if (pow(3, -n) >= e)
			{
				y += pow(3, -n) * pow(cos(pow(3, (n - 1))), 3);
			}

			else
			{
				break;
			}
		}
		cout << "\ny = " << y << endl;
	}

	return 0;
}
*/

//17+++
/*
int fact(int k, int x)
{
	int a = 0;

	int c = k + 2;

	for (c;; c -= 2)
	{
		if (c > 1)
		{
			a += c * (c - 1);
		}

		else if (c == 1 or c == 0)
		{
			if (a == 0)
			{
				a = 1;
				break;
			}
			else
			{
				break;
			}
		}

		else if (c < 0)
		{
			break;
		}
	}
	return a;
}

int main()
{
	setlocale(LC_ALL, "rus");

	int k;

	double x;

	double y = 0;

	cout << "������� ����� = ";
	cin >> x;

	if (x == 0)
	{
		cout << "\n������\n";
	}

	else
	{
		for (k = 0;;)
		{
			y += fact(k, x) / (pow(k + 1, 2) * pow(x, 2 * k + 2));

			k++;

			double m = (int(y * 1000000));

			for (int i = 1; i <= 6; i++)
			{
				m /= 10;
			}

			if (k >= 100)
			{
				cout << "\ny = " << m << endl;
				break;
			}
		}
	}

	return 0;
}
*/

//18 = 19 = 44
/*
void �������(double *&����, int &����������)
{
	double* �����_���� = new double[���������� + 1];

	for (int i = 0; i < ����������; i++)
	{
		�����_����[i] = ����[i];
	}
	����������++;

	delete[] ����;

	���� = �����_����;
}

int main()
{
	setlocale(LC_ALL, "rus");

	int ���������� = 0;

	double ����� = 0;

	double ������� = 0;

	int �������_���� = 0;

	double* ���� = new double[����������];

	cout << "****������ ����� �������� ***\n" << endl;

	cout << "������� ����(��) � ������� <Enter>.\n" << endl;

	cout << "��� ���������� ������� 0 � ������� <Enter>\n"<<endl;

	for (int i = 0;;)
	{
		�������(����,����������);

		cin >> ����[i];

		cout << "\n";

		i++;

		if (����[i - 1] == 0)
		{
			for (int j = 0; j <= (���������� - 1); j++)
			{
				����� += ����[j];
			}
			������� = ����� / (���������� - 1);

			cout << "������� ����: "<< ������� <<" ��\n"<<endl;
						
			for (int k = 0; k <= (����������-1); k++)
			{
				if (����[k] > �������)
				{
					�������_����++;
				}
			}

			if (�������_���� == 1)
			{
				cout << "� " << �������_���� << "-�� �������� ���� ��������� �������.\n" << endl;
			}

			else if (�������_���� == 0)
			{
				cout << "����� ���� �� ��������� �������.\n" << endl;
			}
			
			else
			{
				cout << "� " << �������_���� << " ������� ���� ��������� �������.\n" << endl;
			}	

			break;
		}
	}	

	//������� ��� �������� � ���������� ������
	int �����_��� = 0;
	
	double* ������ = new double[����������];

	for (int i = 0; i < (���������� - 1); i++)
	{
		for (int j = (i + 1); j < (���������� - 1); j++)
		{
			if (����[i] == ����[j])
			{
				if (i != 0)
				{
					for (int z = 0; z < (����������/2); z++)
					{
						if (������[z] == ����[i])
						{
							goto next;
						}
					}
				}

				else
				{
					������[i] = ����[i];
				}

				�����_���++;
			next:
				j++;
				break;
			}
		}
	}

	cout << "��� �������� � ���������� ������: " << �����_��� << endl;

	delete[] ����;

	return 0;
}
*/

//28+++
/*
	int main()
{
	setlocale(LC_ALL, "rus");

	int n;

	int sum = 0;

	int ���������� = 0;

	int c;

	cout << "������� ����� ����� ";
	cin >> n;

	c = n;

	if (n == 0)
	{
		cout << "\n����� ���� = 0\n";
	}

	else if (n < 0)
	{
		n *= -1;

		for (int i = 1;; i++)
		{
			c /= 10;

			if (c == 0)
			{
				���������� = i;
				break;
			}
		}

		int j = 1;

		for (int i = 1; i <= ����������; i++)
		{
			for (j;;)
			{
				if (i == ����������)
				{
					sum += (n / j);
					break;
				}

				else
				{
					sum += (n / j) % 10;
					j *= 10;
					break;
				}
			}
		}
		cout << "\n����� ���� = " << sum << endl;
	}

	else
	{
		for (int i = 1;; i++)
		{
			c /= 10;

			if (c == 0)
			{
				���������� = i;
				break;
			}
		}

		int j = 1;

		for (int i = 1; i <= ����������; i++)
		{
			for (j;;)
			{
				if (i == ����������)
				{
					sum += (n / j);
					break;
				}

				else
				{
					sum += (n / j) % 10;
					j *= 10;
					break;
				}
			}
		}
		cout << "\n����� ���� = " << sum << endl;
	}
	return 0;
}
	*/

//30+++
/*
int main()
{
	setlocale(LC_ALL, "rus");

	int n;

	cout << "������� ����� ����� ";
	cin >> n;
	
	int z = n;

	int ����������;

	if (n < 0)
	{
		n *= -1;
	}

	for (int i = 1;; i++)
	{
		z /= 10;

		if (z == 0)
		{
			���������� = i;
			break;
		}
	}

	string �����;

	�����.resize(����������);

	int j = 1;

	for (int i = 1; i <= ����������; i++)
	{
		for (j;;)
		{
			if (i == ����������)
			{
				if ((n / j) == 0)
				{
					�����[i - 1] = '0';
				}

				else if ((n / j) == 1)
				{
					�����[i - 1] = '1';
				}

				else if ((n / j) == 2)
				{
					�����[i - 1] = '2';
				}

				else if ((n / j) == 3)
				{
					�����[i - 1] = '3';
				}

				else if ((n / j) == 4)
				{
					�����[i - 1] = '4';
				}

				else if ((n / j) == 5)
				{
					�����[i - 1] = '5';
				}

				else if ((n / j) == 6)
				{
					�����[i - 1] = '6';
				}

				else if ((n / j) == 7)
				{
					�����[i - 1] = '7';
				}

				else if ((n / j) == 8)
				{
					�����[i - 1] = '8';
				}

				else if ((n / j) == 9)
				{
					�����[i - 1] = '9';
				}				
				break;
			}

			else
			{
				if ((n / j) % 10 == 0)
				{
					�����[i - 1] = '0';
				}

				else if ((n / j) % 10 == 1)
				{
					�����[i - 1] = '1';
				}

				else if ((n / j) % 10 == 2)
				{
					�����[i - 1] = '2';
				}

				else if ((n / j) % 10 == 3)
				{
					�����[i - 1] = '3';
				}

				else if ((n / j) % 10 == 4)
				{
					�����[i - 1] = '4';
				}

				else if ((n / j) % 10 == 5)
				{
					�����[i - 1] = '5';
				}

				else if ((n / j) % 10 == 6)
				{
					�����[i - 1] = '6';
				}

				else if ((n / j) % 10 == 7)
				{
					�����[i - 1] = '7';
				}

				else if ((n / j) % 10 == 8)
				{
					�����[i - 1] = '8';
				}

				else if ((n / j) % 10 == 9)
				{
					�����[i - 1] = '9';
				}
				j *= 10;
				break;
			}
		}
	}

	int sum = 0;

	int a = 0;

	int b = 0;

	int c = 0;

	int d = 0;

	int e = 0;

	int f = 0;

	int g = 0;

	int h = 0;

	int l = 0;

	int m = 0;

	for (int i = 0; i < ����������; i++)
	{
		if (�����[i] == '0')
		{
			a ++;
		}

		else if (�����[i] == '1')
		{
			b ++;
		}

		else if (�����[i] == '2')
		{
			c ++;
		}

		else if (�����[i] == '3')
		{
			d ++;
		}

		else if (�����[i] == '4')
		{
			e ++;
		}

		else if (�����[i] == '5')
		{
			f ++;
		}

		else if (�����[i] == '6')
		{
			g ++;
		}

		else if (�����[i] == '7')
		{
			h ++;
		}

		else if (�����[i] == '8')
		{
			l ++;
		}

		else if (�����[i] == '9')
		{
			m ++;
		}
	}

	if (a != 0)
	{
		sum ++;
	}

	if (b != 0)
	{
		sum++;
	}

	if (c != 0)
	{
		sum++;
	}

	if (d != 0)
	{
		sum++;
	}

	if (e != 0)
	{
		sum++;
	}

	if (f != 0)
	{
		sum++;
	}

	if (g != 0)
	{
		sum++;
	}

	if (h != 0)
	{
		sum++;
	}

	if (l != 0)
	{
		sum++;
	}

	if (m != 0)
	{
		sum++;
	}
	cout << "\n� ������ ����� " << sum << " ��������� ����" << endl;
	
	return 0;
}
*/

//31+++
/*
int main()
{
	setlocale(LC_ALL, "rus");

	int n;

	cout << "������� ����� ����� ";
	cin >> n;
		
	n *= n;

	int z = n;

	int ����������;

	for (int i = 1;; i++)
	{
		z /= 10;

		if (z == 0)
		{
			���������� = i;
			break;
		}
	}

	string �����;

	�����.resize(����������);

	int j = 1;

	for (int i = 1; i <= ����������; i++)
	{
		for (j;;)
		{
			if (i == ����������)
			{
				if ((n / j) == 0)
				{
					�����[i - 1] = '0';
				}

				else if ((n / j) == 1)
				{
					�����[i - 1] = '1';
				}

				else if ((n / j) == 2)
				{
					�����[i - 1] = '2';
				}

				else if ((n / j) == 3)
				{
					�����[i - 1] = '3';
				}

				else if ((n / j) == 4)
				{
					�����[i - 1] = '4';
				}

				else if ((n / j) == 5)
				{
					�����[i - 1] = '5';
				}

				else if ((n / j) == 6)
				{
					�����[i - 1] = '6';
				}

				else if ((n / j) == 7)
				{
					�����[i - 1] = '7';
				}

				else if ((n / j) == 8)
				{
					�����[i - 1] = '8';
				}

				else if ((n / j) == 9)
				{
					�����[i - 1] = '9';
				}
				break;
			}

			else
			{
				if ((n / j) % 10 == 0)
				{
					�����[i - 1] = '0';
				}

				else if ((n / j) % 10 == 1)
				{
					�����[i - 1] = '1';
				}

				else if ((n / j) % 10 == 2)
				{
					�����[i - 1] = '2';
				}

				else if ((n / j) % 10 == 3)
				{
					�����[i - 1] = '3';
				}

				else if ((n / j) % 10 == 4)
				{
					�����[i - 1] = '4';
				}

				else if ((n / j) % 10 == 5)
				{
					�����[i - 1] = '5';
				}

				else if ((n / j) % 10 == 6)
				{
					�����[i - 1] = '6';
				}

				else if ((n / j) % 10 == 7)
				{
					�����[i - 1] = '7';
				}

				else if ((n / j) % 10 == 8)
				{
					�����[i - 1] = '8';
				}

				else if ((n / j) % 10 == 9)
				{
					�����[i - 1] = '9';
				}
				j *= 10;
				break;
			}
		}
	}

	for (int i = 0; i <= ����������; i++)
	{
		if (�����[i] == '3')
		{
			cout << "\n� ������ ������ �����, ����������� � �������, ���� ����� 3\n";
			break;
		}

		else if (i == ���������� and �����[i] != '3')
		{
			cout << "\n� ������ �����, ����������� � �������, ��� ����� 3\n";
		}
	}
	return 0;
}
*/

//32+++
/*
int main()
{
	setlocale(LC_ALL, "rus");

	int x;

	cout << "������� ����������� ����� ";
	cin >> x;

	if (x <= 0)
	{
		cout << "\n������\n";
	}

	int z = x;

	int ����������;

	for (int i = 1;; i++)
	{
		z /= 10;

		if (z == 0)
		{
			���������� = i;
			break;
		}
	}

	string �����;

	�����.resize(����������);

	int j = 1;

	for (int i = 1; i <= ����������; i++)
	{
		for (j;;)
		{
			if (i == ����������)
			{
				if ((x / j) == 0)
				{
					�����[i - 1] = '0';
				}

				else if ((x / j) == 1)
				{
					�����[i - 1] = '1';
				}

				else if ((x / j) == 2)
				{
					�����[i - 1] = '2';
				}

				else if ((x / j) == 3)
				{
					�����[i - 1] = '3';
				}

				else if ((x / j) == 4)
				{
					�����[i - 1] = '4';
				}

				else if ((x / j) == 5)
				{
					�����[i - 1] = '5';
				}

				else if ((x / j) == 6)
				{
					�����[i - 1] = '6';
				}

				else if ((x / j) == 7)
				{
					�����[i - 1] = '7';
				}

				else if ((x / j) == 8)
				{
					�����[i - 1] = '8';
				}

				else if ((x / j) == 9)
				{
					�����[i - 1] = '9';
				}
				break;
			}

			else
			{
				if ((x / j) % 10 == 0)
				{
					�����[i - 1] = '0';
				}

				else if ((x / j) % 10 == 1)
				{
					�����[i - 1] = '1';
				}

				else if ((x / j) % 10 == 2)
				{
					�����[i - 1] = '2';
				}

				else if ((x / j) % 10 == 3)
				{
					�����[i - 1] = '3';
				}

				else if ((x / j) % 10 == 4)
				{
					�����[i - 1] = '4';
				}

				else if ((x / j) % 10 == 5)
				{
					�����[i - 1] = '5';
				}

				else if ((x / j) % 10 == 6)
				{
					�����[i - 1] = '6';
				}

				else if ((x / j) % 10 == 7)
				{
					�����[i - 1] = '7';
				}

				else if ((x / j) % 10 == 8)
				{
					�����[i - 1] = '8';
				}

				else if ((x / j) % 10 == 9)
				{
					�����[i - 1] = '9';
				}
				j *= 10;
				break;
			}
		}
	}

	for (int i = 0; i <= ����������; i++)
	{
		if (�����[i] == '0')
		{
			�����[i] = 'g';
		}

		else if (�����[i] == '5')
		{
			�����[i] = 'g';
		}
	}

	cout << "\n���� ����� ��� '0' � '5': ";

	for (int i = ����������; i >= 0; i--)
	{
		if (�����[i] != 'g')
		{
			cout << �����[i];
		}			
	}
	cout << endl;

	return 0;
}
*/


//�����
//15

int main()
{
	setlocale(LC_ALL, "rus");

	string ������("start.txt");

	string ��������("end.txt");

	string ���� = "";

	using namespace std;

	//-1,5 1,5 -1.5 1.5 0 -0 0, ,0 0. .0 07 AJD 0,,0 0..0 0-0 1 12 123 -1
	//������ � ����
	ofstream fout;
	fout.open(��������);

	if (!fout.is_open())
	{
		cout << "\n������\n";
	}

	else
	{
		fout << "";
	}

	fout.close();

	cout << "�������� ��� ������������ �����(����� ������)\n\n";
	
	getline(cin, ����);

	fout.open(������);
	
	if (!fout.is_open())
	{
		cout << "\n������\n";
	}
	else
	{
		fout << ����;
	}

	fout.close();	

	int �����;

	cout << "\n\n� ����� ������� ��������� �� ������ ��� ���������? (������� ����� �� 2 �� 9)\n\n";
	
	cin >> �����;
//==============================================================
  //������ � ������ ������
	ifstream fin;
	fin.open(������);

	if (!fin.is_open())
	{
		cout << "\n������\n" << endl;
	}

	else
	{
		string ���_������;

		int i = 0;					

		if (����� < 2 or ����� > 9)
		{
			cout << "\n������" << endl;
		}

		else
		{
			string �����;

			float ������ = 0;

			while (!fin.eof())
			{
				���_������ = "";

				fin >> ���_������;
				//====================================================================
				//��������� �����
				double j = 1;

				for (int i = ���_������.size() - 1; i >= 0;)
				{
					//������������ �����
					if (���_������[i] != '0' and ���_������[i] != '1' and ���_������[i] != '2' and ���_������[i] != '3' and ���_������[i] != '4' and ���_������[i] != '5' and ���_������[i] != '6' and ���_������[i] != '7' and ���_������[i] != '8' and ���_������[i] != '9' and ���_������[i] != '-' and ���_������[i] != ',' and ���_������[i] != '.')
					{
						���_������ = "������";
						break;
					}

					else if (���_������[0] == '.' or ���_������[0] == ',' or (i == (���_������.size() - 1) and ���_������[i] == ',') or (i == (���_������.size() - 1) and ���_������[i] == '.'))
					{
						���_������ = "������";
						break;
					}

					else if ((i != 0 and ���_������[i] == '-') or ((���_������[i] == '.' or ���_������[i] == ',') and (���_������[i + 1] == '.' or ���_������[i + 1] == ',')))
					{
						���_������ = "������";
						break;
					}

					else if ((���_������[0] == '0' and (���_������[1] != '.' or ���_������[1] != ',') and (���_������.size() != 1)) or (���_������[0] == '-' and ���_������[1] == '0' and (���_������[2] != '.' or ���_������[2] != ',')))
					{
						���_������ = "������";
						break;
					}
					
					else
					{
						//���� �������������
						if (���_������[0] == '-')
						{
							for (j;;)
							{
								if (���_������[i] == '0')
								{
									������ -= (0 * j);
								}

								if (���_������[i] == '1')
								{
									������ -= (1 * j);
								}

								if (���_������[i] == '2')
								{
									������ -= (2 * j);
								}

								if (���_������[i] == '3')
								{
									������ -= (3 * j);
								}

								if (���_������[i] == '4')
								{
									������ -= (4 * j);
								}

								if (���_������[i] == '5')
								{
									������ -= (5 * j);
								}

								if (���_������[i] == '6')
								{
									������ -= (6 * j);
								}

								if (���_������[i] == '7')
								{
									������ -= (7 * j);
								}

								if (���_������[i] == '8')
								{
									������ -= (8 * j);
								}

								if (���_������[i] == '9')
								{
									������ -= (9 * j);
								}

								//���� ������������� �������
								if ((���_������[i] == '.') or (���_������[i] == ','))
								{
									i = ���_������.size() - 1;
									j = 1;
									//���������� �������
									for (j;;)
									{
										if (���_������[i] == '0')
										{
											������ += (0 * j);
										}

										if (���_������[i] == '1')
										{
											������ += (1 * j);
										}

										if (���_������[i] == '2')
										{
											������ += (2 * j);
										}

										if (���_������[i] == '3')
										{
											������ += (3 * j);
										}

										if (���_������[i] == '4')
										{
											������ += (4 * j);
										}

										if (���_������[i] == '5')
										{
											������ += (5 * j);
										}

										if (���_������[i] == '6')
										{
											������ += (6 * j);
										}

										if (���_������[i] == '7')
										{
											������ += (7 * j);
										}

										if (���_������[i] == '8')
										{
											������ += (8 * j);
										}

										if (���_������[i] == '9')
										{
											������ += (9 * j);
										}

										if (������ == 0)
										{		
											i--;
											break;
										}

										i--;
										j *= 10;
									}
									//�������� ������� �����
									j = 0.1;

									for (int k = (i + 1);k>=0;)
									{
										for (j;;)
										{
											if (k>= ���_������.size())
											{
												break;
											}

											if (���_������[k] == '0')
											{
												������ -= (0 * j);
											}

											if (���_������[k] == '1')
											{
												������ -= (1 * j);
											}

											if (���_������[k] == '2')
											{
												������ -= (2 * j);
											}

											if (���_������[k] == '3')
											{
												������ -= (3 * j);
											}

											if (���_������[k] == '4')
											{
												������ -= (4 * j);
											}

											if (���_������[k] == '5')
											{
												������ -= (5 * j);
											}

											if (���_������[k] == '6')
											{
												������ -= (6 * j);
											}

											if (���_������[k] == '7')
											{
												������ -= (7 * j);
											}

											if (���_������[k] == '8')
											{
												������ -= (8 * j);
											}

											if (���_������[k] == '9')
											{
												������ -= (9 * j);
											}

											k++;
											j /= 10;
										}

										k = (i - 1);
										j = 1;

										//�������� ����� �����
										for (j;;)
										{
											if (���_������[k] == '-')
											{
												k--;
												break;
											}

											if (���_������[k] == '0')
											{
												������ -= (0 * j);
											}

											if (���_������[k] == '1')
											{
												������ -= (1 * j);
											}

											if (���_������[k] == '2')
											{
												������ -= (2 * j);
											}

											if (���_������[k] == '3')
											{
												������ -= (3 * j);
											}

											if (���_������[k] == '4')
											{
												������ -= (4 * j);
											}

											if (���_������[k] == '5')
											{
												������ -= (5 * j);
											}

											if (���_������[k] == '6')
											{
												������ -= (6 * j);
											}

											if (���_������[k] == '7')
											{
												������ -= (7 * j);
											}

											if (���_������[k] == '8')
											{
												������ -= (8 * j);
											}

											if (���_������[k] == '9')
											{
												������ -= (9 * j);
											}

											k--;
											j *= 10;
										}

										if (k < 0)
										{
											i = k;
											break;
										}
									}
								}

								i--;
								j *= 10;
								break;
							}
						}

						//���� ������� �������������
						else if ((���_������[i] == '.') or (���_������[i] == ','))
						{
						i = ���_������.size() - 1;
						j = 1;
							//������� ��������
							for (j;;)
							{
								if (���_������[i] == '0')
								{
									������ -= (0 * j);
								}

								if (���_������[i] == '1')
								{
									������ -= (1 * j);
								}

								if (���_������[i] == '2')
								{
									������ -= (2 * j);
								}

								if (���_������[i] == '3')
								{
									������ -= (3 * j);
								}

								if (���_������[i] == '4')
								{
									������ -= (4 * j);
								}

								if (���_������[i] == '5')
								{
									������ -= (5 * j);
								}

								if (���_������[i] == '6')
								{
									������ -= (6 * j);
								}

								if (���_������[i] == '7')
								{
									������ -= (7 * j);
								}

								if (���_������[i] == '8')
								{
									������ -= (8 * j);
								}

								if (���_������[i] == '9')
								{
									������ -= (9 * j);
								}

								if (������ == 0)
								{
									i--;
									break;
								}

								i--;
								j *= 10;
							}

							//���������� ������� �����
							j = 0.1;

							for (int k = (i + 1); k >= 0;)
							{
								for (j;;)
								{
									if (k >= ���_������.size())
									{
										break;
									}

									if (���_������[k] == '0')
									{
										������ += (0 * j);
									}

									if (���_������[k] == '1')
									{
										������ += (1 * j);
									}

									if (���_������[k] == '2')
									{
										������ += (2 * j);
									}

									if (���_������[k] == '3')
									{
										������ += (3 * j);
									}

									if (���_������[k] == '4')
									{
										������ += (4 * j);
									}

									if (���_������[k] == '5')
									{
										������ += (5 * j);
									}

									if (���_������[k] == '6')
									{
										������ += (6 * j);
									}

									if (���_������[k] == '7')
									{
										������ += (7 * j);
									}

									if (���_������[k] == '8')
									{
										������ += (8 * j);
									}

									if (���_������[k] == '9')
									{
										������ += (9 * j);
									}

									k++;
									j /= 10;
								}

								k = (i - 1);
								j = 1;

								//���������� ����� �����
								for (j;;)
								{
									if (k < 0)
									{
										k--;
										break;
									}

									if (���_������[k] == '0')
									{
										������ += (0 * j);
									}

									if (���_������[k] == '1')
									{
										������ += (1 * j);
									}

									if (���_������[k] == '2')
									{
										������ += (2 * j);
									}

									if (���_������[k] == '3')
									{
										������ += (3 * j);
									}

									if (���_������[k] == '4')
									{
										������ += (4 * j);
									}

									if (���_������[k] == '5')
									{
										������ += (5 * j);
									}

									if (���_������[k] == '6')
									{
										������ += (6 * j);
									}

									if (���_������[k] == '7')
									{
										������ += (7 * j);
									}

									if (���_������[k] == '8')
									{
										������ += (8 * j);
									}

									if (���_������[k] == '9')
									{
										������ += (9 * j);
									}

									k--;
									j *= 10;
								}

								if (k < 0)
								{
									i = k;
									break;
								}
							}
						}

						else
						{
							//���� ����� ���������������
							for (j;;)
							{
								if (���_������[i] == '0')
								{
									������ += (0 * j);
								}

								if (���_������[i] == '1')
								{
									������ += (1 * j);
								}

								if (���_������[i] == '2')
								{
									������ += (2 * j);
								}

								if (���_������[i] == '3')
								{
									������ += (3 * j);
								}

								if (���_������[i] == '4')
								{
									������ += (4 * j);
								}

								if (���_������[i] == '5')
								{
									������ += (5 * j);
								}

								if (���_������[i] == '6')
								{
									������ += (6 * j);
								}

								if (���_������[i] == '7')
								{
									������ += (7 * j);
								}

								if (���_������[i] == '8')
								{
									������ += (8 * j);
								}

								if (���_������[i] == '9')
								{
									������ += (9 * j);
								}

								i--;
								j *= 10;
								break;
							}
						}
					}
				}

				//===================================================================	
			//��������� �� � ������ ������� ���������		
			
			//���� ������

				if (���_������ == "������")
				{	
					//���������� � ������ ����		
					fout.open(��������, ofstream::app);

					if (!fout.is_open())
					{
						cout << "\n������\n";
					}

					else
					{
						fout << ���_������ << " ";
					}

					fout.close();
				}

				//���� �������������
				else if (������ < 0)
				{
					int i = 1;			

					int k = 1;

					int a = int(������) * (-1);

					float b = (������ - (int)������) * (-1);

					//������� ����� �����
					for (i; (int(a / �����)) >= 0; i++)
					{
						if ((a - int(a / �����) * �����) == 8)
						{
							�����.resize(i + 1);
							�����[i] = '8';
						}

						else if ((a - int(a / �����) * �����) == 7)
						{
							�����.resize(i + 1);
							�����[i] = '7';
						}

						else if ((a - int(a / �����) * �����) == 6)
						{
							�����.resize(i + 1);
							�����[i] = '6';
						}

						else if ((a - int(a / �����) * �����) == 5)
						{
							�����.resize(i + 1);
							�����[i] = '5';
						}

						else if ((a - int(a / �����) * �����) == 4)
						{
							�����.resize(i + 1);
							�����[i] = '4';
						}

						else if ((a - int(a / �����) * �����) == 3)
						{
							�����.resize(i + 1);
							�����[i] = '3';
						}

						else if ((a - int(a / �����) * �����) == 2)
						{
							�����.resize(i + 1);
							�����[i] = '2';
						}

						else if ((a - int(a / �����) * �����) == 1)
						{
							�����.resize(i + 1);
							�����[i] = '1';
						}

						else if ((a - int(a / �����) * �����) == 0)
						{
							�����.resize(i + 1);
							�����[i] = '0';
						}

						a = int(a / �����);

						if (a == 0)
						{
							i++;
							break;
						}
					}

					string kek;

					int u = 0;					

					kek.resize(�����.size());

					for (int l = �����.size() - 1; l >= 0; l--)
					{
						for (u;;)
						{
							kek[u] = �����[l];
							u++;
							break;
						}
					}
					�����.resize(�����.size());

					for (int y = 1; y <= �����.size() - 1; y++)
					{
						�����[y] = kek[y-1];
					}

					if (b == 0)
					{
						goto there;
					}

					�����.resize(i + 1);
					�����[i] = '.';

					i++;

					//������� ������� �����
					for (k; k < 6; k++)
					{
						for (i;; i++)
						{
							if (int(b * �����) == 8)
							{
								�����.resize(i + 1);
								�����[i] = '8';
							}

							else if (int(b * �����) == 7)
							{
								�����.resize(i + 1);
								�����[i] = '7';
							}

							else if (int(b * �����) == 6)
							{
								�����.resize(i + 1);
								�����[i] = '6';
							}

							else if (int(b * �����) == 5)
							{
								�����.resize(i + 1);
								�����[i] = '5';
							}

							else if (int(b * �����) == 4)
							{
								�����.resize(i + 1);
								�����[i] = '4';
							}

							else if (int(b * �����) == 3)
							{
								�����.resize(i + 1);
								�����[i] = '3';
							}

							else if (int(b * �����) == 2)
							{
								�����.resize(i + 1);
								�����[i] = '2';
							}

							else if (int(b * �����) == 1)
							{
								�����.resize(i + 1);
								�����[i] = '1';
							}

							else if (int(b * �����) == 0)
							{
								�����.resize(i + 1);
								�����[i] = '0';
							}

							b = ((b * �����) - int(b * �����));

							if (b == 0)
							{
								k = 6;
								break;
							}

							k++;

							if (k == 6)
							{
								break;
							}
						}						
					}

					there:

					�����[0] = '-';
					//���������� � ������ ����		

					fout.open(��������, ofstream::app);

					if (!fout.is_open())
					{
						cout << "\n������\n";
					}

					else
					{
						fout << ����� << " ";
					}

					fout.close();
				}

				//���� ����� 0
				else if (������ == 0)
				{
					�����[0] = '0';

					//���������� � ������ ����		
					fout.open(��������, ofstream::app);

					if (!fout.is_open())
					{
						cout << "\n������\n";
					}

					else
					{
						fout << "0 ";
					}

					fout.close();
				}

				//���� �������������
				else
				{
					int i = 0;

					int a = int(������);

					float b = (������ - (int)������);

					//������� ����� �����
					for (i; (int(a / �����)) >= 0; i++)
					{
						if ((a - int(a / �����) * �����) == 8)
						{
							�����.resize(i + 1);
							�����[i] = '8';
						}

						else if ((a - int(a / �����) * �����) == 7)
						{
							�����.resize(i + 1);
							�����[i] = '7';
						}

						else if ((a - int(a / �����) * �����) == 6)
						{
							�����.resize(i + 1);
							�����[i] = '6';
						}

						else if ((a - int(a / �����) * �����) == 5)
						{
							�����.resize(i + 1);
							�����[i] = '5';
						}

						else if ((a - int(a / �����) * �����) == 4)
						{
							�����.resize(i + 1);
							�����[i] = '4';
						}

						else if ((a - int(a / �����) * �����) == 3)
						{
							�����.resize(i + 1);
							�����[i] = '3';
						}

						else if ((a - int(a / �����) * �����) == 2)
						{
							�����.resize(i + 1);
							�����[i] = '2';
						}

						else if ((a - int(a / �����) * �����) == 1)
						{
							�����.resize(i + 1);
							�����[i] = '1';
						}

						else if ((a - int(a / �����) * �����) == 0)
						{
							�����.resize(i + 1);
							�����[i] = '0';
						}

						a = int(a / �����);

						if (a == 0)
						{
							i++;
							break;
						}
					}

					string kek;

					int u = 0;						

					kek.resize(�����.size());

					for (int l = �����.size() - 1; l >= 0; l--)						
					{
						for (u;;)
						{
							kek[u] = �����[l];
							u++;
							break;
						}
					}
					
					for (int y = 0; y <= �����.size() - 1; y++)
					{
						�����[y] = kek[y];
					}

					if (b == 0)
					{
						goto here;
					}

					�����.resize(i + 1);
					�����[i] = '.';

					i++;

					//������� ������� �����
					for (int z = 1;z<6;)
					{
						for (i; (int(b * �����)) >= 0; i++)
						{
							if ((b * �����) == 8)
							{
								�����.resize(i + 1);
								�����[i] = '8';
							}

							else if (int(b * �����) == 7)
							{
								�����.resize(i + 1);
								�����[i] = '7';
							}

							else if (int(b * �����) == 6)
							{
								�����.resize(i + 1);
								�����[i] = '6';
							}

							else if (int(b * �����) == 5)
							{
								�����.resize(i + 1);
								�����[i] = '5';
							}

							else if (int(b * �����) == 4)
							{
								�����.resize(i + 1);
								�����[i] = '4';
							}

							else if (int(b * �����) == 3)
							{
								�����.resize(i + 1);
								�����[i] = '3';
							}

							else if (int(b * �����) == 2)
							{
								�����.resize(i + 1);
								�����[i] = '2';
							}

							else if (int(b * �����) == 1)
							{
								�����.resize(i + 1);
								�����[i] = '1';
							}

							else if (int(b * �����) == 0)
							{
								�����.resize(i + 1);
								�����[i] = '0';
							}
							b = ((b * �����) - int(b * �����));

							if (b == 0)
							{
								z = 6;
								break;
							}
							z++;

							if (z == 6)
							{
								break;
							}
						}
					}
					

					here:

					//���������� � ������ ����		
					fout.open(��������, ofstream::app);

					if (!fout.is_open())
					{
						cout << "\n������\n";
					}

					else
					{
						fout << ����� << " ";
					}

					fout.close();
				}		

				������ = 0;
			}						
		}		
	}
	
	fin.close();
//========================================================
	//������ � ������ ����		
	cout << "\n\n������ ���� � ������������ ����� �����:\n\n";

	fin.open(��������);

	if (!fin.is_open())
	{
		cout << "������\n" << endl;
	}

	else
	{
		string ���_������;

		while (!fin.eof())
		{
			���_������ = "";

			fin >> ���_������;

			cout << ���_������ << " ";
		}
	}

	fin.close();

	cout << endl;

	return 0;
}
