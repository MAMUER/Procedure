#include <iostream> 
#include <fstream>
#include <string>

using namespace std;

/*
int main()
{
	setlocale(LC_ALL, "rus");

	string path("file.txt");

	double g = 0;

	string h;

	getline(cin, h);

	ofstream fout;
	fout.open(path);

	if (!fout.is_open())
	{
		cout << "Ошибка\n";
	}
	else
	{
		fout << h;
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
		string k;

		double j;

		while (!fin.eof())
		{
			k = "";

			j = 1;			
			fin >> k;

			for (int i = 0; i < k.size(); i++)
			{
				if (k[i] != '0' and k[i] != '1' and k[i] != '2' and k[i] != '3' and k[i] != '4' and k[i] != '5' and k[i] != '6' and k[i] != '7' and k[i] != '8' and k[i] != '9' and k[i] != '-' and k[i] != ',' and k[i] != '.')
				{
					goto end;
				}

				else if (kë[0] == '.' or k[0] == ',' or (i == (k.size() - 1) and k[i] == ',') or (i == (k.size() - 1) and k[i] == '.'))
				{
					goto end;
				}

				else if ((i != 0 and k[i] == '-') or ((k[i] == '.' or k[i] == ',') and (k[i + 1] == '.' or k[i + 1] == ',')))
				{
					goto end;
				}

				else if ((k[0] == '0' and (k[1] != '.' or k[1] != ',') and (k.size() != 1)) or (k[0] == '-' and k[1] == '0' and (k[2] != '.' or k[2] != ',')))
				{
					goto end;
				}

				else if (k == "0")
				{
					goto end;
				}
			}

			for (int i = k.size() - 1; i >= 0;)
			{
				if (k[0] == '-')
				{
					for (j;;)
					{
						if (k[i] == '0')
						{
							g -= (0 * j);
						}

						if (k[i] == '1')
						{
							g -= (1 * j);
						}

						if (k[i] == '2')
						{
							g -= (2 * j);
						}

						if (k[i] == '3')
						{
							g -= (3 * j);
						}

						if (k[i] == '4')
						{
							g -= (4 * j);
						}

						if (k[i] == '5')
						{
							g -= (5 * j);
						}

						if (k[i] == '6')
						{
							g -= (6 * j);
						}

						if (k[i] == '7')
						{
							g -= (7 * j);
						}

						if (k[i] == '8')
						{
							g -= (8 * j);
						}

						if (k[i] == '9')
						{
							g -= (9 * j);
						}
						
						if ((k[i] == '.') or (k[i] == ','))
						{
							i = k.size() - 1;
							j = 1;
							
							for (j;;)
							{
								if (k[i] == '0')
								{
									g += (0 * j);
								}

								if (k[i] == '1')
								{
									g += (1 * j);
								}

								if (k[i] == '2')
								{
									g += (2 * j);
								}

								if (k[i] == '3')
								{
									g += (3 * j);
								}

								if (k[i] == '4')
								{
									g += (4 * j);
								}

								if (k[i] == '5')
								{
									g += (5 * j);
								}

								if (k[i] == '6')
								{
									g += (6 * j);
								}

								if (k[i] == '7')
								{
									g += (7 * j);
								}

								if (k[i] == '8')
								{
									g += (8 * j);
								}

								if (k[i] == '9')
								{
									g += (9 * j);
								}

								if ((k[i] == '.') or (k[i] == ','))
								{
									j = 0.1;
									break;
								}

								i--;
								j *= 10;
							}
							
							for (int q = (i + 1); q >= 0;)
							{
								for (j;;)
								{
									if (q > k.size())
									{
										break;
									}

									if (k[q] == '0')
									{
										g -= (0 * j);
									}

									if (k[q] == '1')
									{
										g -= (1 * j);
									}

									if (k[q] == '2')
									{
										g -= (2 * j);
									}

									if (k[q] == '3')
									{
										g -= (3 * j);
									}

									if (k[q] == '4')
									{
										g -= (4 * j);
									}

									if (k[q] == '5')
									{
										g -= (5 * j);
									}

									if (k[q] == '6')
									{
										g -= (6 * j);
									}

									if (k[q] == '7')
									{
										g -= (7 * j);
									}

									if (k[q] == '8')
									{
										g -= (8 * j);
									}

									if (k[q] == '9')
									{
										g -= (9 * j);
									}

									q++;
									j /= 10;
								}

								q = (i - 1);
								j = 1;

								for (j;;)
								{
									if (k[q] == '-')
									{
										k--;
										break;
									}

									if (k[q] == '0')
									{
										g -= (0 * j);
									}

									if (k[q] == '1')
									{
										g -= (1 * j);
									}

									if (k[q] == '2')
									{
										g -= (2 * j);
									}

									if (k[q] == '3')
									{
										g -= (3 * j);
									}

									if (k[q] == '4')
									{
										g -= (4 * j);
									}

									if (k[q] == '5')
									{
										g -= (5 * j);
									}

									if (k[q] == '6')
									{
										g -= (6 * j);
									}

									if (k[q] == '7')
									{
										g -= (7 * j);
									}

									if (k[q] == '8')
									{
										g -= (8 * j);
									}

									if (k[q] == '9')
									{
										g -= (9 * j);
									}

									q--;
									j *= 10;
								}

								if (q < 0)
								{
									i = q;
									break;
								}
							}
						}

						i--;
						j *= 10;
						break;
					}
				}

				else
				{

					if ((k[i] == '.') or (k[i] == ','))
					{
						i = k.size() - 1;
						j = 1;
						for (j;;)
						{
							if (k[i] == '0')
							{
								g -= (0 * j);
							}

							if (k[i] == '1')
							{
								g -= (1 * j);
							}

							if (k[i] == '2')
							{
								g -= (2 * j);
							}

							if (k[i] == '3')
							{
								g -= (3 * j);
							}

							if (k[i] == '4')
							{
								g -= (4 * j);
							}

							if (k[i] == '5')
							{
								g -= (5 * j);
							}

							if (k[i] == '6')
							{
								g -= (6 * j);
							}

							if (k[i] == '7')
							{
								g -= (7 * j);
							}

							if (k[i] == '8')
							{
								g -= (8 * j);
							}

							if (k[i] == '9')
							{
								g -= (9 * j);
							}

							if ((k[i] == '.') or (k[i] == ','))
							{
								j = 0.1;
								break;
							}

							i--;
							j *= 10;
						}

						for (int q = (i + 1);;)
						{
							for (j;;)
							{
								if (q > k.size())
								{
									break;
								}

								if (k[q] == '0')
								{
									g += (0 * j);
								}

								if (k[q] == '1')
								{
									g += (1 * j);
								}

								if (k[q] == '2')
								{
									g += (2 * j);
								}

								if (k[q] == '3')
								{
									g += (3 * j);
								}

								if (k[q] == '4')
								{
									g += (4 * j);
								}

								if (k[q] == '5')
								{
									g += (5 * j);
								}

								if (k[q] == '6')
								{
									g += (6 * j);
								}

								if (k[q] == '7')
								{
									g += (7 * j);
								}

								if (k[q] == '8')
								{
									g += (8 * j);
								}

								if (k[q] == '9')
								{
									g += (9 * j);
								}
								q++;
								j /= 10;
							}

							q = (i - 1);
							j = 1;
							for (j;;)
							{
								if (q < 0)
								{
									break;
								}

								if (k[q] == '0')
								{
									g += (0 * j);
								}

								if (k[q] == '1')
								{
									g += (1 * j);
								}

								if (k[q] == '2')
								{
									g += (2 * j);
								}

								if (k[q] == '3')
								{
									g += (3 * j);
								}

								if (k[q] == '4')
								{
									g += (4 * j);
								}

								if (k[q] == '5')
								{
									g += (5 * j);
								}

								if (k[q] == '6')
								{
									g += (6 * j);
								}

								if (k[q] == '7')
								{
									g += (7 * j);
								}

								if (k[q] == '8')
								{
									g += (8 * j);
								}

								if (k[q] == '9')
								{
									g += (9 * j);
								}

								q--;
								j *= 10;
							}

							if (q < 0)
							{
								i = -1;
								break;
							}
						}
					}

					else
					{
						for (j;;)
						{
							if (k[i] == '0')
							{
								g += (0 * j);
							}

							if (k[i] == '1')
							{
								g += (1 * j);
							}

							if (k[i] == '2')
							{
								g += (2 * j);
							}

							if (k[i] == '3')
							{
								g += (3 * j);
							}

							if (k[i] == '4')
							{
								g += (4 * j);
							}

							if (k[i] == '5')
							{
								g += (5 * j);
							}

							if (k[i] == '6')
							{
								g += (6 * j);
							}

							if (k[i] == '7')
							{
								g += (7 * j);
							}

							if (k[i] == '8')
							{
								g += (8 * j);
							}

							if (k[i] == '9')
							{
								g += (9 * j);
							}

							i--;
							j *= 10;
							break;
						}
					}
				}
			}
		end:
			int z = 0;
		}
	}
	fin.close();

	cout << "\n = " << g << endl;

	return 0;
}
*/

/*
int sign(double a)
{
	setlocale(LC_ALL, "rus");

	if (a<0)
	{
		
	}

	else if (a>0)
	{
		
	}

	else if (a==0)
	{
		
	}

	else
	{
		cout << "Ошибка";
	}
	return 0;
}

int main()
{
	setlocale(LC_ALL, "rus");

	double x;

	cin >> x;

	sign(x);

	return 0;
}
*/

/*
int Sofsquare()
{
	setlocale(LC_ALL, "rus");

	double a, b;

	cin >> a;

	cin >> b;

	cout << endl;

	if (a <= 0 or b<=0)
	{
		
	}

	else
	{
		cout << a * b << endl;
	}

	return 0;
}

int Softriangle()
{
	setlocale(LC_ALL, "rus");

	double h, a;

	cin >> a;

	cin >> h;

	cout << endl;

	if (a <= 0 or h <= 0)
	{
		
	}

	else
	{
		cout << (a * h)/2 << endl;
	}
	return 0;
}

int Sofround()
{
	setlocale(LC_ALL, "rus");

	const double PI = 3.14;

	double r;

	cin >> r;

	cout << endl;

	if (r <= 0)
	{
		
	}

	else
	{
		cout << PI*r*r << endl;
	}
	return 0;
}

int main()
{
	int x;

	setlocale(LC_ALL, "rus");

	cin >> x;

	switch (x)
	{
	case 1:
		Sofsquare();
		break;

	case 2:
		Softriangle();
		break;

	case 3:
		Sofround();
		break;

	default:
		break;
	}

	return 0;
}
*/

/*
#include <windows.h>
#include < conio.h >

int main()
{
	HWND myconsole = GetConsoleWindow();

	HDC mydc = GetDC(myconsole);

	COLORREF COLOR = RGB(255, 0, 0);

	int a = 35;

	int b = 0;

	int c = 0;

	for (int z = 0; z < 13; z++)
	{
		for (int i = 50; i < 900; i++)
		{
			for (b = c; b < a; b++)
			{
				SetPixel(mydc, i, b, COLOR);
			}
		}

		if (z % 2 == 0)
		{
			COLOR = RGB(255, 255, 255);
		}

		else
		{
			COLOR = RGB(255, 0, 0);
		}
		c += 35;
		b += c;
		a += 35;
	}

	COLOR = RGB(0, 0, 255);

	for (int i = 50; i < 350; i++)
	{
		for (int j = 0; j < 245; j++)
		{
			SetPixel(mydc, i, j, COLOR);
		}
	}

	COLOR = RGB(255, 255, 255);

	int a = 60;
	int b = 75;
	int c = 10;
	int d = 25;
	for (int n = 0; n < 6; n++)
	{
		for (int m = 0; m < 8; m++)
		{
			for (int i = a; i < b; i++)
			{
				for (int j = c; j < d; j++)
				{
					SetPixel(mydc, i, j, COLOR);
				}
			}
			a += 37;
			b += 37;
		}
		a = 60;
		b = 75;
		c += 40;
		d += 40;
	}

	_getch();

	ReleaseDC(myconsole, mydc);

	return 0;
}
*/

/*
int main()
{
	setlocale(LC_ALL, "rus");

	string q;

	int w = 0;

	cin >> q;

	for (int i = 0; i < q.size(); i++)
	{
		if (q.size() > 3)
		{
			if (q[i] == 'M' and q[i + 1] == 'M' and q[i + 2] == 'M' and q[i + 3] == 'M')
			{
				w = 0;
				break;
			}

			else if (q[i] == 'C' and q[i + 1] == 'C' and q[i + 2] == 'C' and q[i + 3] == 'C')
			{
				w = 0;
				break;
			}

			else if (q[i] == 'X' and q[i + 1] == 'X' and q[i + 2] == 'X' and q[i + 3] == 'X')
			{
				w = 0;
				break;
			}

			else if (q[i] == 'I' and q[i + 1] == 'I' and q[i + 2] == 'I' and q[i + 3] == 'I')
			{
				w = 0;
				break;
			}
		}

		if (q.size() > 2)
		{
			if (q[i] == 'I' and (q[i + 1] == 'V' or q[i + 1] == 'X') and (i + 2) <= (q.size() - 1))
			{
				w = 0;
				break;
			}

			else if (q[i] == 'X' and (q[i + 1] == 'L' or q[i + 1] == 'C') and (i + 2) <= (q.size() - 1))
			{
				w = 0;
				break;
			}

			else if (q[i] == 'C' and (q[i + 1] == 'D' or q[i + 1] == 'M') and (i + 2) <= (q.size() - 1))
			{
				w = 0;
				break;
			}
		}

		if (q.size() > 1)
		{
			if (q[i] == 'D' and ((q[i + 1] == 'D') or (q[i + 1] == 'M')))
			{
				w = 0;
				break;
			}

			else if (q[i] == 'L' and ((q[i + 1] == 'L') or (q[i + 1] == 'C')))
			{
				w = 0;
				break;
			}

			else if (q[i] == 'V' and ((q[i + 1] == 'V') or (q[i + 1] == 'X')))
			{
				w = 0;
				break;
			}

			else if (q[i] == 'I' and (q[i + 1] == 'L' or q[i + 1] == 'C' or q[i + 1] == 'D' or q[i + 1] == 'M'))
			{
				w = 0;
				break;
			}

			else if (q[i] == 'X' and (q[i + 1] == 'D' or q[i + 1] == 'M'))
			{
				w = 0;
				break;
			}
		}

		switch (q[i])
		{
		case 'M':
			w += 1000;
			break;

		case 'D':
			w += 500;
			break;

		case 'C':
			w += 100;
			if ((i + 1) < q.size() and q[i + 1] != 'C' and q[i + 1] != 'L' and q[i + 1] != 'X' and q[i + 1] != 'V' and q[i + 1] != 'I')
			{
				w -= 200;
			}
			break;

		case 'L':
			w += 50;
			break;

		case 'X':
			w += 10;
			if ((i+1)<q.size() and q[i + 1] != 'X' and q[i + 1] != 'V' and q[i + 1] != 'I')
			{
				w -= 20;
			}
			break;

		case 'V':
			w += 5;
			break;

		case 'I':
			w += 1;
			if ((i + 1) < q.size() and q[i + 1] != 'I')
			{
				w -= 2;
			}
			break;

		default:
			w = 0;
			break;
		}

		if (w == 0)
		{
			break;
		}
	}

	if (w == 0)
	{
		cout << "\nОшибка" << endl;
	}

	else
	{
		cout << w << endl;
	}

	return 0;
}
*/

/*
#include <windows.h>
#include < conio.h >

int main()
{
	HWND myconsole = GetConsoleWindow();

	HDC mydc = GetDC(myconsole);

	float const PI = 3.14;

	int pixel = 0;

	COLORREF COLOR = RGB(255, 255, 255);

	for (double i = 0; i < PI * 4; i += 0.05)
	{
		SetPixel(mydc, pixel, (int)(50 + 25 * sin(i)), COLOR);
		pixel += 1;
	}
	
	pixel = 0;
	COLOR = RGB(255, 0, 0);

	for (double i = 0; i < PI * 4; i += 0.05)
	{
		SetPixel(mydc, pixel, 50, COLOR);
		pixel += 1;
	}

	pixel = 20;

	for (double i = 0; i < PI; i += 0.05)
	{
		SetPixel(mydc, 177.5, pixel, COLOR);
		pixel += 1;
	}

	_getch(); 

	ReleaseDC(myconsole, mydc); 

	return 0;
}
*/

/*
int main()
{
	setlocale(LC_ALL, "rus");

	int m, c, i;

	int z = 0, s = 0;

	cin >> i;

	cin >> m;

	cin >> c;

	if (c == 0 or i < 0)
	{
		cout << "\nОшибка" << endl;
	}

	else
	{
		while (z <= i)
		{
			s = ((m * s + z) % c);
			z++;
		}
		cout << "\ns = " << s << endl;
	}

	return 0;
}
*/

/*
int main()
{
	setlocale(LC_ALL, "rus");

	const int LINES = 3;
	const int COLS = 2;
	const int SAME = 4;

	double A[LINES][SAME]
	{
		{5,2,0,10},
		{3, 5, 2, 5},
		{20, 0, 0, 0}
	};

	double B[SAME][COLS]
	{
		{1.2,0.5},
		{2.8,0.4},
		{5,1},
		{2,1.5}
	};

	double C[LINES][COLS]{};

	int z = 0;
	int k = 0;

	for (k; k < LINES; k++)
	{
		for (z; z < COLS; z++)
		{
			for (int a = 0; a < LINES; a++)
			{				
				for (int b = 0; b < COLS; b++)
				{					
					int j = 0;
					for (int i = 0; i < SAME; i++)
					{
						for (j; j < SAME;)
						{
							C[k][z] += A[a][j] * B[i][b];
							j++;
							break;
						}
					}
					z++;
				}
				k++;
				z = 0;
			}
			goto next;
		}
	}
	next:
	for (int i=0; i < LINES; i++)
	{
		for (int j=0; j < COLS; j++)
		{
			cout << C[i][j] << "\t";
		}
		cout << endl;
	}

	//1
	cout << "\Ошибка 1\n";

	if (C[0][0] > C[1][0])
	{
		if (C[0][0] > C[2][0])
		{
			if (C[1][0] > C[2][0])
			{
			}

			if (C[2][0] > C[1][0])
			{
			}

			if (C[2][0] == C[1][0])
			{
			}
		}

		if (C[0][0] < C[2][0])
		{
		}

		if (C[0][0] == C[2][0])
		{
		}
	}

	if (C[0][0] < C[1][0])
	{
		if (C[0][0] > C[2][0])
		{
		}

		if (C[0][0] < C[2][0])
		{
			if (C[1][0] > C[2][0])
			{
			}

			if (C[2][0] > C[1][0])
			{
			}

			if (C[2][0] == C[1][0])
			{
			}
		}

		if (C[0][0] == C[2][0])
		{}
	}

	if (C[0][0] == C[1][0])
	{
		if (C[0][0] > C[2][0])
		{}

		if (C[0][0] < C[2][0])
		{}

		if (C[0][0] == C[2][0])
		{}
	}

	//2
	cout << "\nошибка 2\n";

	if (C[0][1] > C[1][1])
	{
		if (C[0][0] > C[2][0])
		{
		if (C[1][0] > C[2][0])
			{}

			if (C[2][0] > C[1][0])
			{}

			if (C[2][0] == C[1][0])
			{}
		}

		if (C[0][0] < C[2][0])
		{}

		if (C[0][0] == C[2][0])
		{}
	}

	if (C[0][1] < C[1][1])
	{
		if (C[0][0] > C[2][0])
		{}

		if (C[0][0] < C[2][0])
		{
			if (C[1][0] > C[2][0])
			{}

			if (C[2][0] > C[1][0])
			{}

			if (C[2][0] == C[1][0])
			{
			}
		}

		if (C[0][0] == C[2][0])
		{
		}
	}

	if (C[0][1] == C[1][1])
	{
		if (C[0][0] > C[2][0])
		{}

		if (C[0][0] < C[2][0])
		{}

		if (C[0][0] == C[2][0])
		{}
	}

	//3
	cout << "\nОшибка 3\n";

	double a;

	a = C[0][0] + C[1][0] + C[2][0];

	cout << a <<endl;

	//4
	cout << "\nОшибка 4\n";

	double b;

	b = C[0][1] + C[1][1] + C[2][1];

	cout << b << endl;

	//5
	cout << "\nошибка 5\n";

	cout << a + b << endl;

	return 0;
}
*/

//int main()
//{
//	setlocale(LC_ALL, "rus");
//
//	string q;
//	
//	int w, e;
//
//	double r¸t = 0;
//
//	cin >> q;
//	
//	cin >> w;
//
//	cin >> e;
//
//	int y = 0;
//
//	for (int i = 0; i < q.size(); i++)
//	{
//		if (i > 0 and q[i] == '-')
//		{
//			q = "a";
//		}
//
//		else if (q[i] == ',' or q[i] == '.')
//		{
//			y++;
//			if (y > 1)
//			{
//				q = "a";
//				break;
//			}
//		}
//	}
//
//	if (w < 2 or e < 2 or w>16 or e>16)
//	{
//		q = "a";
//	}
//
//	else if (q == "-0" or q[q.size()-1]==',' or q[q.size() - 1] == '.' or q[q.size() - 1] == '-' or q[0] == ',' or q[0] == '.' or (q.size() > 1 and q[0] == '0'))
//	{
//		q = "a";
//	}
//
//	else
//	{
//		switch (w)
//		{
//		case 2:
//			for (int i = 0; i < q.size(); i++)
//			{
//				if (÷èñëî[i] != '-' and q[i] != ',' and q[i] != '.' and q[i] != '0' and q[i] != '1')
//				{
//					q = "a";
//					break;
//				}
//			}
//			break;
//
//		case 3:
//			for (int i = 0; i < q.size(); i++)
//			{
//				if (q[i] != '-' and q[i] != ',' and q[i] != '.' and q[i] != '0' and q[i] != '1' and q[i] != '2')
//				{
//					q = "a";
//					break;
//				}
//			}
//			break;
//
//		case 4:
//			for (int i = 0; i < q.size(); i++)
//			{
//				if (q[i] != '-' and q[i] != ',' and q[i] != '.' and q[i] != '0' and q[i] != '1' and q[i] != '2' and q[i] != '3')
//				{
//					q = "a";
//					break;
//				}
//			}
//			break;
//
//		case 5:
//			for (int i = 0; i < q.size(); i++)
//			{
//				if (q[i] != '-' and q[i] != ',' and q[i] != '.' and q[i] != '0' and q[i] != '1' and q[i] != '2' and q[i] != '3' and q[i] != '4')
//				{
//					q = "a";
//					break;
//				}
//			}
//			break;
//
//		case 6:
//			for (int i = 0; i < q.size(); i++)
//			{
//				if (q[i] != '-' and q[i] != ',' and q[i] != '.' and q[i] != '0' and q[i] != '1' and q[i] != '2' and q[i] != '3' and q[i] != '4' and q[i] != '5')
//				{
//					q = "a";
//					break;
//				}
//			}
//			break;
//
//		case 7:
//			for (int i = 0; i < q.size(); i++)
//			{
//				if (q[i] != '-' and q[i] != ',' and q[i] != '.' and qî[i] != '0' and q[i] != '1' and q[i] != '2' and q[i] != '3' and q[i] != '4' and q[i] != '5' and q[i] != '6')
//				{
//					q = "a";
//					break;
//				}
//			}
//			break;
//
//		case 8:
//			for (int i = 0; i < q.size(); i++)
//			{
//				if (q[i] != '-' and q[i] != ',' and q[i] != '.' and q[i] != '0' and q[i] != '1' and q[i] != '2' and q[i] != '3' and q[i] != '4' and q[i] != '5' and q[i] != '6' and q[i] != '7')
//				{
//					q = "a";
//					break;
//				}
//			}
//			break;
//
//		case 9:
//			for (int i = 0; i < q.size(); i++)
//			{
//				if (q[i] != '-' and q[i] != ',' and q[i] != '.' and q[i] != '0' and q[i] != '1' and q[i] != '2' and q[i] != '3' and q[i] != '4' and q[i] != '5' and q[i] != '6' and q[i] != '7' and q[i] != '8')
//				{
//					q = "a";
//					break;
//				}
//			}
//			break;
//
//		case 10:
//			for (int i = 0; i < q.size(); i++)
//			{
//				if (q[i] != '-' and q[i] != ',' and q[i] != '.' and q[i] != '0' and q[i] != '1' and q[i] != '2' and q[i] != '3' and q[i] != '4' and q[i] != '5' and q[i] != '6' and q[i] != '7' and q[i] != '8' and q[i] != '9')
//				{
//					q = "a";
//					break;
//				}
//			}
//			break;
//
//		case 11:
//			for (int i = 0; i < q.size(); i++)
//			{
//				if (q[i] != '-' and q[i] != ',' and q[i] != '.' and q[i] != '0' and q[i] != '1' and q[i] != '2' and q[i] != '3' and q[i] != '4' and q[i] != '5' and q[i] != '6' and q[i] != '7' and q[i] != '8' and q[i] != '9' and q[i] != 'A')
//				{
//					q = "a";
//					break;
//				}
//			}
//			break;
//
//		case 12:
//			for (int i = 0; i < q.size(); i++)
//			{
//				if (q[i] != '-' and q[i] != ',' and q[i] != '.' and q[i] != '0' and q[i] != '1' and q[i] != '2' and q[i] != '3' and q[i] != '4' and q[i] != '5' and q[i] != '6' and q[i] != '7' and q[i] != '8' and q[i] != '9' and q[i] != 'A' and q[i] != 'B')
//				{
//					q = "a";
//					break;
//				}
//			}
//			break;
//
//		case 13:
//			for (int i = 0; i < q.size(); i++)
//			{
//				if (q[i] != '-' and q[i] != ',' and q[i] != '.' and q[i] != '0' and q[i] != '1' and q[i] != '2' and q[i] != '3' and q[i] != '4' and q[i] != '5' and q[i] != '6' and q[i] != '7' and q[i] != '8' and q[i] != '9' and q[i] != 'A' and q[i] != 'B' and q[i] != 'C')
//				{
//					q = "a";
//					break;
//				}
//			}
//			break;
//
//		case 14:
//			for (int i = 0; i < q.size(); i++)
//			{
//				if (q[i] != '-' and q[i] != ',' and q[i] != '.' and q[i] != '0' and q[i] != '1' and q[i] != '2' and q[i] != '3' and q[i] != '4' and q[i] != '5' and q[i] != '6' and q[i] != '7' and q[i] != '8' and q[i] != '9' and q[i] != 'A' and q[i] != 'B' and q[i] != 'C' and q[i] != 'D')
//				{
//					q = "a";
//					break;
//				}
//			}
//			break;
//
//		case 15:
//			for (int i = 0; i < q.size(); i++)
//			{
//				if (q[i] != '-' and q[i] != ',' and q[i] != '.' and q[i] != '0' and q[i] != '1' and q[i] != '2' and q[i] != '3' and q[i] != '4' and q[i] != '5' and q[i] != '6' and q[i] != '7' and q[i] != '8' and q[i] != '9' and q[i] != 'A' and q[i] != 'B' and q[i] != 'C' and q[i] != 'D' and q[i] != 'E')
//				{
//					q = "a";
//					break;
//				}
//			}
//			break;
//
//		case 16:
//			for (int i = 0; i < q.size(); i++)
//			{
//				if (q[i] != '-' and q[i] != ',' and q[i] != '.' and q[i] != '0' and q[i] != '1' and q[i] != '2' and q[i] != '3' and q[i] != '4' and q[i] != '5' and q[i] != '6' and q[i] != '7' and q[i] != '8' and q[i] != '9' and q[i] != 'A' and q[i] != 'B' and q[i] != 'C' and q[i] != 'D' and q[i] != 'E' and q[i] != 'F')
//				{
//					q = "a";
//					break;
//				}
//			}
//			break;
//		}
//	}
//
//	if (q != "a")
//	{		
//		if (w == e)
//		{
//			cout <<"\n" << q << endl;
//		}
//		else
//		{
//			int j = 0;
//
//			if (q[0] == '-')
//			{
//				for (int i = (q.size() - 1); i >= 1;)
//				{
//					for (j;;)
//					{
//						if (q[i] == 'A')
//						{
//							r¸t -= 10 * pow(w, j);
//						}
//
//						else if (q[i] == 'B')
//						{
//							r¸t -= 11 * pow(w, j);
//						}
//
//						else if (q[i] == 'C')
//						{
//							r¸t -= 12 * pow(w, j);
//						}
//
//						else if (q[i] == 'D')
//						{
//							r¸t -= 13 * pow(w, j);
//						}
//
//						else if (q[i] == 'E')
//						{
//							r¸t -= 14 * pow(w, j);
//						}
//
//						else if (q[i] == 'F')
//						{
//							r¸t -= 15 * pow(w, j);
//						}
//
//						else if (q[i] == '0')
//						{
//							r¸t -= 0 * pow(w, j);
//						}
//
//						else if (q[i] == '1')
//						{
//							r¸t -= 1 * pow(w, j);
//						}
//
//						else if (q[i] == '2')
//						{
//							r¸t -= 2 * pow(w, j);
//						}
//
//						else if (q[i] == '3')
//						{
//							r¸t -= 3 * pow(w, j);
//						}
//
//						else if (q[i] == '4')
//						{
//							r¸t -= 4 * pow(w, j);
//						}
//
//						else if (q[i] == '5')
//						{
//							r¸t -= 5 * pow(w, j);
//						}
//
//						else if (q[i] == '6')
//						{
//							r¸t -= 6 * pow(w, j);
//						}
//
//						else if (q[i] == '7')
//						{
//							r¸t -= 7 * pow(w, j);
//						}
//
//						else if (q[i] == '8')
//						{
//							r¸t -= 8 * pow(w, j);
//						}
//
//						else if (q[i] == '9')
//						{
//							r¸t -= 9 * pow(w, j);
//						}
//
//						else if (q[i] == ',' or q[i] == '.')
//						{
//							j = 0;
//
//							i = (q.size() - 1);
//
//							for (j;;)
//							{
//								if (r,t == 0)
//								{
//									i--;
//									break;
//								}
//
//								if (r,t == 'A')
//								{
//									r,t += 10 * pow(w, j);
//								}
//
//								else if (r,t == 'B')
//								{
//									r,t += 11 * pow(w, j);
//								}
//
//								else if (÷èñëî[i] == 'C')
//								{
//									ïåðåâ¸ë += 12 * pow(íà÷àëî, j);
//								}
//
//								else if (÷èñëî[i] == 'D')
//								{
//									ïåðåâ¸ë += 13 * pow(íà÷àëî, j);
//								}
//
//								else if (÷èñëî[i] == 'E')
//								{
//									ïåðåâ¸ë += 14 * pow(íà÷àëî, j);
//								}
//
//								else if (÷èñëî[i] == 'F')
//								{
//									ïåðåâ¸ë += 15 * pow(íà÷àëî, j);
//								}
//
//								else if (÷èñëî[i] == '0')
//								{
//									ïåðåâ¸ë += 0 * pow(íà÷àëî, j);
//								}
//
//								else if (÷èñëî[i] == '1')
//								{
//									ïåðåâ¸ë += 1 * pow(íà÷àëî, j);
//								}
//
//								else if (÷èñëî[i] == '2')
//								{
//									ïåðåâ¸ë += 2 * pow(íà÷àëî, j);
//								}
//
//								else if (÷èñëî[i] == '3')
//								{
//									ïåðåâ¸ë += 3 * pow(íà÷àëî, j);
//								}
//
//								else if (÷èñëî[i] == '4')
//								{
//									ïåðåâ¸ë += 4 * pow(íà÷àëî, j);
//								}
//
//								else if (÷èñëî[i] == '5')
//								{
//									ïåðåâ¸ë += 5 * pow(íà÷àëî, j);
//								}
//
//								else if (÷èñëî[i] == '6')
//								{
//									ïåðåâ¸ë += 6 * pow(íà÷àëî, j);
//								}
//
//								else if (÷èñëî[i] == '7')
//								{
//									ïåðåâ¸ë += 7 * pow(íà÷àëî, j);
//								}
//
//								else if (÷èñëî[i] == '8')
//								{
//									ïåðåâ¸ë += 8 * pow(íà÷àëî, j);
//								}
//
//								else if (÷èñëî[i] == '9')
//								{
//									ïåðåâ¸ë += 9 * pow(íà÷àëî, j);
//								}
//								i--;
//								j++;
//							}
//
//							//âû÷èòàåì äðîáíóþ ÷àñòü
//							j = -1;
//
//							if (÷èñëî[i] == '.' or ÷èñëî[i] == ',')
//							{
//								goto ïðîäîëæèòü;
//							}
//							
//							else
//							{
//								i++;
//							}
//
//						ïðîäîëæèòü:
//							
//							for (int k = i + 1; k >= 0;)
//							{
//								for (j;;)
//								{
//									if (k >= ÷èñëî.size())
//									{
//										break;
//									}
//
//									if (÷èñëî[k] == 'A')
//									{
//										ïåðåâ¸ë -= 10 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == 'B')
//									{
//										ïåðåâ¸ë -= 11 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == 'C')
//									{
//										ïåðåâ¸ë -= 12 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == 'D')
//									{
//										ïåðåâ¸ë -= 13 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == 'E')
//									{
//										ïåðåâ¸ë -= 14 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == 'F')
//									{
//										ïåðåâ¸ë -= 15 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == '0')
//									{
//										ïåðåâ¸ë -= 0 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == '1')
//									{
//										ïåðåâ¸ë -= 1 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == '2')
//									{
//										ïåðåâ¸ë -= 2 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == '3')
//									{
//										ïåðåâ¸ë -= 3 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == '4')
//									{
//										ïåðåâ¸ë -= 4 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == '5')
//									{
//										ïåðåâ¸ë -= 5 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == '6')
//									{
//										ïåðåâ¸ë -= 6 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == '7')
//									{
//										ïåðåâ¸ë -= 7 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == '8')
//									{
//										ïåðåâ¸ë -= 8 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == '9')
//									{
//										ïåðåâ¸ë -= 9 * pow(íà÷àëî, j);
//									}
//									k++;
//									j--;
//								}
//
//								k = (i-1);
//								j = 0;
//
//								//âû÷èòàåì öåëóþ ÷àñòü
//
//								for (j;;)
//								{
//									if (÷èñëî[k] == '-')
//									{
//										i = k;
//										k--;
//										break;
//									}
//
//									if (÷èñëî[k] == 'A')
//									{
//										ïåðåâ¸ë -= 10 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == 'B')
//									{
//										ïåðåâ¸ë -= 11 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == 'C')
//									{
//										ïåðåâ¸ë -= 12 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == 'D')
//									{
//										ïåðåâ¸ë -= 13 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == 'E')
//									{
//										ïåðåâ¸ë -= 14 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == 'F')
//									{
//										ïåðåâ¸ë -= 15 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == '0')
//									{
//										ïåðåâ¸ë -= 0 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == '1')
//									{
//										ïåðåâ¸ë -= 1 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == '2')
//									{
//										ïåðåâ¸ë -= 2 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == '3')
//									{
//										ïåðåâ¸ë -= 3 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == '4')
//									{
//										ïåðåâ¸ë -= 4 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == '5')
//									{
//										ïåðåâ¸ë -= 5 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == '6')
//									{
//										ïåðåâ¸ë -= 6 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == '7')
//									{
//										ïåðåâ¸ë -= 7 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == '8')
//									{
//										ïåðåâ¸ë -= 8 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == '9')
//									{
//										ïåðåâ¸ë -= 9 * pow(íà÷àëî, j);
//									}
//									k--;
//									j++;
//								}
//							}
//						}
//						i--;
//						j++;
//						break;
//					}
//				}
//			}
//
//			//åñëè ïîëîæèòåëüíîå
//			else
//			{
//			    //åñëè öåëîå
//				for (int i = (÷èñëî.size() - 1); i >= 0;)
//				{
//					for (j;;)
//					{
//						if (÷èñëî[i] == 'A')
//						{
//							ïåðåâ¸ë += 10 * pow(íà÷àëî, j);
//						}
//
//						else if (÷èñëî[i] == 'B')
//						{
//							ïåðåâ¸ë += 11 * pow(íà÷àëî, j);
//						}
//
//						else if (÷èñëî[i] == 'C')
//						{
//							ïåðåâ¸ë += 12 * pow(íà÷àëî, j);
//						}
//
//						else if (÷èñëî[i] == 'D')
//						{
//							ïåðåâ¸ë += 13 * pow(íà÷àëî, j);
//						}
//
//						else if (÷èñëî[i] == 'E')
//						{
//							ïåðåâ¸ë += 14 * pow(íà÷àëî, j);
//						}
//
//						else if (÷èñëî[i] == 'F')
//						{
//							ïåðåâ¸ë += 15 * pow(íà÷àëî, j);
//						}
//
//						else if (÷èñëî[i] == '0')
//						{
//							ïåðåâ¸ë += 0 * pow(íà÷àëî, j);
//						}
//
//						else if (÷èñëî[i] == '1')
//						{
//							ïåðåâ¸ë += 1 * pow(íà÷àëî, j);
//						}
//
//						else if (÷èñëî[i] == '2')
//						{
//							ïåðåâ¸ë += 2 * pow(íà÷àëî, j);
//						}
//
//						else if (÷èñëî[i] == '3')
//						{
//							ïåðåâ¸ë += 3 * pow(íà÷àëî, j);
//						}
//
//						else if (÷èñëî[i] == '4')
//						{
//							ïåðåâ¸ë += 4 * pow(íà÷àëî, j);
//						}
//
//						else if (÷èñëî[i] == '5')
//						{
//							ïåðåâ¸ë += 5 * pow(íà÷àëî, j);
//						}
//
//						else if (÷èñëî[i] == '6')
//						{
//							ïåðåâ¸ë += 6 * pow(íà÷àëî, j);
//						}
//
//						else if (÷èñëî[i] == '7')
//						{
//							ïåðåâ¸ë += 7 * pow(íà÷àëî, j);
//						}
//
//						else if (÷èñëî[i] == '8')
//						{
//							ïåðåâ¸ë += 8 * pow(íà÷àëî, j);
//						}
//
//						else if (÷èñëî[i] == '9')
//						{
//							ïåðåâ¸ë += 9 * pow(íà÷àëî, j);
//						}
//
//						//åñëè äðîáíîå
//
//						else if (÷èñëî[i] == ',' or ÷èñëî[i] == '.')
//						{
//							//îáðàòíî âû÷èòàåì
//							j = 0;
//
//							i = (÷èñëî.size()-1);
//
//							for (j;; i--)
//							{
//								if (ïåðåâ¸ë == 0)
//								{
//									break;
//								}
//
//								else if (÷èñëî[i] == 'A')
//								{
//									ïåðåâ¸ë -= 10 * pow(íà÷àëî, j);
//								}
//
//								else if (÷èñëî[i] == 'B')
//								{
//									ïåðåâ¸ë -= 11 * pow(íà÷àëî, j);
//								}
//
//								else if (÷èñëî[i] == 'C')
//								{
//									ïåðåâ¸ë -= 12 * pow(íà÷àëî, j);
//								}
//
//								else if (÷èñëî[i] == 'D')
//								{
//									ïåðåâ¸ë -= 13 * pow(íà÷àëî, j);
//								}
//
//								else if (÷èñëî[i] == 'E')
//								{
//									ïåðåâ¸ë -= 14 * pow(íà÷àëî, j);
//								}
//
//								else if (÷èñëî[i] == 'F')
//								{
//									ïåðåâ¸ë -= 15 * pow(íà÷àëî, j);
//								}
//
//								else if (÷èñëî[i] == '0')
//								{
//									ïåðåâ¸ë -= 0 * pow(íà÷àëî, j);
//								}
//
//								else if (÷èñëî[i] == '1')
//								{
//									ïåðåâ¸ë -= 1 * pow(íà÷àëî, j);
//								}
//
//								else if (÷èñëî[i] == '2')
//								{
//									ïåðåâ¸ë -= 2 * pow(íà÷àëî, j);
//								}
//
//								else if (÷èñëî[i] == '3')
//								{
//									ïåðåâ¸ë -= 3 * pow(íà÷àëî, j);
//								}
//
//								else if (÷èñëî[i] == '4')
//								{
//									ïåðåâ¸ë -= 4 * pow(íà÷àëî, j);
//								}
//
//								else if (÷èñëî[i] == '5')
//								{
//									ïåðåâ¸ë -= 5 * pow(íà÷àëî, j);
//								}
//
//								else if (÷èñëî[i] == '6')
//								{
//									ïåðåâ¸ë -= 6 * pow(íà÷àëî, j);
//								}
//
//								else if (÷èñëî[i] == '7')
//								{
//									ïåðåâ¸ë -= 7 * pow(íà÷àëî, j);
//								}
//
//								else if (÷èñëî[i] == '8')
//								{
//									ïåðåâ¸ë -= 8 * pow(íà÷àëî, j);
//								}
//
//								else if (÷èñëî[i] == '9')
//								{
//									ïåðåâ¸ë -= 9 * pow(íà÷àëî, j);
//								}
//								j++;
//							}
//
//							//ïðèáàâëÿåì äðîáíóþ ÷àñòü
//							j = -1;
//
//							if (÷èñëî[i] == '.' or ÷èñëî[i] == ',')
//							{
//								goto next;
//							}
//							
//							else
//							{
//								i--;
//							}
//
//							next:
//							for (int k = (i+1) ; k >= 0;)
//							{
//								for (j;;)
//								{
//									if (k >= ÷èñëî.size())
//									{
//										break;
//									}
//
//									if (÷èñëî[k] == 'A')
//									{
//										ïåðåâ¸ë += 10 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == 'B')
//									{
//										ïåðåâ¸ë += 11 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == 'C')
//									{
//										ïåðåâ¸ë += 12 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == 'D')
//									{
//										ïåðåâ¸ë += 13 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == 'E')
//									{
//										ïåðåâ¸ë += 14 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == 'F')
//									{
//										ïåðåâ¸ë += 15 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == '0')
//									{
//										ïåðåâ¸ë += 0 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == '1')
//									{
//										ïåðåâ¸ë += 1 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == '2')
//									{
//										ïåðåâ¸ë += 2 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == '3')
//									{
//										ïåðåâ¸ë += 3 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == '4')
//									{
//										ïåðåâ¸ë += 4 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == '5')
//									{
//										ïåðåâ¸ë += 5 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == '6')
//									{
//										ïåðåâ¸ë += 6 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == '7')
//									{
//										ïåðåâ¸ë += 7 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == '8')
//									{
//										ïåðåâ¸ë += 8 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == '9')
//									{
//										ïåðåâ¸ë += 9 * pow(íà÷àëî, j);
//									}
//
//									k++;
//									j--;
//								}
//
//								k = (i-1);
//								j = 0;
//
//								//ïðèáàâëÿåì öåëóþ ÷àñòü
//								for (j;;)
//								{
//									if (k < 0)
//									{
//										i = k;
//										k--;
//										break;
//									}
//
//									else if (÷èñëî[k] == 'A')
//									{
//										ïåðåâ¸ë += 10 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == 'B')
//									{
//										ïåðåâ¸ë += 11 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == 'C')
//									{
//										ïåðåâ¸ë += 12 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == 'D')
//									{
//										ïåðåâ¸ë += 13 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == 'E')
//									{
//										ïåðåâ¸ë += 14 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == 'F')
//									{
//										ïåðåâ¸ë += 15 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == '0')
//									{
//										ïåðåâ¸ë += 0 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == '1')
//									{
//										ïåðåâ¸ë += 1 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == '2')
//									{
//										ïåðåâ¸ë += 2 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == '3')
//									{
//										ïåðåâ¸ë += 3 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == '4')
//									{
//										ïåðåâ¸ë += 4 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == '5')
//									{
//										ïåðåâ¸ë += 5 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == '6')
//									{
//										ïåðåâ¸ë += 6 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == '7')
//									{
//										ïåðåâ¸ë += 7 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == '8')
//									{
//										ïåðåâ¸ë += 8 * pow(íà÷àëî, j);
//									}
//
//									else if (÷èñëî[k] == '9')
//									{
//										ïåðåâ¸ë += 9 * pow(íà÷àëî, j);
//									}
//									k--;
//									j++;
//								}
//							}
//						}
//						i--;
//						j++;
//						break;
//					}
//				}
//			}
//		}
//
//		string îòâåò;
//
//		if (êîíåö == 10)
//		{
//			cout << "\n" << ïåðåâ¸ë << endl;
//		}
//
//		else
//		{
//			//ïåðåâîäèì ÷èñëî â äðóãóþ ñèñòåìó
//			//åñëè îòðèöàòåëüíîå
//
//			if (ïåðåâ¸ë < 0)
//			{
//				int i = 0;
//
//				int k = 1;
//
//				int a = int(ïåðåâ¸ë) * (-1);
//
//				float b = (ïåðåâ¸ë - (int)ïåðåâ¸ë) * (-1);
//
//				//ïåðåâîä öåëîé ÷àñòè
//				for (i; (int(a / êîíåö)) >= 0; i++)
//				{
//					if ((a - int(a / êîíåö) * êîíåö) == 15)
//					{
//						îòâåò.resize(i + 1);
//						îòâåò[i] = 'F';
//					}
//
//					if ((a - int(a / êîíåö) * êîíåö) == 14)
//					{
//						îòâåò.resize(i + 1);
//						îòâåò[i] = 'E';
//					}
//
//					if ((a - int(a / êîíåö) * êîíåö) == 13)
//					{
//						îòâåò.resize(i + 1);
//						îòâåò[i] = 'D';
//					}
//
//					if ((a - int(a / êîíåö) * êîíåö) == 12)
//					{
//						îòâåò.resize(i + 1);
//						îòâåò[i] = 'C';
//					}
//
//					if ((a - int(a / êîíåö) * êîíåö) == 11)
//					{
//						îòâåò.resize(i + 1);
//						îòâåò[i] = 'B';
//					}
//
//					if ((a - int(a / êîíåö) * êîíåö) == 10)
//					{
//						îòâåò.resize(i + 1);
//						îòâåò[i] = 'A';
//					}
//
//					if ((a - int(a / êîíåö) * êîíåö) == 9)
//					{
//						îòâåò.resize(i + 1);
//						îòâåò[i] = '9';
//					}
//
//					if ((a - int(a / êîíåö) * êîíåö) == 8)
//					{
//						îòâåò.resize(i + 1);
//						îòâåò[i] = '8';
//					}
//
//					else if ((a - int(a / êîíåö) * êîíåö) == 7)
//					{
//						îòâåò.resize(i + 1);
//						îòâåò[i] = '7';
//					}
//
//					else if ((a - int(a / êîíåö) * êîíåö) == 6)
//					{
//						îòâåò.resize(i + 1);
//						îòâåò[i] = '6';
//					}
//
//					else if ((a - int(a / êîíåö) * êîíåö) == 5)
//					{
//						îòâåò.resize(i + 1);
//						îòâåò[i] = '5';
//					}
//
//					else if ((a - int(a / êîíåö) * êîíåö) == 4)
//					{
//						îòâåò.resize(i + 1);
//						îòâåò[i] = '4';
//					}
//
//					else if ((a - int(a / êîíåö) * êîíåö) == 3)
//					{
//						îòâåò.resize(i + 1);
//						îòâåò[i] = '3';
//					}
//
//					else if ((a - int(a / êîíåö) * êîíåö) == 2)
//					{
//						îòâåò.resize(i + 1);
//						îòâåò[i] = '2';
//					}
//
//					else if ((a - int(a / êîíåö) * êîíåö) == 1)
//					{
//						îòâåò.resize(i + 1);
//						îòâåò[i] = '1';
//					}
//
//					else if ((a - int(a / êîíåö) * êîíåö) == 0)
//					{
//						îòâåò.resize(i + 1);
//						îòâåò[i] = '0';
//					}
//
//					a = int(a / êîíåö);
//
//					if (a == 0)
//					{
//						i++;
//						break;
//					}
//				}
//
//				//íóæíî öåëóþ íàîáîðîò
//				string kek;
//
//				int u = 0;
//
//				kek.resize(îòâåò.size());
//
//				for (int l = îòâåò.size() - 1; l >= 0; l--)
//				{
//					for (u;;)
//					{
//						kek[u] = îòâåò[l];
//						u++;
//						break;
//					}
//				}
//				îòâåò.resize(îòâåò.size()+1);
//
//				for (int y = 1; y <= îòâåò.size()-1; y++)
//				{
//					îòâåò[y] = kek[y - 1];
//				}
//
//				if (b == 0)
//				{
//					goto there;
//				}
//
//				i++;
//
//				îòâåò.resize(i + 1);
//				îòâåò[i] = '.';
//
//				i++;
//
//				//ïåðåâîä äðîáíîé ÷àñòè
//				for (k; k < 6; k++)
//				{
//					for (i;; i++)
//					{
//						if (int(b * êîíåö) == 15)
//						{
//							îòâåò.resize(i + 1);
//							îòâåò[i] = 'F';
//						}
//
//						if (int(b * êîíåö) == 14)
//						{
//							îòâåò.resize(i + 1);
//							îòâåò[i] = 'E';
//						}
//
//						if (int(b * êîíåö) == 13)
//						{
//							îòâåò.resize(i + 1);
//							îòâåò[i] = 'D';
//						}
//
//						if (int(b * êîíåö) == 12)
//						{
//							îòâåò.resize(i + 1);
//							îòâåò[i] = 'C';
//						}
//
//						if (int(b * êîíåö) == 11)
//						{
//							îòâåò.resize(i + 1);
//							îòâåò[i] = 'B';
//						}
//
//						if (int(b * êîíåö) == 10)
//						{
//							îòâåò.resize(i + 1);
//							îòâåò[i] = 'A';
//						}
//
//						if (int(b * êîíåö) == 9)
//						{
//							îòâåò.resize(i + 1);
//							îòâåò[i] = '9';
//						}
//
//						if (int(b * êîíåö) == 8)
//						{
//							îòâåò.resize(i + 1);
//							îòâåò[i] = '8';
//						}
//
//						else if (int(b * êîíåö) == 7)
//						{
//							îòâåò.resize(i + 1);
//							îòâåò[i] = '7';
//						}
//
//						else if (int(b * êîíåö) == 6)
//						{
//							îòâåò.resize(i + 1);
//							îòâåò[i] = '6';
//						}
//
//						else if (int(b * êîíåö) == 5)
//						{
//							îòâåò.resize(i + 1);
//							îòâåò[i] = '5';
//						}
//
//						else if (int(b * êîíåö) == 4)
//						{
//							îòâåò.resize(i + 1);
//							îòâåò[i] = '4';
//						}
//
//						else if (int(b * êîíåö) == 3)
//						{
//							îòâåò.resize(i + 1);
//							îòâåò[i] = '3';
//						}
//
//						else if (int(b * êîíåö) == 2)
//						{
//							îòâåò.resize(i + 1);
//							îòâåò[i] = '2';
//						}
//
//						else if (int(b * êîíåö) == 1)
//						{
//							îòâåò.resize(i + 1);
//							îòâåò[i] = '1';
//						}
//
//						else if (int(b * êîíåö) == 0)
//						{
//							îòâåò.resize(i + 1);
//							îòâåò[i] = '0';
//						}
//
//						b = ((b * êîíåö) - int(b * êîíåö));
//
//						if (b == 0)
//						{
//							k = 6;
//							break;
//						}
//
//						k++;
//
//						if (k == 6)
//						{
//							break;
//						}
//					}
//				}
//
//			there:
//				//âûâîäèì ïîëó÷èâøååñÿ ÷èñëî
//				îòâåò[0] = '-';
//
//				cout << "\nÏîëó÷èâøååñÿ ÷èñëî = ";
//
//				for (int z = 0; z < îòâåò.size(); z++)
//				{
//					cout << îòâåò[z];
//				}
//				cout << endl;
//			}
//
//			//åñëè ðàâíî 0
//			else if (ïåðåâ¸ë == 0)
//			{
//				îòâåò[0] = '0';
//
//				cout << "\nÏîëó÷èâøååñÿ ÷èñëî = 0"<<endl;
//			}
//
//			//åñëè ïîëîæèòåëüíîå
//			else
//			{
//				int i = 0;
//
//				int a = int(ïåðåâ¸ë);
//
//				float b = (ïåðåâ¸ë - (int)ïåðåâ¸ë);
//
//				//ïåðåâîä öåëîé ÷àñòè
//				for (i; (int(a / êîíåö)) >= 0; i++)
//				{
//					if ((a - int(a / êîíåö) * êîíåö) == 15)
//					{
//						îòâåò.resize(i + 1);
//						îòâåò[i] = 'F';
//					}
//
//					else if ((a - int(a / êîíåö) * êîíåö) == 14)
//					{
//						îòâåò.resize(i + 1);
//						îòâåò[i] = 'E';
//					}
//
//					else if ((a - int(a / êîíåö) * êîíåö) == 13)
//					{
//						îòâåò.resize(i + 1);
//						îòâåò[i] = 'D';
//					}
//
//					else if ((a - int(a / êîíåö) * êîíåö) == 12)
//					{
//						îòâåò.resize(i + 1);
//						îòâåò[i] = 'C';
//					}
//
//					else if ((a - int(a / êîíåö) * êîíåö) == 11)
//					{
//						îòâåò.resize(i + 1);
//						îòâåò[i] = 'B';
//					}
//
//					else if ((a - int(a / êîíåö) * êîíåö) == 10)
//					{
//						îòâåò.resize(i + 1);
//						îòâåò[i] = 'A';
//					}
//
//					else if ((a - int(a / êîíåö) * êîíåö) == 9)
//					{
//						îòâåò.resize(i + 1);
//						îòâåò[i] = '9';
//					}
//
//					else if ((a - int(a / êîíåö) * êîíåö) == 8)
//					{
//						îòâåò.resize(i + 1);
//						îòâåò[i] = '8';
//					}
//
//					else if ((a - int(a / êîíåö) * êîíåö) == 7)
//					{
//						îòâåò.resize(i + 1);
//						îòâåò[i] = '7';
//					}
//
//					else if ((a - int(a / êîíåö) * êîíåö) == 6)
//					{
//						îòâåò.resize(i + 1);
//						îòâåò[i] = '6';
//					}
//
//					else if ((a - int(a / êîíåö) * êîíåö) == 5)
//					{
//						îòâåò.resize(i + 1);
//						îòâåò[i] = '5';
//					}
//
//					else if ((a - int(a / êîíåö) * êîíåö) == 4)
//					{
//						îòâåò.resize(i + 1);
//						îòâåò[i] = '4';
//					}
//
//					else if ((a - int(a / êîíåö) * êîíåö) == 3)
//					{
//						îòâåò.resize(i + 1);
//						îòâåò[i] = '3';
//					}
//
//					else if ((a - int(a / êîíåö) * êîíåö) == 2)
//					{
//						îòâåò.resize(i + 1);
//						îòâåò[i] = '2';
//					}
//
//					else if ((a - int(a / êîíåö) * êîíåö) == 1)
//					{
//						îòâåò.resize(i + 1);
//						îòâåò[i] = '1';
//					}
//
//					else if ((a - int(a / êîíåö) * êîíåö) == 0)
//					{
//						îòâåò.resize(i + 1);
//						îòâåò[i] = '0';
//					}
//
//					a = int(a / êîíåö);
//
//					if (a == 0)
//					{
//						i++;
//						break;
//					}
//				}
//
//				//íóæíî çàïèñàòü öåëóþ ÷àñòü íàîáîðîò
//				string kek;
//
//				int u = 0;
//
//				kek.resize(îòâåò.size());
//
//				for (int l = îòâåò.size() - 1; l >= 0; l--)
//				{
//					for (u;;)
//					{
//						kek[u] = îòâåò[l];
//						u++;
//						break;
//					}
//				}
//
//				for (int y = 0; y <= îòâåò.size() - 1; y++)
//				{
//					îòâåò[y] = kek[y];
//				}
//
//				if (b == 0)
//				{
//					goto here;
//				}
//
//				îòâåò.resize(i + 1);
//				îòâåò[i] = '.';
//
//				i++;
//
//				//ïåðåâîä äðîáíîé ÷àñòè
//				for (int z = 1; z < 6;)
//				{
//					for (i; (int(b * êîíåö)) >= 0; i++)
//					{
//						if (int(b * êîíåö) == 15)
//						{
//							îòâåò.resize(i + 1);
//							îòâåò[i] = 'F';
//						}
//
//						else if (int(b * êîíåö) == 14)
//						{
//							îòâåò.resize(i + 1);
//							îòâåò[i] = 'E';
//						}
//
//						else if (int(b * êîíåö) == 13)
//						{
//							îòâåò.resize(i + 1);
//							îòâåò[i] = 'D';
//						}
//
//						else if (int(b * êîíåö) == 12)
//						{
//							îòâåò.resize(i + 1);
//							îòâåò[i] = 'C';
//						}
//
//						else if (int(b * êîíåö) == 11)
//						{
//							îòâåò.resize(i + 1);
//							îòâåò[i] = 'B';
//						}
//
//						else if (int(b * êîíåö) == 10)
//						{
//							îòâåò.resize(i + 1);
//							îòâåò[i] = 'A';
//						}
//
//						else if (int(b * êîíåö) == 9)
//						{
//							îòâåò.resize(i + 1);
//							îòâåò[i] = '9';
//						}
//
//						else if (int(b * êîíåö) == 8)
//						{
//							îòâåò.resize(i + 1);
//							îòâåò[i] = '8';
//						}
//
//						else if (int(b * êîíåö) == 7)
//						{
//							îòâåò.resize(i + 1);
//							îòâåò[i] = '7';
//						}
//
//						else if (int(b * êîíåö) == 6)
//						{
//							îòâåò.resize(i + 1);
//							îòâåò[i] = '6';
//						}
//
//						else if (int(b * êîíåö) == 5)
//						{
//							îòâåò.resize(i + 1);
//							îòâåò[i] = '5';
//						}
//
//						else if (int(b * êîíåö) == 4)
//						{
//							îòâåò.resize(i + 1);
//							îòâåò[i] = '4';
//						}
//
//						else if (int(b * êîíåö) == 3)
//						{
//							îòâåò.resize(i + 1);
//							îòâåò[i] = '3';
//						}
//
//						else if (int(b * êîíåö) == 2)
//						{
//							îòâåò.resize(i + 1);
//							îòâåò[i] = '2';
//						}
//
//						else if (int(b * êîíåö) == 1)
//						{
//							îòâåò.resize(i + 1);
//							îòâåò[i] = '1';
//						}
//
//						else if (int(b * êîíåö) == 0)
//						{
//							îòâåò.resize(i + 1);
//							îòâåò[i] = '0';
//						}
//						b = ((b * êîíåö) - int(b * êîíåö));
//
//						if (b == 0)
//						{
//							z = 6;
//							break;
//						}
//						z++;
//
//						if (z == 6)
//						{
//							break;
//						}
//					}
//				}
//
//
//			here:
//				//âûâîäèì ïîëó÷èâøååñÿ ÷èñëî
//
//				cout << "\nÏîëó÷èâøååñÿ ÷èñëî = ";
//
//				for (int i = 0; i < îòâåò.size(); i++)
//				{
//					cout << îòâåò[i];
//				}
//				cout << endl;
//			}
//		}
//	}
//
//	else
//	{
//	cout << "\nÈäè íàõóé" << endl;
//	}
//	return 0;
//}
