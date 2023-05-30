// project_university.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <fstream>

char* rus(const char* text);

int main()
{
	int n, m, p, i, j, k, cnt = 0, counter = 0;
	bool sort = 1, not_null;
	int temp, max;
	std::cout << rus("") << std::endl;
	std::cout << rus(""); std::cin >> n;
	std::cout << rus(""); std::cin >> m;
	int** a = new int* [n];
	p = m * n;
	int L = 0;
	int* c = new int[i];
	int* b = new int[p];

	std::cout << rus("\n") << std::endl;
	for ( i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			a[i][j] = 5 + rand();
			std::cout << std::setw(5) << a[i][j];
			b[p++] = a[i][j];
		}
		std::cout << std::endl;
	}
	for (i = 0; i < n; i++)
	{
		not_null = true;
		for (j = 0;j < m; j++)
		{
			if (a[i][j] == 0)
			{
				not_null = false;
				break;
			}
		}
		if (not_null)
		{
			counter++;
		}
		std::cout << rus("\n:") << std::endl;

		while (sort)
		{
			sort = 0;
			for (k = 0; k < p - 1; k++)
			{
				if (b[k] > b[k+1])
				{
					temp = b[k];
					b[k + 1] = temp;
					b[k + 1] = temp;
					sort = 1;
				}
			}
			for (k = 1; k < p; k++)
			{
				if (b[k] == b[k+1])
				{
					c[i++] = b[k];
					cnt++;
				}
			}
			for (i = 0; icnt; i++)
			{
				if (c[i] > max)
				{
					max = c[i];
				}

			}
			std::cout << rus("\n") << max;
			return 0;
		}
		char bufrus[256];
		char* rus(count char* text) {
			CharTooem(text, bufrus);
			return bufrus;
		}
	}

}


