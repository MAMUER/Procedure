#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>

using namespace std;

//Алгоритм Евклида
/*
int НОД_делением(int a, int b)
{
	setlocale(LC_ALL, "rus");

	//НОД существует и определён, если хотя бы одно из чисел не равно нулю
	if (a == 0 and b == 0)
	{
		cout << "\nОшибка\n" << endl;
		return 0;
	}

	else
	{
		if (a == b)
		{
			cout << "\nНОД делением = " << a << endl;
			return 0;
		}

		else
		{	
			if (a == 0)
			{
				cout << "\nНОД делением = " << b << endl;
			}

			else if (b == 0)
			{
				cout << "\nНОД делением = " << a << endl;
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
				
				cout << "\nНОД делением = " << a + b << endl;
				return 0;
			}
		}		
	}
}

int НОД_вычитанием(int a, int b)
{
	setlocale(LC_ALL, "rus");

	//НОД существует и определён, если хотя бы одно из чисел не равно нулю
	if (a == 0 and b == 0)
	{
		cout << "\nОшибка\n" << endl;
		return 0;
	}

	else 
	{
		if (a == b)
		{
			cout << "\nНОД вычитанием = " << a << endl;
			return 0;
		}

		else
		{
			if (a == 0)
			{
			cout << "\nНОД вычитанием = " << b << endl;
			}

			else if (b == 0)
			{
			cout << "\nНОД вычитанием = " << a << endl;
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
				cout << "\nНОД вычитанием = " << a << endl;
				return 0;
			}
		}		
	}	
}

int main()
{
	setlocale(LC_ALL, "rus");

	int a, b;

	cout << "Введите первое целое число\n" << endl;
	cin >> a;

	cout << "\nВведите второе целое число\n" << endl;
	cin >> b;

	НОД_делением(a, b);
	НОД_вычитанием(a, b);
	
	return 0;
}
*/


//Решето Эратосфена
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
			//делим число на все предыдущие получившиеся простые числа
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
			int буфер = 0;
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

	cout << "Введите натуральное число больше 1\n" << endl;
	cin >> a;

	if (a < 2)
	{
		cout << "\nОшибка" << endl;
	}

	if (a == 2)
	{
		cout << "\nПростые числа от 2 до введённого вами числа:" << endl;
		cout << "\n2" << endl;
	}
		
	if (a == 3 or a == 4)
	{
		cout << "\nПростые числа от 2 до введённого вами числа:" << endl;
		cout << "\n2";
		cout << "\n3" << endl;
	}

	if (a == 5 or a==6)
	{
		cout << "\nПростые числа от 2 до введённого вами числа:" << endl;
		cout << "\n2";
		cout << "\n3";
		cout << "\n5" << endl;
	}	

	if (a > 6)
	{
		cout << "\nПростые числа от 2 до введённого вами числа:" << endl;
		cout << "\n2";
		cout << "\n3";
		cout << "\n5" << endl;

		uio(a);
		
		cout << endl;
	}	
	return 0;
}
*/


//Обработка текстовых файлов

//1 = 12 = 13 = 28 = 36
/*
int main()
{
	setlocale(LC_ALL, "rus");

	string path("file2.txt");

	//запись текста в файл
	ofstream fout;
	fout.open(path);

	if (!fout.is_open())
	{
		cout << "Ошибка\n";
	}
	else
	{
		fout << "слово дом корм table газ кошка монитор lamp";
	}

	fout.close();

	//чтение файла
	ifstream fin;
	fin.open(path);

	if (!fin.is_open())
	{
		cout << "Ошибка\n" << endl;
	}
	else
	{
		string имя_строки;

		while (!fin.eof())
		{
			getline(fin, имя_строки);

			cout << имя_строки;
		}

		fin.close();		
		//--------------------------------------------------------------
		//поиск определённого слова
		fin.open(path);

		string слово;

		int сколь_раз_встреч = 0;

		int колво_слов = 0;

		cout << "\n\nКакое слово хотите найти?\n" << endl;

		//чтобы найти слово, написанное на русском
		SetConsoleCP(1251);  //переключение кодировки на русский язык
		cin >> слово;
		SetConsoleCP(866);  //переключение кодировки на английский язык

		while (!fin.eof())
		{
			string имя_слова;

			имя_слова = "";

			fin >> имя_слова;

			if (слово == имя_слова)
			{
				сколь_раз_встреч++;
			}

			колво_слов++;
		}
		
		cout << "\n" << "Слово встречается в текстовом файле " << сколь_раз_встреч << " раз(а)" << endl;
		
		fin.close();
		//--------------------------------------------------------------
		//самое длинное слово
		fin.open(path);

		cout << "\nСамое длинное слово:\n" << endl;

		int* длина = new int[колво_слов];

		for (int i = 0; i < колво_слов; )
		{
			string имя_слова;			

			имя_слова = "";

			fin >> имя_слова;

			if (имя_слова == "")
			{				
				break;
			}			

			длина[i] = имя_слова.size();
			i++;
		}
		fin.close();			

		int i = 0;
		int j = 1;
		for (i; i < колво_слов;)
		{
			if (j == колво_слов)
			{
				break;
			}

			for (j; j < колво_слов; j++)
			{
				if (длина[i] < длина[j])
				{
					i = j;
					j++;
					break;
				}
			}
		}
		
		fin.open(path);

		int счётчик = 1;

		while (!fin.eof())
		{
			string имя_слова;

			имя_слова = "";

			fin >> имя_слова;

			if (счётчик == i + 1)
			{
				cout << имя_слова << " (" << имя_слова.size()<<" символов)";
				break;
			}

			счётчик++;
		}

		fin.close();
		delete[] длина;		
		//--------------------------------------------------------------
		//замена пробелов на какие-то символы
		fin.open(path);

		cout << "\n\nНа какой символ заменить пробелы: ";

		char элемент;

		//чтобы заменить на русскую букву
		SetConsoleCP(1251);  //переключение кодировки на русский язык
		cin >> элемент;
		SetConsoleCP(866);  //переключение кодировки на английский язык

		char имя_элемента;

		cout << endl;

		int size = 0;

		while (fin.get(имя_элемента))
		{
			size += 1;

			if (имя_элемента == ' ')
			{
				имя_элемента = элемент;
			}

			cout << имя_элемента;
		}
		cout << endl;

		fin.close();
		//--------------------------------------------------------------
		//преобразование текста в массив символов
		fin.open(path);		

		char новый;

		char* массив = new char [size];

		for (int i = 0; fin.get(новый); i++)
		{
			массив[i] = новый;
		}

		cout << "\nФайл, переделанный в массив символов:\n\n";

		for (int i = 0; i < size; i++)
		{
			cout << массив[i];
		}

		cout << endl;

		fin.close();

		delete[]массив;
		//----------------------------------------------------------------------

		fin.open(path);

		cout << "\nКакой символ убрать из текстового файла: ";		

		char исключение;

		SetConsoleCP(1251);  //переключение кодировки на русский язык
				
		cin >> исключение;

		SetConsoleCP(866);  //переключение кодировки на английский язык

		char считал;

		cout << endl;

		while (fin.get(считал))
		{
			if (считал == исключение)
			{
				cout << ' ';
			}

			else
			{
				cout << считал;
			}
		}
		cout << endl;

		fin.close();			
	}
	return 0;
}
*/


//Ряды

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
	
	cout << "Введите целое число больше нуля = ";
	cin >> n;	

	if (n<1)
	{
		cout << "Ошибка";
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

	cout << "Введите целое число больше нуля = ";
	cin >> n;

	if (n < 1)
	{
		cout << "Ошибка";
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

	cout << "Введите натуральное число = ";
	cin >> n;

	if (n < 1)
	{
		cout << "Ошибка";
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

	cout << "Введите целое число = ";
	cin >> x;

	if (x < 0)
	{
		cout << "\nОшибка\n";
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

	cout << "Введите целое число = ";
	cin >> n;

	if (n < 0)
	{
		cout << "Ошибка";
	}

	cout << "\nВведите любое число = ";
	cin >> a;

	if (a == 0)
	{
		cout << "Ошибка";
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

	cout << "Введите целое число  = ";
	cin >> n;

	if (n < 1)
	{
		cout << "Ошибка";
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

	cout << "Введите натуральное число = ";
	cin >> n;

	if (n < 1)
	{
		cout << "Ошибка";
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

	cout << "Введите натуральное число (<27) = ";
	cin >> m;

	if (m < 1 or m > 26)
	{
		cout << "Ошибка";
	}

	else
	{
		cout << "\nТрёхзначные целые числа, сумма цифр которых равна вашему числу:\n"<<endl;

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
		
	cout << "\nВсе четырёхзначные целые числа, в записи которых нет двух одинаковых цифр:\n" << endl;

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

	cout << "Введите число = ";
	cin >> x;

	if (x == 0)
	{
		cout << "\nОшибка\n";
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

	cout << "Введите число больше нуля = ";
	cin >> e;

	if (e <= 0)
	{
		cout << "\nОшибка\n";
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

	cout << "Введите число = ";
	cin >> x;

	if (x == 0)
	{
		cout << "\nОшибка\n";
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
void функция(double *&рост, int &количество)
{
	double* новый_рост = new double[количество + 1];

	for (int i = 0; i < количество; i++)
	{
		новый_рост[i] = рост[i];
	}
	количество++;

	delete[] рост;

	рост = новый_рост;
}

int main()
{
	setlocale(LC_ALL, "rus");

	int количество = 0;

	double сумма = 0;

	double средний = 0;

	int сколько_выше = 0;

	double* рост = new double[количество];

	cout << "****Анализ роста учеников ***\n" << endl;

	cout << "Введите рост(см) и нажмите <Enter>.\n" << endl;

	cout << "Для завершения введите 0 и нажмите <Enter>\n"<<endl;

	for (int i = 0;;)
	{
		функция(рост,количество);

		cin >> рост[i];

		cout << "\n";

		i++;

		if (рост[i - 1] == 0)
		{
			for (int j = 0; j <= (количество - 1); j++)
			{
				сумма += рост[j];
			}
			средний = сумма / (количество - 1);

			cout << "Средний рост: "<< средний <<" см\n"<<endl;
						
			for (int k = 0; k <= (количество-1); k++)
			{
				if (рост[k] > средний)
				{
					сколько_выше++;
				}
			}

			if (сколько_выше == 1)
			{
				cout << "У " << сколько_выше << "-го человека рост превышает средний.\n" << endl;
			}

			else if (сколько_выше == 0)
			{
				cout << "Ничей рост не превышает средний.\n" << endl;
			}
			
			else
			{
				cout << "У " << сколько_выше << " человек рост превышает средний.\n" << endl;
			}	

			break;
		}
	}	

	//сколько пар учеников с одинаковым ростом
	int колво_пар = 0;
	
	double* массив = new double[количество];

	for (int i = 0; i < (количество - 1); i++)
	{
		for (int j = (i + 1); j < (количество - 1); j++)
		{
			if (рост[i] == рост[j])
			{
				if (i != 0)
				{
					for (int z = 0; z < (количество/2); z++)
					{
						if (массив[z] == рост[i])
						{
							goto next;
						}
					}
				}

				else
				{
					массив[i] = рост[i];
				}

				колво_пар++;
			next:
				j++;
				break;
			}
		}
	}

	cout << "Пар учеников с одинаковым ростом: " << колво_пар << endl;

	delete[] рост;

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

	int количество = 0;

	int c;

	cout << "Введите целое число ";
	cin >> n;

	c = n;

	if (n == 0)
	{
		cout << "\nСумма цифр = 0\n";
	}

	else if (n < 0)
	{
		n *= -1;

		for (int i = 1;; i++)
		{
			c /= 10;

			if (c == 0)
			{
				количество = i;
				break;
			}
		}

		int j = 1;

		for (int i = 1; i <= количество; i++)
		{
			for (j;;)
			{
				if (i == количество)
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
		cout << "\nСумма цифр = " << sum << endl;
	}

	else
	{
		for (int i = 1;; i++)
		{
			c /= 10;

			if (c == 0)
			{
				количество = i;
				break;
			}
		}

		int j = 1;

		for (int i = 1; i <= количество; i++)
		{
			for (j;;)
			{
				if (i == количество)
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
		cout << "\nСумма цифр = " << sum << endl;
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

	cout << "Введите целое число ";
	cin >> n;
	
	int z = n;

	int количество;

	if (n < 0)
	{
		n *= -1;
	}

	for (int i = 1;; i++)
	{
		z /= 10;

		if (z == 0)
		{
			количество = i;
			break;
		}
	}

	string буфер;

	буфер.resize(количество);

	int j = 1;

	for (int i = 1; i <= количество; i++)
	{
		for (j;;)
		{
			if (i == количество)
			{
				if ((n / j) == 0)
				{
					буфер[i - 1] = '0';
				}

				else if ((n / j) == 1)
				{
					буфер[i - 1] = '1';
				}

				else if ((n / j) == 2)
				{
					буфер[i - 1] = '2';
				}

				else if ((n / j) == 3)
				{
					буфер[i - 1] = '3';
				}

				else if ((n / j) == 4)
				{
					буфер[i - 1] = '4';
				}

				else if ((n / j) == 5)
				{
					буфер[i - 1] = '5';
				}

				else if ((n / j) == 6)
				{
					буфер[i - 1] = '6';
				}

				else if ((n / j) == 7)
				{
					буфер[i - 1] = '7';
				}

				else if ((n / j) == 8)
				{
					буфер[i - 1] = '8';
				}

				else if ((n / j) == 9)
				{
					буфер[i - 1] = '9';
				}				
				break;
			}

			else
			{
				if ((n / j) % 10 == 0)
				{
					буфер[i - 1] = '0';
				}

				else if ((n / j) % 10 == 1)
				{
					буфер[i - 1] = '1';
				}

				else if ((n / j) % 10 == 2)
				{
					буфер[i - 1] = '2';
				}

				else if ((n / j) % 10 == 3)
				{
					буфер[i - 1] = '3';
				}

				else if ((n / j) % 10 == 4)
				{
					буфер[i - 1] = '4';
				}

				else if ((n / j) % 10 == 5)
				{
					буфер[i - 1] = '5';
				}

				else if ((n / j) % 10 == 6)
				{
					буфер[i - 1] = '6';
				}

				else if ((n / j) % 10 == 7)
				{
					буфер[i - 1] = '7';
				}

				else if ((n / j) % 10 == 8)
				{
					буфер[i - 1] = '8';
				}

				else if ((n / j) % 10 == 9)
				{
					буфер[i - 1] = '9';
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

	for (int i = 0; i < количество; i++)
	{
		if (буфер[i] == '0')
		{
			a ++;
		}

		else if (буфер[i] == '1')
		{
			b ++;
		}

		else if (буфер[i] == '2')
		{
			c ++;
		}

		else if (буфер[i] == '3')
		{
			d ++;
		}

		else if (буфер[i] == '4')
		{
			e ++;
		}

		else if (буфер[i] == '5')
		{
			f ++;
		}

		else if (буфер[i] == '6')
		{
			g ++;
		}

		else if (буфер[i] == '7')
		{
			h ++;
		}

		else if (буфер[i] == '8')
		{
			l ++;
		}

		else if (буфер[i] == '9')
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
	cout << "\nВ записи числа " << sum << " различных цифр" << endl;
	
	return 0;
}
*/

//31+++
/*
int main()
{
	setlocale(LC_ALL, "rus");

	int n;

	cout << "Введите целое число ";
	cin >> n;
		
	n *= n;

	int z = n;

	int количество;

	for (int i = 1;; i++)
	{
		z /= 10;

		if (z == 0)
		{
			количество = i;
			break;
		}
	}

	string буфер;

	буфер.resize(количество);

	int j = 1;

	for (int i = 1; i <= количество; i++)
	{
		for (j;;)
		{
			if (i == количество)
			{
				if ((n / j) == 0)
				{
					буфер[i - 1] = '0';
				}

				else if ((n / j) == 1)
				{
					буфер[i - 1] = '1';
				}

				else if ((n / j) == 2)
				{
					буфер[i - 1] = '2';
				}

				else if ((n / j) == 3)
				{
					буфер[i - 1] = '3';
				}

				else if ((n / j) == 4)
				{
					буфер[i - 1] = '4';
				}

				else if ((n / j) == 5)
				{
					буфер[i - 1] = '5';
				}

				else if ((n / j) == 6)
				{
					буфер[i - 1] = '6';
				}

				else if ((n / j) == 7)
				{
					буфер[i - 1] = '7';
				}

				else if ((n / j) == 8)
				{
					буфер[i - 1] = '8';
				}

				else if ((n / j) == 9)
				{
					буфер[i - 1] = '9';
				}
				break;
			}

			else
			{
				if ((n / j) % 10 == 0)
				{
					буфер[i - 1] = '0';
				}

				else if ((n / j) % 10 == 1)
				{
					буфер[i - 1] = '1';
				}

				else if ((n / j) % 10 == 2)
				{
					буфер[i - 1] = '2';
				}

				else if ((n / j) % 10 == 3)
				{
					буфер[i - 1] = '3';
				}

				else if ((n / j) % 10 == 4)
				{
					буфер[i - 1] = '4';
				}

				else if ((n / j) % 10 == 5)
				{
					буфер[i - 1] = '5';
				}

				else if ((n / j) % 10 == 6)
				{
					буфер[i - 1] = '6';
				}

				else if ((n / j) % 10 == 7)
				{
					буфер[i - 1] = '7';
				}

				else if ((n / j) % 10 == 8)
				{
					буфер[i - 1] = '8';
				}

				else if ((n / j) % 10 == 9)
				{
					буфер[i - 1] = '9';
				}
				j *= 10;
				break;
			}
		}
	}

	for (int i = 0; i <= количество; i++)
	{
		if (буфер[i] == '3')
		{
			cout << "\nВ записи вашего числа, возведённого в квадрат, есть цифра 3\n";
			break;
		}

		else if (i == количество and буфер[i] != '3')
		{
			cout << "\nВ записи числа, возведённого в квадрат, нет цифры 3\n";
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

	cout << "Введите натуральное число ";
	cin >> x;

	if (x <= 0)
	{
		cout << "\nОшибка\n";
	}

	int z = x;

	int количество;

	for (int i = 1;; i++)
	{
		z /= 10;

		if (z == 0)
		{
			количество = i;
			break;
		}
	}

	string буфер;

	буфер.resize(количество);

	int j = 1;

	for (int i = 1; i <= количество; i++)
	{
		for (j;;)
		{
			if (i == количество)
			{
				if ((x / j) == 0)
				{
					буфер[i - 1] = '0';
				}

				else if ((x / j) == 1)
				{
					буфер[i - 1] = '1';
				}

				else if ((x / j) == 2)
				{
					буфер[i - 1] = '2';
				}

				else if ((x / j) == 3)
				{
					буфер[i - 1] = '3';
				}

				else if ((x / j) == 4)
				{
					буфер[i - 1] = '4';
				}

				else if ((x / j) == 5)
				{
					буфер[i - 1] = '5';
				}

				else if ((x / j) == 6)
				{
					буфер[i - 1] = '6';
				}

				else if ((x / j) == 7)
				{
					буфер[i - 1] = '7';
				}

				else if ((x / j) == 8)
				{
					буфер[i - 1] = '8';
				}

				else if ((x / j) == 9)
				{
					буфер[i - 1] = '9';
				}
				break;
			}

			else
			{
				if ((x / j) % 10 == 0)
				{
					буфер[i - 1] = '0';
				}

				else if ((x / j) % 10 == 1)
				{
					буфер[i - 1] = '1';
				}

				else if ((x / j) % 10 == 2)
				{
					буфер[i - 1] = '2';
				}

				else if ((x / j) % 10 == 3)
				{
					буфер[i - 1] = '3';
				}

				else if ((x / j) % 10 == 4)
				{
					буфер[i - 1] = '4';
				}

				else if ((x / j) % 10 == 5)
				{
					буфер[i - 1] = '5';
				}

				else if ((x / j) % 10 == 6)
				{
					буфер[i - 1] = '6';
				}

				else if ((x / j) % 10 == 7)
				{
					буфер[i - 1] = '7';
				}

				else if ((x / j) % 10 == 8)
				{
					буфер[i - 1] = '8';
				}

				else if ((x / j) % 10 == 9)
				{
					буфер[i - 1] = '9';
				}
				j *= 10;
				break;
			}
		}
	}

	for (int i = 0; i <= количество; i++)
	{
		if (буфер[i] == '0')
		{
			буфер[i] = 'g';
		}

		else if (буфер[i] == '5')
		{
			буфер[i] = 'g';
		}
	}

	cout << "\nВаше число без '0' и '5': ";

	for (int i = количество; i >= 0; i--)
	{
		if (буфер[i] != 'g')
		{
			cout << буфер[i];
		}			
	}
	cout << endl;

	return 0;
}
*/


//Файлы
//15

int main()
{
	setlocale(LC_ALL, "rus");

	string начало("start.txt");

	string конечный("end.txt");

	string файл = "";

	using namespace std;

	//-1,5 1,5 -1.5 1.5 0 -0 0, ,0 0. .0 07 AJD 0,,0 0..0 0-0 1 12 123 -1
	//ЗАПИСЬ В ФАЙЛ
	ofstream fout;
	fout.open(конечный);

	if (!fout.is_open())
	{
		cout << "\nОшибка\n";
	}

	else
	{
		fout << "";
	}

	fout.close();

	cout << "Напишите ряд вещественных чисел(через пробел)\n\n";
	
	getline(cin, файл);

	fout.open(начало);
	
	if (!fout.is_open())
	{
		cout << "\nОшибка\n";
	}
	else
	{
		fout << файл;
	}

	fout.close();	

	int конец;

	cout << "\n\nВ какую систему счисления вы хотите его перевести? (введите число от 2 до 9)\n\n";
	
	cin >> конец;
//==============================================================
  //РАБОТА С ПЕРВЫМ ФАЙЛОМ
	ifstream fin;
	fin.open(начало);

	if (!fin.is_open())
	{
		cout << "\nОшибка\n" << endl;
	}

	else
	{
		string имя_строки;

		int i = 0;					

		if (конец < 2 or конец > 9)
		{
			cout << "\nОшибка" << endl;
		}

		else
		{
			string ответ;

			float перевёл = 0;

			while (!fin.eof())
			{
				имя_строки = "";

				fin >> имя_строки;
				//====================================================================
				//СЧИТЫВАЕМ ЧИСЛО
				double j = 1;

				for (int i = имя_строки.size() - 1; i >= 0;)
				{
					//неправильное число
					if (имя_строки[i] != '0' and имя_строки[i] != '1' and имя_строки[i] != '2' and имя_строки[i] != '3' and имя_строки[i] != '4' and имя_строки[i] != '5' and имя_строки[i] != '6' and имя_строки[i] != '7' and имя_строки[i] != '8' and имя_строки[i] != '9' and имя_строки[i] != '-' and имя_строки[i] != ',' and имя_строки[i] != '.')
					{
						имя_строки = "Ошибка";
						break;
					}

					else if (имя_строки[0] == '.' or имя_строки[0] == ',' or (i == (имя_строки.size() - 1) and имя_строки[i] == ',') or (i == (имя_строки.size() - 1) and имя_строки[i] == '.'))
					{
						имя_строки = "Ошибка";
						break;
					}

					else if ((i != 0 and имя_строки[i] == '-') or ((имя_строки[i] == '.' or имя_строки[i] == ',') and (имя_строки[i + 1] == '.' or имя_строки[i + 1] == ',')))
					{
						имя_строки = "Ошибка";
						break;
					}

					else if ((имя_строки[0] == '0' and (имя_строки[1] != '.' or имя_строки[1] != ',') and (имя_строки.size() != 1)) or (имя_строки[0] == '-' and имя_строки[1] == '0' and (имя_строки[2] != '.' or имя_строки[2] != ',')))
					{
						имя_строки = "Ошибка";
						break;
					}
					
					else
					{
						//если отрицательное
						if (имя_строки[0] == '-')
						{
							for (j;;)
							{
								if (имя_строки[i] == '0')
								{
									перевёл -= (0 * j);
								}

								if (имя_строки[i] == '1')
								{
									перевёл -= (1 * j);
								}

								if (имя_строки[i] == '2')
								{
									перевёл -= (2 * j);
								}

								if (имя_строки[i] == '3')
								{
									перевёл -= (3 * j);
								}

								if (имя_строки[i] == '4')
								{
									перевёл -= (4 * j);
								}

								if (имя_строки[i] == '5')
								{
									перевёл -= (5 * j);
								}

								if (имя_строки[i] == '6')
								{
									перевёл -= (6 * j);
								}

								if (имя_строки[i] == '7')
								{
									перевёл -= (7 * j);
								}

								if (имя_строки[i] == '8')
								{
									перевёл -= (8 * j);
								}

								if (имя_строки[i] == '9')
								{
									перевёл -= (9 * j);
								}

								//если отрицательное дробное
								if ((имя_строки[i] == '.') or (имя_строки[i] == ','))
								{
									i = имя_строки.size() - 1;
									j = 1;
									//прибавляем обратно
									for (j;;)
									{
										if (имя_строки[i] == '0')
										{
											перевёл += (0 * j);
										}

										if (имя_строки[i] == '1')
										{
											перевёл += (1 * j);
										}

										if (имя_строки[i] == '2')
										{
											перевёл += (2 * j);
										}

										if (имя_строки[i] == '3')
										{
											перевёл += (3 * j);
										}

										if (имя_строки[i] == '4')
										{
											перевёл += (4 * j);
										}

										if (имя_строки[i] == '5')
										{
											перевёл += (5 * j);
										}

										if (имя_строки[i] == '6')
										{
											перевёл += (6 * j);
										}

										if (имя_строки[i] == '7')
										{
											перевёл += (7 * j);
										}

										if (имя_строки[i] == '8')
										{
											перевёл += (8 * j);
										}

										if (имя_строки[i] == '9')
										{
											перевёл += (9 * j);
										}

										if (перевёл == 0)
										{		
											i--;
											break;
										}

										i--;
										j *= 10;
									}
									//вычитаем дробную часть
									j = 0.1;

									for (int k = (i + 1);k>=0;)
									{
										for (j;;)
										{
											if (k>= имя_строки.size())
											{
												break;
											}

											if (имя_строки[k] == '0')
											{
												перевёл -= (0 * j);
											}

											if (имя_строки[k] == '1')
											{
												перевёл -= (1 * j);
											}

											if (имя_строки[k] == '2')
											{
												перевёл -= (2 * j);
											}

											if (имя_строки[k] == '3')
											{
												перевёл -= (3 * j);
											}

											if (имя_строки[k] == '4')
											{
												перевёл -= (4 * j);
											}

											if (имя_строки[k] == '5')
											{
												перевёл -= (5 * j);
											}

											if (имя_строки[k] == '6')
											{
												перевёл -= (6 * j);
											}

											if (имя_строки[k] == '7')
											{
												перевёл -= (7 * j);
											}

											if (имя_строки[k] == '8')
											{
												перевёл -= (8 * j);
											}

											if (имя_строки[k] == '9')
											{
												перевёл -= (9 * j);
											}

											k++;
											j /= 10;
										}

										k = (i - 1);
										j = 1;

										//вычитаем целую часть
										for (j;;)
										{
											if (имя_строки[k] == '-')
											{
												k--;
												break;
											}

											if (имя_строки[k] == '0')
											{
												перевёл -= (0 * j);
											}

											if (имя_строки[k] == '1')
											{
												перевёл -= (1 * j);
											}

											if (имя_строки[k] == '2')
											{
												перевёл -= (2 * j);
											}

											if (имя_строки[k] == '3')
											{
												перевёл -= (3 * j);
											}

											if (имя_строки[k] == '4')
											{
												перевёл -= (4 * j);
											}

											if (имя_строки[k] == '5')
											{
												перевёл -= (5 * j);
											}

											if (имя_строки[k] == '6')
											{
												перевёл -= (6 * j);
											}

											if (имя_строки[k] == '7')
											{
												перевёл -= (7 * j);
											}

											if (имя_строки[k] == '8')
											{
												перевёл -= (8 * j);
											}

											if (имя_строки[k] == '9')
											{
												перевёл -= (9 * j);
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

						//если дробное положительное
						else if ((имя_строки[i] == '.') or (имя_строки[i] == ','))
						{
						i = имя_строки.size() - 1;
						j = 1;
							//обратно вычитаем
							for (j;;)
							{
								if (имя_строки[i] == '0')
								{
									перевёл -= (0 * j);
								}

								if (имя_строки[i] == '1')
								{
									перевёл -= (1 * j);
								}

								if (имя_строки[i] == '2')
								{
									перевёл -= (2 * j);
								}

								if (имя_строки[i] == '3')
								{
									перевёл -= (3 * j);
								}

								if (имя_строки[i] == '4')
								{
									перевёл -= (4 * j);
								}

								if (имя_строки[i] == '5')
								{
									перевёл -= (5 * j);
								}

								if (имя_строки[i] == '6')
								{
									перевёл -= (6 * j);
								}

								if (имя_строки[i] == '7')
								{
									перевёл -= (7 * j);
								}

								if (имя_строки[i] == '8')
								{
									перевёл -= (8 * j);
								}

								if (имя_строки[i] == '9')
								{
									перевёл -= (9 * j);
								}

								if (перевёл == 0)
								{
									i--;
									break;
								}

								i--;
								j *= 10;
							}

							//прибавляем дробную часть
							j = 0.1;

							for (int k = (i + 1); k >= 0;)
							{
								for (j;;)
								{
									if (k >= имя_строки.size())
									{
										break;
									}

									if (имя_строки[k] == '0')
									{
										перевёл += (0 * j);
									}

									if (имя_строки[k] == '1')
									{
										перевёл += (1 * j);
									}

									if (имя_строки[k] == '2')
									{
										перевёл += (2 * j);
									}

									if (имя_строки[k] == '3')
									{
										перевёл += (3 * j);
									}

									if (имя_строки[k] == '4')
									{
										перевёл += (4 * j);
									}

									if (имя_строки[k] == '5')
									{
										перевёл += (5 * j);
									}

									if (имя_строки[k] == '6')
									{
										перевёл += (6 * j);
									}

									if (имя_строки[k] == '7')
									{
										перевёл += (7 * j);
									}

									if (имя_строки[k] == '8')
									{
										перевёл += (8 * j);
									}

									if (имя_строки[k] == '9')
									{
										перевёл += (9 * j);
									}

									k++;
									j /= 10;
								}

								k = (i - 1);
								j = 1;

								//прибавляем целую часть
								for (j;;)
								{
									if (k < 0)
									{
										k--;
										break;
									}

									if (имя_строки[k] == '0')
									{
										перевёл += (0 * j);
									}

									if (имя_строки[k] == '1')
									{
										перевёл += (1 * j);
									}

									if (имя_строки[k] == '2')
									{
										перевёл += (2 * j);
									}

									if (имя_строки[k] == '3')
									{
										перевёл += (3 * j);
									}

									if (имя_строки[k] == '4')
									{
										перевёл += (4 * j);
									}

									if (имя_строки[k] == '5')
									{
										перевёл += (5 * j);
									}

									if (имя_строки[k] == '6')
									{
										перевёл += (6 * j);
									}

									if (имя_строки[k] == '7')
									{
										перевёл += (7 * j);
									}

									if (имя_строки[k] == '8')
									{
										перевёл += (8 * j);
									}

									if (имя_строки[k] == '9')
									{
										перевёл += (9 * j);
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
							//если целое неотрицательное
							for (j;;)
							{
								if (имя_строки[i] == '0')
								{
									перевёл += (0 * j);
								}

								if (имя_строки[i] == '1')
								{
									перевёл += (1 * j);
								}

								if (имя_строки[i] == '2')
								{
									перевёл += (2 * j);
								}

								if (имя_строки[i] == '3')
								{
									перевёл += (3 * j);
								}

								if (имя_строки[i] == '4')
								{
									перевёл += (4 * j);
								}

								if (имя_строки[i] == '5')
								{
									перевёл += (5 * j);
								}

								if (имя_строки[i] == '6')
								{
									перевёл += (6 * j);
								}

								if (имя_строки[i] == '7')
								{
									перевёл += (7 * j);
								}

								if (имя_строки[i] == '8')
								{
									перевёл += (8 * j);
								}

								if (имя_строки[i] == '9')
								{
									перевёл += (9 * j);
								}

								i--;
								j *= 10;
								break;
							}
						}
					}
				}

				//===================================================================	
			//ПЕРЕВОДИМ ИХ В ДРУГУЮ СИСТЕМУ СЧИСЛЕНИЯ		
			
			//если ошибка

				if (имя_строки == "Ошибка")
				{	
					//ЗАПИСЫВАЕМ В ДРУГОЙ ФАЙЛ		
					fout.open(конечный, ofstream::app);

					if (!fout.is_open())
					{
						cout << "\nОшибка\n";
					}

					else
					{
						fout << имя_строки << " ";
					}

					fout.close();
				}

				//если отрицательное
				else if (перевёл < 0)
				{
					int i = 1;			

					int k = 1;

					int a = int(перевёл) * (-1);

					float b = (перевёл - (int)перевёл) * (-1);

					//перевод целой части
					for (i; (int(a / конец)) >= 0; i++)
					{
						if ((a - int(a / конец) * конец) == 8)
						{
							ответ.resize(i + 1);
							ответ[i] = '8';
						}

						else if ((a - int(a / конец) * конец) == 7)
						{
							ответ.resize(i + 1);
							ответ[i] = '7';
						}

						else if ((a - int(a / конец) * конец) == 6)
						{
							ответ.resize(i + 1);
							ответ[i] = '6';
						}

						else if ((a - int(a / конец) * конец) == 5)
						{
							ответ.resize(i + 1);
							ответ[i] = '5';
						}

						else if ((a - int(a / конец) * конец) == 4)
						{
							ответ.resize(i + 1);
							ответ[i] = '4';
						}

						else if ((a - int(a / конец) * конец) == 3)
						{
							ответ.resize(i + 1);
							ответ[i] = '3';
						}

						else if ((a - int(a / конец) * конец) == 2)
						{
							ответ.resize(i + 1);
							ответ[i] = '2';
						}

						else if ((a - int(a / конец) * конец) == 1)
						{
							ответ.resize(i + 1);
							ответ[i] = '1';
						}

						else if ((a - int(a / конец) * конец) == 0)
						{
							ответ.resize(i + 1);
							ответ[i] = '0';
						}

						a = int(a / конец);

						if (a == 0)
						{
							i++;
							break;
						}
					}

					string kek;

					int u = 0;					

					kek.resize(ответ.size());

					for (int l = ответ.size() - 1; l >= 0; l--)
					{
						for (u;;)
						{
							kek[u] = ответ[l];
							u++;
							break;
						}
					}
					ответ.resize(ответ.size());

					for (int y = 1; y <= ответ.size() - 1; y++)
					{
						ответ[y] = kek[y-1];
					}

					if (b == 0)
					{
						goto there;
					}

					ответ.resize(i + 1);
					ответ[i] = '.';

					i++;

					//перевод дробной части
					for (k; k < 6; k++)
					{
						for (i;; i++)
						{
							if (int(b * конец) == 8)
							{
								ответ.resize(i + 1);
								ответ[i] = '8';
							}

							else if (int(b * конец) == 7)
							{
								ответ.resize(i + 1);
								ответ[i] = '7';
							}

							else if (int(b * конец) == 6)
							{
								ответ.resize(i + 1);
								ответ[i] = '6';
							}

							else if (int(b * конец) == 5)
							{
								ответ.resize(i + 1);
								ответ[i] = '5';
							}

							else if (int(b * конец) == 4)
							{
								ответ.resize(i + 1);
								ответ[i] = '4';
							}

							else if (int(b * конец) == 3)
							{
								ответ.resize(i + 1);
								ответ[i] = '3';
							}

							else if (int(b * конец) == 2)
							{
								ответ.resize(i + 1);
								ответ[i] = '2';
							}

							else if (int(b * конец) == 1)
							{
								ответ.resize(i + 1);
								ответ[i] = '1';
							}

							else if (int(b * конец) == 0)
							{
								ответ.resize(i + 1);
								ответ[i] = '0';
							}

							b = ((b * конец) - int(b * конец));

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

					ответ[0] = '-';
					//ЗАПИСЫВАЕМ В ДРУГОЙ ФАЙЛ		

					fout.open(конечный, ofstream::app);

					if (!fout.is_open())
					{
						cout << "\nОшибка\n";
					}

					else
					{
						fout << ответ << " ";
					}

					fout.close();
				}

				//если равно 0
				else if (перевёл == 0)
				{
					ответ[0] = '0';

					//ЗАПИСЫВАЕМ В ДРУГОЙ ФАЙЛ		
					fout.open(конечный, ofstream::app);

					if (!fout.is_open())
					{
						cout << "\nОшибка\n";
					}

					else
					{
						fout << "0 ";
					}

					fout.close();
				}

				//если положительное
				else
				{
					int i = 0;

					int a = int(перевёл);

					float b = (перевёл - (int)перевёл);

					//перевод целой части
					for (i; (int(a / конец)) >= 0; i++)
					{
						if ((a - int(a / конец) * конец) == 8)
						{
							ответ.resize(i + 1);
							ответ[i] = '8';
						}

						else if ((a - int(a / конец) * конец) == 7)
						{
							ответ.resize(i + 1);
							ответ[i] = '7';
						}

						else if ((a - int(a / конец) * конец) == 6)
						{
							ответ.resize(i + 1);
							ответ[i] = '6';
						}

						else if ((a - int(a / конец) * конец) == 5)
						{
							ответ.resize(i + 1);
							ответ[i] = '5';
						}

						else if ((a - int(a / конец) * конец) == 4)
						{
							ответ.resize(i + 1);
							ответ[i] = '4';
						}

						else if ((a - int(a / конец) * конец) == 3)
						{
							ответ.resize(i + 1);
							ответ[i] = '3';
						}

						else if ((a - int(a / конец) * конец) == 2)
						{
							ответ.resize(i + 1);
							ответ[i] = '2';
						}

						else if ((a - int(a / конец) * конец) == 1)
						{
							ответ.resize(i + 1);
							ответ[i] = '1';
						}

						else if ((a - int(a / конец) * конец) == 0)
						{
							ответ.resize(i + 1);
							ответ[i] = '0';
						}

						a = int(a / конец);

						if (a == 0)
						{
							i++;
							break;
						}
					}

					string kek;

					int u = 0;						

					kek.resize(ответ.size());

					for (int l = ответ.size() - 1; l >= 0; l--)						
					{
						for (u;;)
						{
							kek[u] = ответ[l];
							u++;
							break;
						}
					}
					
					for (int y = 0; y <= ответ.size() - 1; y++)
					{
						ответ[y] = kek[y];
					}

					if (b == 0)
					{
						goto here;
					}

					ответ.resize(i + 1);
					ответ[i] = '.';

					i++;

					//перевод дробной части
					for (int z = 1;z<6;)
					{
						for (i; (int(b * конец)) >= 0; i++)
						{
							if ((b * конец) == 8)
							{
								ответ.resize(i + 1);
								ответ[i] = '8';
							}

							else if (int(b * конец) == 7)
							{
								ответ.resize(i + 1);
								ответ[i] = '7';
							}

							else if (int(b * конец) == 6)
							{
								ответ.resize(i + 1);
								ответ[i] = '6';
							}

							else if (int(b * конец) == 5)
							{
								ответ.resize(i + 1);
								ответ[i] = '5';
							}

							else if (int(b * конец) == 4)
							{
								ответ.resize(i + 1);
								ответ[i] = '4';
							}

							else if (int(b * конец) == 3)
							{
								ответ.resize(i + 1);
								ответ[i] = '3';
							}

							else if (int(b * конец) == 2)
							{
								ответ.resize(i + 1);
								ответ[i] = '2';
							}

							else if (int(b * конец) == 1)
							{
								ответ.resize(i + 1);
								ответ[i] = '1';
							}

							else if (int(b * конец) == 0)
							{
								ответ.resize(i + 1);
								ответ[i] = '0';
							}
							b = ((b * конец) - int(b * конец));

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

					//ЗАПИСЫВАЕМ В ДРУГОЙ ФАЙЛ		
					fout.open(конечный, ofstream::app);

					if (!fout.is_open())
					{
						cout << "\nОшибка\n";
					}

					else
					{
						fout << ответ << " ";
					}

					fout.close();
				}		

				перевёл = 0;
			}						
		}		
	}
	
	fin.close();
//========================================================
	//ЧИТАЕМ В ДРУГОЙ ФАЙЛ		
	cout << "\n\nДругой файл с получившимся рядом чисел:\n\n";

	fin.open(конечный);

	if (!fin.is_open())
	{
		cout << "Ошибка\n" << endl;
	}

	else
	{
		string имя_строки;

		while (!fin.eof())
		{
			имя_строки = "";

			fin >> имя_строки;

			cout << имя_строки << " ";
		}
	}

	fin.close();

	cout << endl;

	return 0;
}
